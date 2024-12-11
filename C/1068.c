#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(90<=n){
        printf("A");
    }
    else if(70<=n){
        printf("B");
    }
    else if(40<=n){
        printf("C");
    }
    else{
        printf("D");
    }
    return 0;
}