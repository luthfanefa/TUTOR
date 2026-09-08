#include <iostream>

using namespace std;

int main () {

    float l,t,r,h;
    int pil;
    //inisiasi

    cout << "MENGHITUNG LUAS KERUCUT" << endl << endl ;

    cout << "1. dik jari-jari "<< endl 
         << "2. dik luas alas " << endl
         << "-" ;
    cin >> pil ;
    cout << endl ;

    switch (pil) {
    case 2:
        
        cout << "masukan luas alas kerucut : ";
        cin >> l;
        cout << "masukan tinggi kerucut : " ;
        cin >> t;
        cout << endl;
        //input nilai

        h = l*t/3 ;
        
        break;
    
    case 1:

        cout << "masukan jari-jari kerucut : ";
        cin >> r;
        cout << "masukan tinggi kerucut : " ;
        cin >> t;
        cout << endl;
        //input nilai

        h = (r*r*3.14)*t/3;

        break;
    }

    cout << "Volume kerucut : " << h ;
    cin >> h ;

    return 0 ;

}