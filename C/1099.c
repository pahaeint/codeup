#include <stdio.h>

int main(){
    int i,j;
    int x = 2, y = 2;
    int a[11][11] = {};
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            scanf("%d", &a[i][j]);
        }
    }
    if(a[x][y] == 0){
        while(1){
            a[x][y] = 9;
            if(a[x][y+1] == 0){
                y++;
            }else if(a[x][y+1] == 1){
                if(a[x+1][y] == 0){
                    x++;
                }else if(a[x+1][y] == 1){
                    break;
                }else{
                    a[x+1][y] = 9;
                    break;
                }
            }else{
                a[x][y+1] = 9;
                break;
            }
        }
    }else if(a[x][y] == 2){
        a[x][y] = 9;
    }
    

    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}