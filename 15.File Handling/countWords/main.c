#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    int count=1;
    FILE *f=fopen("test.txt","r");
    while(!(feof(f))){
      char c=fgetc(f);
      if(c==' '){
        count++;
      }
    }
    fclose(f);
    printf("Count: %d",count);
    return 0;
}