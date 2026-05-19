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

int main(){
    remotelampu lampuRumah;

    lampuRumah.setSaklarno(0,"Lampu teras rumah");
    lampuRumah.setSaklarno(1,"Lampu ruang tamu");
    lampuRumah.setSaklarno(2,"Lampu kamar tidur");
    lampuRumah.setSaklarno(3,"Lampu dapur");

    cout << lampuRumah.getSaklarno(0) << endl;
    cout << lampuRumah.getSaklarno(1) << endl;
    cout << lampuRumah.getSaklarno(2) << endl;
    cout << lampuRumah.getSaklarno(3) << endl;

    return 0;

}