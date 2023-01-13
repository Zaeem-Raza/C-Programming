#include <stdio.h>
#include <math.h>
float getDiameter(float radius){

   return radius*2;

}
float getCircumference(float radius){
  float circumference=2*3.14*radius;
  printf("The circumference is: %.3f\n",circumference);
}
float getArea(float radius){
  float Area= (3.14)*pow(radius,2);
  printf("The Area is %.4f\n",Area);
}
int main(){

// diameter = 2r
//circumference=2*pi*r
//Area =pi*r^2

  float radius;
  printf("Enter radius");
  scanf("%f",&radius);

   float dia=getDiameter(radius);
   printf("The diameter is: %.2f\n",dia);
   getCircumference(radius);
   getArea(radius);
}
