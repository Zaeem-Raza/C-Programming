#include <stdio.h>
int main()
{
    int rows, cols ;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
int k=1;
    for(int i=1;i<=rows;i++){

      for(int j=k;j<=cols;j++,k++){
        printf("%-3d",k);
      }
      printf("\n");
    }
  }
