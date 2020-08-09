//Q2.  Write a C/C++ program to check whether a string is palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50],b[50],temp;
    int i,l,flag=0;
    printf("Enter a string\n");
    gets(a);
    l = strlen(a);
    for(i=0;i<l;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<l/2;i++)
    {
        temp = b[i];
        b[i] = b[l-i-1];
        b[l-1-i] = temp;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]!=b[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nPalindrome string");
    }
    else
    {
        printf("Not a Palindrome string");
    }
}
