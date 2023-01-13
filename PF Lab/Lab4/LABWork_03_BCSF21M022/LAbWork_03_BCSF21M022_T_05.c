                                                  /* Pyramid star shape*/

#include <stdio.h>
int main(){
  int rows;
  printf("Enter number of rows:");
  scanf("%d",&rows);

  while(rows<1){
    printf("Wrong input\nEnter Again:");
    scanf("%d",&rows);
  }
  int a=(rows-1);      // for no of spaces
  int b=1;      // for no of stars *

  for(int i=1;i<=rows;i++)     /*  outer loop*/{

      // 1st inner loop
      for(int j=1;j<=a;j++){
        printf(" ");
      }

      // 2nd inner loop
      for(int j=1;j<=b;j++){
        printf("*");

      }
      //3rd inner loop
     for(int j=1;j<=a;j++){
       printf(" ");
     }
     printf("\n");
     a=a-1;   // spaces
 b=b+2;  // stars

  }

 int temp=rows-1;

 a=a+1;   // spaces
b=b-2;  // stars


            // 2nd outer loop
  for(int i=1;i<=temp;i++)     /*  outer loop*/{

    a=a+1;   // spaces
   b=b-2;  // stars
      // 1st inner loop
      for(int j=1;j<=a;j++){
        printf(" ");
      }

      // 2nd inner loop
      for(int j=1;j<=b;j++){
        printf("*");

      }
      //3rd inner loop
     for(int j=1;j<=a;j++){
       printf(" ");
     }
     printf("\n");


  }


}
