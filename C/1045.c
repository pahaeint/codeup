#include <stdio.h>

int main() {
    long long n,m;
    scanf("%lld %lld", &n,&m);
    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f", n+m,n-m,n*m,n/m,n%m,(float)n/m);
    return 0;
}
