#include<stdio.h>
int n, m, x[1000][1000], sum=0;

int main(){
    int a, b, k, i, j;
    scanf("%d%d",&n,&m);
    if(n<=1000&&m<=1000){
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum=sum+x[i][b-1];
    }
    for(j=0;j<m;j++){
        sum=sum+x[a-1][j];
    }
    sum=sum-x[a-1][b-1];
    printf("%d",sum);
    }else{
    return 0;
    }
}
