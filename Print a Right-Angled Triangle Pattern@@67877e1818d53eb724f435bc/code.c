#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=a;j<=i;j++){
            printf("* ");
        }
    printf("\n");
    }
}