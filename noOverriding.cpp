#include<iostream>
using namespace std;

class baseclass{
    public:
        virtual void perkenalan()final{
            cout << "halo saya function dari base class";
        }
};

class derivedclass : public baseclass{
    public:
        void perkenalan(){
            cout << "halo saya function dari base class";
        }
};