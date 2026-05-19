#include<iostream>
using namespace std;

class orang {
    public:
        int umur;

        orang(int pumur) :
            umur(pumur)
        {
            cout << "orang dibuat dengan umur" << umur << "\n" << endl;
        }
};

class pekerja : public orang{
    public:
        pekerja(int pumur) :
            orang(pumur){
                cout << "pekerja dibuat\n" << endl;
            }
};

