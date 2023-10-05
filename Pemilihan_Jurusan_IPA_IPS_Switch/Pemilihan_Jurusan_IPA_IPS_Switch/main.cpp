//
//  main.cpp
//  Pemilihan_Jurusan_IPA_IPS_Switch
//
//  Created by Muhammad Askar Habibulloh on 20/09/23.
//

#include <iostream>

using namespace std;

string pilihjurusan(int a,int b){
    string jurusan;
    if (a>b) {
        jurusan = "IPA";
    }else if(a<b) {
        jurusan = "IPS";
    }else{
        int c;
        cin>>c;
        switch (c) {
          case 1:
            jurusan = "IPA";
            break;
          case 2:
            jurusan = "IPS";
            break;
          default:
            pilihjurusan(a,b);
        }
    }
    return jurusan;
}
int main(int argc, const char * argv[]) {
    int eksak1,eksak2,eksak3,noneksak1,noneksak2;
    double rataeksak,ratanoneksak;
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
    cout<<endl<<endl<<"Jurusan Kamu : "<<pilihjurusan(rataeksak,ratanoneksak)<<endl<<endl;
    return 0;}
