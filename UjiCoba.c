#include <stdio.h>

int main(){
    int num=0;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        if (i%num==0) printf("%d ",i);
    }
    return 0;
}