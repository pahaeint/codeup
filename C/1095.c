#include <stdio.h>

int main(){
    int n,i,a[10000],min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[1];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}