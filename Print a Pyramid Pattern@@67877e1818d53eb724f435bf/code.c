#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a-1;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
        printf("*");
        }
    printf("\n");
    }
}