#include <stdio.h>
void main()
{
  int date, day, month, year;
  int leap = 0;
  printf("Enter date in this format (date/month/year): ");
  scanf("%d/%d/%d", &date, &month, &year);

  // checking if it is a leap year or not
  if (year % 400 == 0)
  {
    leap = 1;
  }
  else if (year % 100 == 0)
  {
    leap = 0;
  }
  else if (year % 4 == 0)
  {
    leap = 1;
  }
  else
  {
    leap = 0;
  }

  // date validation 1

  if (date > 31 || date < 1 || month > 12 || month < 1 || year < 1900)
  {
    printf("Invalid date");
  }

  // validation for Feb
  else if ((date > 28) && (month == 2) && (leap == 0))
  {
    printf("Invalid date");
  }

  // validation according to the number of days in months
  else if (((date > 30) && ((month == 2) || (month == 4) || (month == 6) || (month == 9) || (month == 11))))
  {
    printf("Invalid date");
  }

  else
  {
    printf("Valid date");
    printf("\n Enter day(1--7):");
    printf("\n1 for Monday\n2 for Tuesday\n3 for Wednesday\n4 for Thursday\n5 for Friday\n6 for Saturday\n7 for Sunday\t");
    scanf("%d", &day);

    // day validation
    while (day < 1 || day > 7)
    {
      printf("Input Error\nEnter again");
      scanf("%d", &day);
    }

    switch (day)
    {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    default:
      printf("Invalid");
      break;
    }

    // printing date
    printf(" ,%d", date);

    if ((date == 1) || (date == 21 || (date == 31)))
    {
      printf("st of ");
    }
    else if ((date == 2) || (date == 22))
    {
      printf("nd of ");
    }
    else if ((date == 3) || (date == 23))
    {
      printf("rd of ");
    }
    else
    {
      printf("th of ");
    }

    // printing month
    switch (month)
    {
    case 1:
      printf("January");
      break;
    case 2:
      printf("February");
      break;
    case 3:
      printf("March");
      break;
    case 4:
      printf("April");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;
    default:
      printf("Invalid");
      break;
    }

    // printing year
    printf(",%d ", year);
  }
}
