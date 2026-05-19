#include<iostream>
using namespace std;

class orang{
    public:
        int umur;
        orang(int pumur):
            umur(pumur)
            {
                cout << "orang dibuat dengan umur" <<  umur << "\n" <<endl;
            }
};

class pekerja : virtual public orang{
    public:
        pekerja(int pumur) :
            orang(pumur)
            {
                cout << "pekerja dibuat\n" << endl;
            }
};

class pelajar : virtual public orang{
    public:
        pelajar(int pumur) :
            orang(pumur)
            {
                cout << "pelajar dibuat\n" << endl;
            }
};

class budi : public pekerja,public pelajar{
    public:
        budi(int pumur) :
            pekerja(pumur),
            pelajar(pumur),
            orang(pumur) // hal ini dapat dilakukan jika menggunakan virtual
            {
                cout << "budi dibuat\n" << endl;
            }
};