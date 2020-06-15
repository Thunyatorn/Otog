#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=a-1;j>=i;j--){
            printf("-");
        }
        for(j=1;j<=i;j++){
            if(a%2==1){
                if(j%2==1){
                    printf("^");
                }else if(j%2==0){
                    printf("*");
                }
            }else if(a%2==0){
                if(j%2==1){
                    printf("*");
                }else if(j%2==0){
                    printf("^");
                }
            }
        }
    printf("\n");
    }
}
