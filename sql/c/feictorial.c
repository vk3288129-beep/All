#include<stdio.h>
void facl()
{
  int n,f=1;
  printf("enter your number");
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
  { 
    f=f*i;
    printf("%d",i);
    
  }
  printf("factroial is : %d",f);
}
int main(){
    facl();
    return 0;

}