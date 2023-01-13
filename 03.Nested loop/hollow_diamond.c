#include<stdio.h>
int main()
{
    int rows,a,b;
     printf("Enter number of rows: ");
    scanf("%d",&rows);
    while(rows<1){
      printf("Wrong input\nEnter again");
      scanf("%d",&rows);
    }
     a = rows; //for no of stars
     b = 0; // for no of spaces

        // 1st outer loop

        for(int i=0;i<rows;i++){

             // 1st inner loop for stars
             for(int j=0;j<a;j++){
               printf("*");
             }

             // 2nd inner loop
             for(int j=0;j<b;j++){
               printf(" ");
             }
             // 3rd inner loop for stars
             for(int j=0;j<a;j++){
               printf("*");
             }

          printf("\n");
          b=b+2;
          a=a-1;
        }




    // 2nd outer loop

            for(int i=0;i<rows;i++){
              b=b-2;
              a=a+1;
                 // 1st inner loop for stars
                 for(int j=0;j<a;j++){
                   printf("*");
                 }

                 // 2nd inner loop
                 for(int j=0;j<b;j++){
                   printf(" ");
                 }
                 // 3rd inner loop for stars
                 for(int j=0;j<a;j++){
                   printf("*");
                 }

              printf("\n");

            }
}
