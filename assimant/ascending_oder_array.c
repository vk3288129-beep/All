#include<stdio.h>
int main()
{
    int a [20],i,j,temp,n;
    printf("enter number of lement");
    scanf("%d",&n);
    printf("enter your 5 element:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if (a[i>a[j]])
            {
                temp = a[j];
                a[i] = a[j];
                a[j] = temp;

            }
        }
    }
    printf("sorted array:\n");
    for(i=0; i<5; i++)
    {
      printf("%d",a[i]);
    }
    return 0;
}