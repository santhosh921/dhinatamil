#include <stdio.h>
#include<conio.h>

void  main()
{
    char r;
    int isLowercaseVowel, isUppercaseVowel;

    printf("\n Enter an alphabet: ");
    scanf("%c",&r);
    isLowercaseVowel = (r== 'a' || r == 'e' || r == 'i' || r == 'o' || r== 'u');

   
    isUppercaseVowel = (r == 'A' || r == 'E' || r== 'I' || r == 'O' || r == 'U');

 
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel", r);
    else
        printf("%c is a consonant", r);
 getch();
}
