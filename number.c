#include<stdio.h>

void mani()
{
int number;
//printf("enter the number : ");
scanf("%d",&number);
if(number < 0){
printf("negative");
}
else if(number==0)
{
printf("zero");
}
else(number > 0)
{
printf("positive);
}
getch();
}