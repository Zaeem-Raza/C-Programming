#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
  char name[SIZE];
  char Describe[999];
  FILE *f = fopen("bcsf21m022.html", "w");
  if (!f)
  {
    printf("File not found");
  }
  else
  {
    printf("Enter your name: ");
    gets(name);
    // scanf("%[^\n]",name);
    fprintf(f, "<html>\n<head>\n</head>\n<body>\n   <center> \n    <h1> %s </h1> \n   </center>", name);

    printf("Describe yourself: ");
    gets(Describe);
    //   printf("input: %s",Describe);
    fprintf(f, "\n    <hr> \n       %s \n     <hr> \n</body>\n</html>", Describe);
  }
  return 0;
}
