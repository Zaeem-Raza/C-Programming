/*Get the number of month from the user and print the number of days in that month */
#include <stdio.h>
int main()
{
  int month;
  printf("Enter th number of month(1-12)");
  scanf("%d", &month);
  while (month < 1)
  {
    printf("Wrong input\nEnter again");
    scanf("%d", &month);
  }
  int days = 0;
  switch (month)
  {
  case 1:
    days = 31;
    break;
  case 2:
    days = 28 / 29;
    break;
  case 3:
    days = 31;
    break;
  case 4:
    days = 30;
    break;
  case 5:
    days = 31;
    break;
  case 6:
    days = 30;
    break;
  case 7:
    days = 31;
    break;
  case 8:
    days = 31;
    break;
  case 9:
    days = 30;
    break;
  case 10:
    days = 31;
    break;
  case 11:
    days = 30;
    break;
  case 12:
    days = 31;
    break;
  default:
    days = 0;
  }

  if (days == 0)
  {
    printf("Invalid input");
  }
  else
  {
    printf("This month has %d days", days);
  }
}
