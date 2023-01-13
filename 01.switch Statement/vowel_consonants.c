#include <stdio.h>
int main()
{
       char alphabet;
       printf("Enter the Character (A-Z)");
       scanf("%c", &alphabet);
       if (alphabet >= 'a' && alphabet <= 'z')
       {
              alphabet = alphabet - 32;
       }
       switch (alphabet)
       {
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
              printf("vowel");
              break;
       default:
              printf("consonant");
       }
}
