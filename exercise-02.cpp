/*
 Nama Program   : Converst Cecius to Fahrenheit
 Nama           : Rahma Batari
 NPM            : 140810180051
 Tanggal Buat   : 26 Februari 2019
 Deskripsi      :
 */

#include <iostream>
using namespace std;

float konversiFahrenheit(int temp){
    return temp*9/5+32;
}

int main()
{
    int celcius;
    cout << "Celcius    = ";
    cin >> celcius;
    cout << "Fahrenheit = " << konversiFahrenheit(celcius);
    return 0;
}
