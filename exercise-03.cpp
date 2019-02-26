/*
 Nama Program   : Swap!
 Nama           : Rahma Batari
 NPM            : 140810180052
 Tanggal Buat   : 26 Februari 2019
 Deskripsi      :
 */

#include <iostream>
using namespace std;


void swap (int& x, int& y) {
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main() {
    int a,b;
    cout <<"x :";
    cin >>a;
    cout<<"y :";
    cin>>b;
    
    swap(a,b);
    
    cout<<"\nSWAP\n"<<endl;
    cout<<"X :"<<a<<endl;
    cout<<"Y :"<<b<<endl;
    
}

