//
//  main.cpp
//  Kelulusan-Mahasiswa-Berdasar-Rata-Rata
//
//  Created by Muhammad Askar Habibulloh on 19/09/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a,b;
    cout<<"Masukkan nilai pertama : \n";
    cin>>a;
    cout<<"Masukkan nilai kedua : \n";
    cin>>b;
    double ratarata = (a+b)/2;
    string status;
    if(ratarata>=60){
        status = "Lulus";
    }else{
        status = "Tidak Lulus";
    }
    cout<<"Mahasiswa "<<status;
    cout<<endl<<endl;
    return 0;
}
