#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter your first number:");
    scanf("%d",&n1);
    printf("enter your last number:");
    scanf("%d",&n2);
    if(n1<n2){
    printf("first number is big");}
    else
    printf("last number is small");
    return 0;

    
}