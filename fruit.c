/*
name - lastname : thunyatorn jirachaisri
file name : fruit.c
*/

// depth first search algorithm

#include<stdio.h>
int a[15][15], n, m, max=0;

int fruit(int x, int y, int sum){
    if(x==n&&y==m){
        if(sum>max) max=sum;
    }
    if(x+1<=n) fruit(x+1, y, sum+a[x+1][y]);
    if(y+1<=m) fruit(x, y+1, sum+a[x][y+1]);
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    fruit(1, 1, a[1][1]);
    printf("%d",max);
}
