#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int toss, call;
    srand(time(0));
    toss= rand()%2; 

printf("\nSay 'HEAD' or 'TAIL'!!! Press 0 for head and 1 for tail:\n  ");
scanf("%d", &call);

if (call==0 || call==1)
{
    if (toss==call)
          {if(toss==0)
          printf("**********  Wohoo!!!! You won the toss........ It's head.  **********\n ");
          else
          {
          printf("**********  Wohoo!!!! You won the toss........ It's tail.  **********\n");
          }}

    else
       {
           {if (toss==0)
           printf("**********  BETTER LUCK NEXT TIME........... It's a head.  **********\n");
           
           else
           {
               printf("**********  BETTER LUCK NEXT TIME........... It's a tail.  ********** \n ");
           }}
                                  
         }
    
}
else
{
 printf("**************  Invavlid call  ***************");
}
   return 0;
}
