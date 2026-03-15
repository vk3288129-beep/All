#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    float avg;
    printf("enter your 5 element:\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&a[i]);
        sum +=a[i];

    }
    avg = sum/5.0;
    printf("sum=%d\n",sum);
    printf("average =%2f",avg);
    return 0;
}