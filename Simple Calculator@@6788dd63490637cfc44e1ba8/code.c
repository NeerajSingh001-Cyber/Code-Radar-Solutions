#include<stdio.h>
int main(){
    int a,m;
    char op;
    scanf("%d%d%c",&a,&m,&op);
    if(op=='+')
    {
        printf("%d\n",a+m);
    }
    else if(op=='-')
    {
        printf("%d\n",a-m);
    }
    else if(op=='*');
    {
        printf("%d\n",a*m);
    }
    else if(op=='/')
    {   
        if(m==0)
        {
            printf("error\n");
        }
        else
        {
            printf("%d",a/m);
        }
    }
    else
    {
        printf("error\n");
    }
    

}