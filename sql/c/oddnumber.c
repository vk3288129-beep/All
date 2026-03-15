#include <stdio.h>
void sum()
{
    int n,sum = 0,i=1;
    printf("enter your number");
    scanf("%d",&n);
    printf("%d",i);
    while (i<n)
    {
        i = i + 2;
        printf("%d",i);
        sum+=i;
    }
    printf("sum is %d", sum);
}
int main()
{
    sum();
    return 0;
} 
