//19. PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE
//LETTER OR NOT USING CONDATIONAL OPERATOR

#include <stdio.h>

int main(){
    char a ;
    printf("Enter a character = \n");
    scanf("%c",&a);
    if( a >=97 && a <= 122){
         printf("Character %c is lower case",a);
    }
    else if ( a >=65 && a<= 90)
    {
        printf("Character %c is upper case",a);
    }
    else 
    {
      printf("Invalid input");
    }
    return 0;
}