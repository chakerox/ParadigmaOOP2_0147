#include<iostream>
using namespace std;

class remotelampu{
    private:
        string saklarno[10];
    public:
        void setSaklarno(int i,string value){
            saklarno[i] = value;
        }
        string getSaklarno(int i){
            return saklarno[i];
        }
};