#include <stdio.h>
int sum(int num);
int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int result = sum(num);
  printf("%d", result);
  return 0;
}
int sum(int num) {
  if(num == 1) {
    return 1;
  }
  else {
    return num + sum(num-1);
  }
}
