#include<stdio.h>
int main(){
    int n,m;
    char op;
    scanf("%d %d %c",&n,&m,&op);
    if(op=="+")
    {
        printf("%d",n+m);
    }
    else if(op=="-")
    {
        printf("%d",n-m);
    }
    else if(op=="*");
    {
        printf("%d",n*m);
    }
    else if(op=="/")
    {   
        if(m==0)
        {
            printf("error\n");
        }
        else
        {
            printf("%d",n/m);
        }
    }
    else
    {
        printf("error\n");
    }
    

}