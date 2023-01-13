#include <stdio.h>
double getSales();
void findHighest(float a,float b,float c,float d);
int main(){
  float Northeast,Southeast,Northwest,Southwest;
  float v,w,x,y;
  //v for North Northeast
  //w for Southeast
  //x for Northwest
  //y for Southwest
    Northeast=getSales();
    Southwest=getSales();
    Northwest=getSales();
    Southwest=getSales();


    findHighest(Northeast,Southwest,Northwest,Southwest);
  }
double getSales(){
  float num;
    printf("Enter quaterly sales");
  scanf("%f",&num);
  while(num<0){
    printf("Invalid input\n");
    printf("Enter quaterly sales");
    scanf("%f",&num);
  }
  return num;
}
void findHighest(float a,float b,float c,float d){
  // a for north Northeast
  // b for Southeast
  //c for Northwest
  //d for Southwest
  printf("Highest Quaterly sales:\t");
  if(a>=b&&a>=c&&a>=d){
    printf("Northeast: %.2f",a);
  }

  else if(b>=a&&b>=c&&b>=d){
    printf("SouthEast:%.2f",b);
  }
  else if(c>=a&&c>=b&&c>=d){
    printf("NorthWest:%.2f",c);
  }
  else{
    printf("SouthWest:%.2f",d);
  }

}
