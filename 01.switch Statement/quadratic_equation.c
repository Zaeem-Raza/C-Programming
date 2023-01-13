#include <stdio.h>
#include <math.h>
int main()
{
  printf("Solving Quadratic Equation ax^2+bx+c\n");
  float a, b, c;
  float disc = 0;
  float root1 = 0; // variables
  float root2 = 0;
  float Final_ans = 0;
  int complex = 0;

  printf("Input a:");
  scanf("%f", &a);
  printf("Input b:");
  scanf("%f", &b);
  printf("Input c:");
  scanf("%f", &c);

  disc = b * b - (4 * a * c);
  // printf("The discriminant is %d",disc);

  /* 3 cases here
Case 1: If discriminant is positive.
Case 2: If discriminant is zero.
Case 3: If discriminant is negative.

*/

  switch (disc > 0)
  {
  case 1:
    // if discriminant is greater than 0
    root1 = (-b + sqrt(disc)) / (2 * a);
    root2 = (-b - sqrt(disc)) / (2 * a);

    printf("Two distinct and real roots are :%.2f \t%.2f", root1, root2);
    break;

  case 0: // the disc is either zero or negative
    switch (disc < 0)
    { // zero
    case 0:
      root1 = root2 = -b / (2 * a);
      printf("The two equal and real roots are %.2f and \t %.2f", root1, root2);
      break;
    case 1: // negative
      root1 = root2 = (-b / 2 * a);
      complex = sqrt(-disc) / (2 * a);
      printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
             root1, complex, root2, complex);
      break;
    }
    break;
  }
}
