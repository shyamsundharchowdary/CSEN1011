#include<stdio.h>
int main()
{int number, i = 0, Next, first = 0, second = 1;
   printf("\n Please Enter the Range Number: ");
   scanf("%d",&number);
   while(i < number){
      if(i <= 1){
         Next = i;
      }
      else{
         Next = first + second;
         first = second;
         second = Next;
      }
      printf("%d \t", Next);
      i++;
   }
   return 0;
	
}
