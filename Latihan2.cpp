#include <iostream>
using namespace std;

int main(){
    int loop,lulus=0,taklulus=0;
    char nilai;
    cin>>loop;
    for (int i=1;i<=loop;i++){
        cin>>nilai;
        if (nilai == 'A'|| nilai == 'B'||nilai =='C'||nilai=='D') lulus++;
        else if (nilai == 'F' || nilai == 'E') taklulus++;
        else;
    }
    cout<<"Lulus: "<<lulus<<endl;
    cout<<"Tidak Lulus: "<<taklulus<<endl;
}