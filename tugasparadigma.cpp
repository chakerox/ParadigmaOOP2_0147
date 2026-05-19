#include <iostream>
using namespace std;

// Abstract Class
class Rekening {
protected:
    string no;
    double saldo;

public:
    Rekening(string n, double s) {
        no = n;
        saldo = s;
    }

    // Pure Virtual Function
    virtual void admin() = 0;

    void info() {
        cout << "No Rek : " << no << endl;
        cout << "Saldo : Rp " << saldo << endl;
    }

    virtual ~Rekening() {}
};

// Rekening Syariah
class Syariah : public Rekening {
public:
    Syariah(string n, double s)
        : Rekening(n, s) {}

    void admin() override {
        cout << "Syariah bebas admin." << endl;
    }
};

// Rekening Konvensional
class Konvensional : public Rekening {
public:
    Konvensional(string n, double s)
        : Rekening(n, s) {}

    void admin() override {
        saldo -= 15000;
        cout << "Admin Rp 15000 dipotong." << endl;
    }
};

// Rekening Premium
class Premium : public Rekening {
public:
    Premium(string n, double s)
        : Rekening(n, s) {}

    void admin() override {

        if (saldo > 10000000) {
            cout << "Premium bebas admin." << endl;
        }
        else {
            saldo -= 50000;
            cout << "Admin Rp 50000 dipotong." << endl;
        }
    }
};

int main() {

    Rekening* r;

    Syariah a("Sariah01", 500000);
    Konvensional b("Konven1", 2000000);
    Premium c("PRM01", 8000000);

    cout << "=== SYARIAH ===" << endl;
    r = &a;
    r->admin();
    r->info();

    cout << endl;

    cout << "====== KONVENSIONAL ======" << endl;
    r = &b;
    r->admin();
    r->info();

    cout << endl;

    cout << "====== PREMIUM ======" << endl;
    r = &c;
    r->admin();
    r->info();

    return 0;
}