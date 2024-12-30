#include <stdio.h>

int main(){
    int w,h,b;
    double r;
    scanf("%d %d %d",&w,&h,&b);
    r=w*h*b;
    printf("%.2lf MB",r/8/1024/1024);

    return 0;
}