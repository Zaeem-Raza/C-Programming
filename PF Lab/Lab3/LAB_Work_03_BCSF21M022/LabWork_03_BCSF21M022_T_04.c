#include <stdio.h>
int main(){
  int seconds;
  printf("Enter seconds");
  scanf("%d",&seconds);
  while(seconds<0){
    printf("Enter input again");
    scanf("%d",&seconds);
  }
  int Sec=0;
  Sec=seconds%60;

  int min=0;
min=seconds/60;
min=min%60;
int hours=0;
hours=seconds/3600;

printf("%d seconds = %d hours :%d minutes: %d seconds",seconds,hours,min,Sec);
}
