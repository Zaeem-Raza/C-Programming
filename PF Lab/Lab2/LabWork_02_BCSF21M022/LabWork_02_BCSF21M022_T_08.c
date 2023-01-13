#include <stdio.h>
int main(){
  int input1;
  printf("Enter your choice:");
  scanf("%d",&input1);
  if(input1<1||input1>4){
    printf("Wrong Input");
  }
  else{
         if(input1==1){
           int radius;
           printf("Calculating the area of a circle\nEnter radius:");
           scanf("%d",&radius);
           float Area=3.14*(radius*radius);
           printf("The Area of the circle is %f",Area);
         }
         else if(input1==2){
           int length;
           int width;
           printf("Calculating the area of a rectangle\nEnter Length");
           scanf("%d",&length);
           printf("Enter width");
           scanf("%d",&width);
            float Area =length*width;
           printf("The area of this rectangle is %f",Area);
         }
         else if(input1==3){
           int base;
           int height;
           printf("Calculating area of a triangle\nEnter Base");
           scanf("%d",&base);
           printf("Enter height:");
          scanf("%d",&height);
          float Area=base*height*0.5;
          printf("The area of the triangle is %f",Area);
         }

        else if(input1=4){
        printf("Program End");

  }
}
}
