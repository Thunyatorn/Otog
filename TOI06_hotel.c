/*
name - lastname : thunyatorn jirachaisri
file name : TOI06_hotel.c
*/

#include<stdio.h>

int main(){
    int n, i, j, k, m, o, x, y, z;
    scanf("%d",&n);
    if(n>=1&&n<1000000) {
   	    i=n/15;
        x=n-15*i;
       	if(x<=14&&x>=10){
            i=i+1;
      	    x=0;
       	}
        j=x/5;
        y=x-j*5;
        if(y%4==0){
            o=y/4;
           	j=j+o;
           	y=0;
        }
       	k=y/2;
       	z=y-k*2;
       	m=z;
    }
    printf("%d",3000*i+1500*j+800*k+500*m);
}
