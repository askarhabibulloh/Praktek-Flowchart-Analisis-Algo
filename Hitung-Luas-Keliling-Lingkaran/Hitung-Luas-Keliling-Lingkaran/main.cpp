//
//  main.cpp
//  Hitung-Luas-Keliling-Lingkaran
//
//  Created by Muhammad Askar Habibulloh on 19/09/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    double jarijari,luas,keliling;
    cout<<"Masukkan jari-jari lingkaran dalam cm : \n";
    cin>>jarijari;
    cout<<endl;
    luas = 3.14*(pow(jarijari,2));
    keliling = 2*3.14*jarijari;
    cout<<"Luas lingkaran adalah : "<<luas<<endl<<"Keliling lingkaran adalah : "<<keliling<<endl<<endl;
    return 0;
}
