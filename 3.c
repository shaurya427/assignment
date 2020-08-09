//Q3.  Write a C/C++ program that lists down all the prime numbers in a range between a and b, where a and b are two whole numbers.
#include<stdio.h>
void main()
{
    int a,b,i,j,flag;
    printf("Enter two numbers between the prime numbers are needed\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        flag = 0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d ",i);
        }
    }
}
