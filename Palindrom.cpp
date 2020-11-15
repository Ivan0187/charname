#include <iostream>
//#include <string.h>
using namespace std;

int main(){
    int panjang=0;
    char kata[panjang+5];
    cin>>panjang;
    cin>>kata;
    getchar();
    char palindrom[panjang+5];
    for (int i=panjang-1,j=0;i>=0,j<=panjang;i--,j++){
            palindrom[j]=kata[i];
    }
    // for (int i=0;i<panjang;i++){
    //     cout<<palindrom[i];
    // }
    // len=strcmp(kata,palindrom);
    // cout<<len;
    for (int i=0;i<=panjang;i++){
        if (palindrom[i]!=kata[i]){
            cout<<"Bukan palindrom";
            return 0;
        }
    }
    cout<<"palindrom";
    
} 
