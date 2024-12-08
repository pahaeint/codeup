#include <stdio.h>

int main() {
    long long int n,m,l;
    scanf("%lld %lld %lld", &n, &m, &l);
    printf("%lld\n%.1lf", n+m+l, (float)(n+m+l)/3);
    return 0;
}