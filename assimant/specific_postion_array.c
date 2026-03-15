#include<stdio.h>
int main()
{
    int a[10],n,i,pos,item;
    printf("enter number of 5 6 element:\n");
    scanf("%d",&n);
    printf("enter element:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter position:\n");
    scanf("%d", & item);
    for(i=n; i>=pos; i--)
    {
      a[i]=a[i-1];
    }
    a[pos-1]= item;
    n++;
    printf("array after insertion:\n");
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}