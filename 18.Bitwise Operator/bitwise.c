// count zeros and ones
#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int one = 0;
    int zero = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((num & 1) == 1)
            one++;
        else
            zero++;
        num >>= 1;   //right shift
    }
    printf("Number of zeros = %d\n", zero);
    printf("Number of ones = %d\n", one);
}

// even odd
// #include <stdio.h>
// int main (void)
// {
//     int num=-1;
//     while(num<0)
//     {
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     }
//     if((num&1)==1)
//     printf("ODD");
//     else
//     printf("EVEN");
// }

// check LSB
//  #include <stdio.h>
//  int main (void)
//  {
//      int num;
//      printf("Enter a number : ");
//      scanf("%d",&num);
//      if((num&1)==1)
//      printf("LSB is on");
//      else
//      printf("LSB is off");
//  }
//

// check MSB
// #include <stdio.h>
// int main (void)
// {
//     int num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     int mask = 1<<31;
//     if((num&mask)==0)
//     printf("MSB is off");
//     else
//     printf("MSB is on");
// }

// get nth bit
// #include <stdio.h>
// int main(void)
// {
//     int num;
//     int bit = -1;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     while (bit < 0 || bit >31)
//     {
//         printf("Enter the number of bit : ");
//         scanf("%d", &bit);
//     }
//     num>>=bit;
//     if ((num&1)==0)
//     printf("%dth bit is off.",bit);
//     else
//     printf("%dth bit is on.",bit);
// }

// set nth bit
// #include <stdio.h>
// int main(void)
// {
//     int num;
//     int bit = -1;
//     printf("Enter the number : ");
//     scanf("%d", &num);
//     while (bit < 0 || bit > 31)
//     {
//         printf("Enter the number of bit : ");
//         scanf("%d", &bit);
//     }
//     int newnum = num | (1<<bit);
//     printf("number before setting bit : %d\n",num);
//     printf("number after setting bit : %d\n",newnum);
// }

// clear nth bit
//  #include <stdio.h>
//  int main(void)
//  {
//      int num;
//      int bit = -1;
//      printf("Enter the number : ");
//      scanf("%d", &num);
//      while (bit < 0 || bit > 31)
//      {
//          printf("Enter the number of bit : ");
//          scanf("%d", &bit);
//      }
//      int newnum = num & (~(1<<bit));
//      printf("number before clearing bit : %d\n",num);
//      printf("number after clearing bit : %d\n",newnum);
//  }

// toggle nth bit
//  #include <stdio.h>
//  int main(void)
//  {
//      int num;
//      int bit = -1;
//      printf("Enter the number : ");
//      scanf("%d", &num);
//      while (bit < 0 || bit > 31)
//      {
//          printf("Enter the number of bit : ");
//          scanf("%d", &bit);
//      }
//      int newnum = num ^ (1<<bit);
//      printf("number before toggling bit : %d\n",num);
//      printf("number after toggling bit : %d\n",newnum);
//  }

// swap two number
//  #include <stdio.h>
//  int main (void)
//  {
//      int num1;
//      int num2;
//      printf("Enter number 1 : ");
//      scanf("%d",&num1);
//      printf("Enter number 2 : ");
//      scanf("%d",&num2);
//      num1 = num1 ^ num2;
//      num2 = num1 ^ num2;
//      num1 = num1 ^ num2;
//      printf("num1 = %d\n",num1);
//      printf("num2 = %d\n",num2);
//  }

// decimal to binary
//  #include <stdio.h>
//  int main (void)
//  {
//      int num;
//      printf("Enter the number : ");
//      scanf("%d",&num);
//      int arr[32];
//      for(int i = 31 ; i >=0 ; i--)
//      {
//          arr[i] = num & 1;
//          num>>=1;
//      }
//      printf("IN BINARY : ");
//      for(int i = 0 ; i < 32 ; i++)
//      {
//          printf("%d ",arr[i]);
//      }
//  }

// highest on bit
// #include <stdio.h>
// int main (void)
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int order=-1;
//     for(int i = 0 ; i < 32 ; i++)
//     {
//         if((num&1)==1)
//         order=i;
//         num>>=1;
//     }
//     if (order!=-1)
//     {
//         printf("highest on bit : %d",order);
//     }
//     else
//     {
//         printf("given number is zero");
//     }
// }

// lowest on bit
// #include <stdio.h>
// int main(void)
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d", &num);
//     int order = -1;
//     for (int i = 0; i < 32; i++)
//     {
//         if ((num & 1) == 1)
//         {
//             order = i;
//             break;
//         }
//         num >>= 1;
//     }
//     if (order != -1)
//     {
//         printf("highest on bit : %d", order);
//     }
//     else
//     {
//         printf("given number is zero");
//     }
// }