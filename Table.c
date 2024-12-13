#include<stdio.h>
int main()
{
    int no,i,b;
    printf("Enter the no=");
    scanf("%d",&no);
    printf("The table of %d is-",no);
    for(i=1;i<=10;i++)
    {
        b=no*i;
        printf("\n%d*%d=%d",no,i,b);
    }
    return 0;
}