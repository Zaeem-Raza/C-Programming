#include <stdio.h>
int main() {
  int num1;
  int num2;
  int hcf;
  int lcm;

  printf("Enter Number 1: ");
  scanf("%d", &num1);

  printf("Enter Number 2: ");
  scanf("%d", &num2);

  for(int i=1; i<=num1 && i<=num2; i++) {
    if(num1 % i == 0 && num2 % i == 0) {
      hcf = i;
    }
  }
  printf("HCF is : %d\n", hcf);
  lcm = (num1 * num2) / hcf;
  printf("LCM is : %d\n", lcm);
}
