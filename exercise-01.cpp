/*
 Nama Program   : Fizz Buzz
 Nama           : Rahma Batari
 NPM            : 140810180051
 Tanggal Buat   : 26 Februari 2019
 Deskripsi      : Fizz==3, Buzz=5, fizzbuzz==3==5
 */

#include <iostream>
using namespace std;

void fizzbuzz(){
    int bil;
    for (bil=1; bil<=100; bil++){
        if (bil%3==0)
            cout<<"Fizz"<<endl;
        else if (bil%5==0)
            cout<<"Buzz"<<endl;
        else if(bil%15==0)
            cout<<"Fizz Buzz"<<endl;
        else
            cout<<bil<<endl;
    }
}

int main(){
 
    fizzbuzz();
    
}
