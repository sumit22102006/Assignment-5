#include<stdio.h>
int main ()
{
int j;
int i=1;
scanf("%d",&j);
int result =1;
while(i<=j){
    result=result*i;
    i++;
}
printf("%d\n",result);
    
}