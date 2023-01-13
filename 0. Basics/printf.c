#include <stdio.h>
#include <stdlib.h>
void main()
{
  printf("Hello World :)\n");                 // simple print
                                              // printf itself is a function
  printf("my fav number is %d\n", 500);       // to print an integer
  printf("my fav %s is %d\n", "number", 500); // print a string and a number
  printf("my fav num is %f\n", 57.8);         // float number

  // using a variable
  int favnum = 7;  // 07 is octal number
  printf("my fav num is %i\n", favnum);

  char grade = 'A';
  printf("my grade is %c\n", grade);
}
