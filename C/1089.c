#include <stdio.h>

int main(){
    int a,d,n,i,s;
    scanf("%d %d %d",&a,&d,&n);
    s=a;
    for(i=1;i<n;i++){
        s+=d;
    }
    printf("%d",s);
    return 0;
}