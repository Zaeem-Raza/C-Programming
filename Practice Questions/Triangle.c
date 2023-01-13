/*
Consider the following recipe that your fellow has developed to solve a mathematical problem.
Help him by executing the recipe so that he may check whether it produces the correct output or not?
You need to tell that what output it produces when user enter/input x=70, y=40, z=70
You need to fill in the RAM and Console box while solving/executing this recipe.
*/

#include <stdio.h>
int main(){
  int x,y,z;
  int triangle=0;
  int equilateral=0;
  int isosceles=0;
  int scalene=0;
  printf("Enter three numbes");
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);

  if(((x+y)>z)||((y+z)>x)||((z+x)>y)){
    triangle=1;
      if((x==y)&&(y==z)){
        equilateral=1;
      }
      if((x==y)||(y==z)||(z==x)){
        isosceles=1;
      }
      if ((x!=z)&&(x!=y)&&(y!=z)){
        scalene=1;
      }

  }
else {
  triangle=0;
}

// output
printf("Triangle: %d\n",triangle);
printf("equilateral: %d\n",equilateral);
printf("isosceles: %d\n",isosceles);
printf("scalene: %d\n",scalene);


}
