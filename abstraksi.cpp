#include<iostream>
using namespace std;

class AbsraksiKlas{
    private:
        string x,y;
    public:

        // method untuk mengisi nilai
        // private member
        void setXY(string a, string b){
            x = a;
            y = b;
        }
        //menampilkan nilai private member
        void display(){
            cout << "nilai x = " << x << endl;
            cout << "nilai y = " << y << endl;
        }
};