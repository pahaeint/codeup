#include <stdio.h>

int main(){
    int n,i;
    int sum = 0;
    scanf("%d",&n);
    for(i=1;sum<n;i++){
        sum=sum+i;
    }
    printf("%d", i-1);
    return 0;
}