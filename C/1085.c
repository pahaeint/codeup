#include <stdio.h>

int main(){
    long long int h,b,c,s;
    double r;
    scanf("%lld %lld %lld %lld",&h,&b,&c,&s);
    r=h*b*c*s;
    printf("%.1lf MB",r/8/1024/1024);

    return 0;
}