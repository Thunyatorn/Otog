#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=a-1;j>i;j--){
            printf("-");
        }
        for(int j=1;j<=i+1;j++){
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
    return 0;
}
