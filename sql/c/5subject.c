#include<stdio.h>
int main(){
    int English,math,hindi,biology,computer,sum,ave;
    printf("enter your sub.English,math,hindi,biology,computer");
    scanf("%d,%d,%d,%d,%d",&English,&math,&hindi,&biology,&computer);
    sum = English+math+hindi+biology+computer;
    float p=(sum/500)*100;
    printf("sum is %d\n",sum);
    peintf("averag is %d\n",sum/5);
    printf("percentage is %d"p);
    return 0;
}