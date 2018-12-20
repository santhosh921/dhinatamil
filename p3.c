#include <stdio.h> 
#include<conio.h>  
void main() 
{ 
    int c; 
  
    printf("\nEnter the number  c is : "); 
    scanf("%d", &c); 
  
    if (c> 0) 
        printf("%d is positive.", c); 
    else if (c < 0) 
        printf("%d is negative.", c); 
    else if (c == 0) 
        printf("%d is zero.", c); 
  
    getch();
} 
