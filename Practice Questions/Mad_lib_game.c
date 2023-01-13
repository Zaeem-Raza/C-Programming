#include <stdio.h>
int main(){
  char color[10];
  char pluralnoun[20];
  char celebrityf[15];
  char celebrityl[15];

  printf("Enter a color:");
  scanf("%s",&color);
  printf("Enter a plural noun:");
    scanf("%s",&pluralnoun);
  printf("Enter a Celebrity:");
  scanf("%s %s",&celebrityf, celebrityl);

  printf("Roses are %s\n", color);
  printf("%s are blue\n", pluralnoun);
  printf("I love %s %s\n", celebrityf,celebrityl);
}
