/*
name - lastname : thunyatorn jirachaisri
file name : pattern_9.c
*/

//long method

/*
//short method

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d: ",i);
        printf("*");
        for(int j=1;j<=10;j++){
            k=pow(2,j);
            if(i%k==0){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d: ",i);
        printf("*");
        if(i%2==0){
            printf("*");
        }
        if(i%4==0){
            printf("*");
        }
        if(i%8==0){
            printf("*");
        }
        if(i%16==0){
            printf("*");
        }
        if(i%32==0){
            printf("*");
        }
        if(i%64==0){
            printf("*");
        }
        if(i%128==0){
            printf("*");
        }
        if(i%256==0){
            printf("*");
        }
        if(i%512==0){
            printf("*");
        }
        if(i%1024==0){
            printf("*");
        }
        if(i%2048==0){
            printf("*");
        }
        if(i%4096==0){
            printf("*");
        }
        if(i%8192==0){
            printf("*");
        }
        if(i%16384==0){
            printf("*");
        }
        if(i%32768==0){
            printf("*");
        }
        if(i%65536==0){
            printf("*");
        }
        if(i%131072==0){
            printf("*");
        }
        if(i%262144==0){
            printf("*");
        }
        if(i%524288==0){
            printf("*");
        }
        if(i%1048576==0){
            printf("*");
        }
        if(i%2097152==0){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
