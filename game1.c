#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,nguess=1;
    srand(time(0));
    num=rand()%10+1;
 do
 {
     printf("Enter number between 1 to 10\n");
     scanf("%d",&guess);
     if(guess<num)
     {

         printf("higher number please!\n");
     }
     else if(guess>num)
     {

       printf("lower number please!\n");
     }
     else
     {

         printf("CONGO ! you got the number in %d attempt ",nguess);
     }

     nguess++;

 }
 while(guess!=num);







}
