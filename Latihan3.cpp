#include <iostream>
using namespace std;
//Latihan 3
int main(){
    int ganjil=0,genap=0;
    while (true){
        int angka;
        cin>>angka;
        if (angka<0) break;
        if (angka % 2 ==0 ) genap++;
        if (angka % 2 !=0 ) ganjil++;
    }
    cout<<"Genap: "<<genap<<endl;
    cout<<"Ganjil: "<<ganjil<<endl;
}