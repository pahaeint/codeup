#include <stdio.h>

int main(){
    long long int a,r,n,i,p;
    scanf("%lld %lld %lld",&a,&r,&n);
    p=a;
    for(i=1;i<n;i++){
        p=p*r;
    }
    printf("%lld",p);
    return 0;
}