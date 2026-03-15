#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter your 5 elemenl:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("array element are:\n");
    for(i=0; i<5; i++){
    printf("%d \n",a[i]);
    }
    return 0;
}