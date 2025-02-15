#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a;i>=a;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
    printf("\n");    
    }
}