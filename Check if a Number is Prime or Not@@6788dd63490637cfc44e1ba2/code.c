#include<stdio.h>
int main(){
    int n;
    int a=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            a++;
        }
    }
    if(a==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}