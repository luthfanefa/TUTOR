#include <iostream>

using namespace std;

int main () {

     int pil_typing, pil_pang, pil_lagu, pil = 1;


 while (pil == 1){
    cout << "standar tiktok atau engga" << endl << endl;
   
    cout << "tipe typing : " << endl
         << "1. mau bagaimanapun, tetep oke " << endl
         << "2. dry texy = redflag, baca chat pake nada" << endl
         << "-";
    cin >> pil_typing ;
    cout << endl;

    cout << "panggilan : " << endl
         << "1. mau bagaimanapun, tetep oke " << endl
         << "2. kalau manggil nama = greenflag" << endl
         << "-";
    cin >> pil_pang ;
    cout << endl;

    cout << "lagu : " << endl
         << "1. mau bagaimanapun, tetep oke " << endl
         << "2. oasis = ganteng" << endl
         << "-";
    cin >> pil_lagu ;
    cout << endl;

    if (pil_typing == 2) {
        if (pil_pang == 2) {
            if (pil_lagu == 2) {
                cout << "STANDAR TIKTOK BANGET" << endl ;
            } else if (pil_lagu == 1) {
                cout << "STANDAR TIKTOK MENENGAH" << endl;
            }

        }else if (pil_pang == 1) {
            if (pil_lagu == 2) {
                cout << "STANDAR TIKTOK MENENGAH" << endl ;
            } else if (pil_lagu == 1) {
                cout << "STANDAR TIKTOK RENDAH" << endl;
            }
        }


    } else if (pil_typing == 1) {
         if (pil_pang == 2) {
            if (pil_lagu == 2) {
                cout << "STANDAR TIKTOK MENENGAH" << endl ;
            } else if (pil_lagu == 1) {
                cout << "STANDAR TIKTOK RENDAH" << endl;
            }

        }else if (pil_pang == 1) {
            if (pil_lagu == 2) {
                cout << "STANDAR TIKTOK RENDAH" << endl ;
            } else if (pil_lagu == 1) {
                cout << "selamat, anda normal" << endl;
            }
        }
    }


    cout << endl << "test lagi? (1 untuk mengulangi lagi)" << endl << "-";
    cin >> pil ;
    cout << endl;
 }

    return 0 ;

}