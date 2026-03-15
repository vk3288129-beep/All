#include<stdio.h>
// int main(){
// int n,sum=0;
// printf("enter your number");
// scanf("%d",&n);
// for(int i=1;i<=n;i++)
// {
//     sum=sum+i;

// }
// printf("sum is %d",sum);
// return 0;
// }
int main()
{
    int n,sum=0,i=0;
    printf("enter your number/n");
    scanf("%d",&n);
    printf(" %d",i);
    do{
         i=i+2;
        printf("enter number %d/n",i);
        sum=sum+i;
    }
    while (i<n);
  printf("sum is %d",sum);
    return 0;

    
}