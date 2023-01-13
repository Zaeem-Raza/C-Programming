#include <stdio.h>
float calculateRetail(float x,float y);
int main(){
float wholesale_cost;
float markup_percentage;
float Retail;

   printf("Enter the wholesale Price");
   scanf("%f",&wholesale_cost);
   while(wholesale_cost<0){
     printf("Invalid input");
     printf("\nEnter the wholesale Price");
     scanf("%f",&wholesale_cost);
   }
   printf("Enter the markup percentage:");
   scanf("%f",&markup_percentage);
   while(markup_percentage<0||markup_percentage>100){
     printf("Invalid input");
     printf("\nEnter the markup_percentage");
     scanf("%f",&markup_percentage);
   }
   Retail=calculateRetail(wholesale_cost,markup_percentage);
   printf("The retail price is %.2f",Retail);
}
float calculateRetail(float x,float y){
  // x for wholesale and y for markup
float Result;
float z=x;
Result=(x/100)*y+z;
return Result;
}
