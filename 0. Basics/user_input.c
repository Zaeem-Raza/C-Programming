#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  // this is how to get user input as a statement
  char name[20];
  printf("Enter your name:");
  fgets(name, 20, stdin);
  printf("Your name is %s", name);
}
