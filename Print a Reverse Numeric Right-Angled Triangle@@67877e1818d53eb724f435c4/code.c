#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=i;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}