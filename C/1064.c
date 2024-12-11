#include <stdio.h>

int main() {
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    printf("%d",(n<m ? n:m)<l ? (n<m ? n:m):l);
    return 0;
}