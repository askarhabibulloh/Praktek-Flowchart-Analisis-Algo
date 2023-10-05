//
//  main.cpp
//  Pemilihan-Jurusan-IPA-IPS
//
//  Created by Muhammad Askar Habibulloh on 19/09/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int eksak1,eksak2,eksak3,noneksak1,noneksak2,nojur=0;
    double rataeksak,ratanoneksak;
    string jurusan;
    cout<<"Masukkan nilai eksakta pertama : \n";
    cin>>eksak1;
    cout<<"Masukkan nilai eksakta kedua : \n";
    cin>>eksak2;
    cout<<"Masukkan nilai eksakta ketiga : \n";
    cin>>eksak3;
    cout<<"Masukkan nilai non eksakta pertama : \n";
    cin>>noneksak1;
    cout<<"Masukkan nilai non eksakta kedua : \n";
    cin>>noneksak2;
    rataeksak=(eksak1+eksak2+eksak3)/3;
    ratanoneksak=(noneksak1+noneksak2)/2;
    if(rataeksak>ratanoneksak){
        jurusan="IPA";
    }else if (rataeksak<ratanoneksak){
        jurusan="IPS";
    }else{
        while (nojur!=1 || nojur!=2) {
            cout<<"Pilih jurusan dengan mengetikkan nomor \n1.IPA \n2.IPS \n";
            cin>>nojur;
            if(nojur==1){
                jurusan="IPA";
                break;
            }else if (nojur==2){
                jurusan="IPS";
                break;
            }else{
                continue;
            }
        }
    }
    cout<<endl<<endl<<"Jurusan Kamu : "<<jurusan<<endl<<endl;
    return 0;
}
