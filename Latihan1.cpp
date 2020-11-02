#include <iostream>
using namespace std;

int main(){
    int angka,hasil=0;
    cin>>angka;
    for (int i=1;i<=angka;i++){
        if (i%5==0){
            hasil+=i;
        }
    }
    cout<<hasil;
}