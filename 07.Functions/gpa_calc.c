#include <stdio.h>
float gpa(int marks){

  if(marks>=85){
    return 4.0;
  }
  else if(marks>=80){
    return 3.7;
  }
  else if(marks>=75){
    return 3.3;
  }
  else if(marks>=70){
    return 3.0;
  }
  else if(marks>=65){
    return 2.7;
  }
  else if(marks>=60){
    return 2.3;
  }
  else if(marks>=60){
    return 2.3;
  }
  else if(marks>=58){
    return 2.00;
  }
  else if(marks>=55){
    return 1.70;
  }
  else if(marks>=50){
    return 1.00;
  }
  else{
    return 0.0;
  }

}
int main(){
  int sub;
  do{
 printf("Enter marks in this subject");
 scanf("%d",&sub);
}while(sub<0||sub>100);

  float y=0;
  y=gpa(sub);
  printf("Your gpa is:%.2f",y);
}
