#include<stdio.h>
#include<conio.h>
void main()
{ 
   int number;
   printf("\nEnter an integer: ");
   scanf("%d",&number);
   if ( number%2 == 0 )
   {
      printf("\n%d is an even number", number);
    }
   else
   {
   
      printf("\n%d is an odd number", number); 
   }
   getch();
}
