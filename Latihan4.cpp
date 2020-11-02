#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x=0,y=0;
    cin>>x>>y;
    if (x>y){ return 0; }
    else if (x<y){
        int a=3,b=1,c=0;
        float intervalA=0, intervalB=0;
        while (true){
            a++;b++;c++;
            intervalA=0.25*pow(x,a)+0.5*pow(x,b)+pow(x,c);
            //cout<<intervalA<<endl;
            intervalB=0.25*pow(y,a)+0.5*pow(y,b)+pow(y,c);
            //cout<<intervalB<<endl;
            break;
        }
        double delta=intervalB-intervalA;
        cout<<delta;
    }
    
}