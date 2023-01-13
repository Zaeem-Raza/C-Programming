                        /* A
                         A B C
                        A B C  D
                      A B C D E */

#include <stdio.h>
int main(){
  int rows;

int alpha=1;
  printf("Enter number of rows");
  scanf("%d",&rows);
  int space=rows-1;

  for(int i=1;i<=rows;i++){
int ch=65;
            for(int j=1;j<=space;j++){
                   printf(" ");
                 }
           for(int j=1;j<=alpha;j++){
                  printf("%c",ch++);
                }
       printf("\n");
       space--;
       alpha+=2;
  }
}
