#include <stdio.h>
int main(){
  int x;
  // printing the 5 times the value of given integer
  printf("Enter an integer:\n");
  scanf("%i",&x);
  int Ans=x*5;
  printf("%i\n",Ans);

  // printing the given integer 5 times
  for(int i=0;i<5;i++){
    printf("%d\n",x);
  }
}
