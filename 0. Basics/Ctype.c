#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    printf("\nA is alpha %d", isalpha('A'));
    printf("\na is alpha %d", isalpha('a'));
    printf("\nis alpha %d", isalpha(' '));
    printf("\n6 is digit %d", isdigit('6'));
    printf("\nis blank: %d", isblank(' '));
    printf("\nf is blank: %d", isblank('f'));
    printf("\nF is alnum: %d", isalnum('F')); // returns 2 if lower, 1 if upper
    printf("\n7 is alnum: %d", isalnum('7')); // returns 2 if lower, 1 if upper  //returns 4 if digit
    printf("\ne is alnum: %d", isalnum('e')); // returns 2 if lower, 1 if upper
    printf("\n is alnum: %d", isalnum(' '));  // returns 2 if lower, 1 if upper
    printf("\nc is lower: %d", islower('c')); // returns 2
    printf("\nD is upper: %d", isupper('D'));
    printf("\n%c", tolower('A'));
    printf("\n%c", toupper('d'));
    printf("\n* is xdigit %d", isxdigit('*'));
    printf("\na is xdigit %d", isxdigit('a'));
    printf("\nback n is is control  %d", iscntrl('\n'));
    printf("\nk is is space  %d", isspace('k'));
    printf("\nback n is space  %d", isspace('\n'));
    printf("\n,  is punct  %d", ispunct(','));
    printf("\np is punct  %d", ispunct('p'));
    printf("\np is print  %d", isprint('p'));
    printf("\nback t is print  %d", isprint('\t'));
    printf("\nback t is graph  %d", isgraph('\t')); // returns 0 at space
    printf("\nj is graph  %d", isgraph('8'));       // returns 0 at space
    printf("\nspace is graph  %d", isgraph(' '));   // returns 0 at space
   
}