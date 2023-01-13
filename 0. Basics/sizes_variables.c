#include <stdio.h>
int main()
{
     printf(" size of int : %d", sizeof(int));
     printf("\n size of float :%d", sizeof(float));
     printf("\n size of double :%d", sizeof(double));
     printf("\n size of char :%d", sizeof(char));
     printf("\n size of short :%d", sizeof(short));
     printf("\n size of short int :%d", sizeof(short int));
     // printf("\n size of short short int :%d",sizeof(short short int ));  error
     printf("\n size of long int  :%d", sizeof(long int));
     printf("\n size of long long :%d", sizeof(long long int));
     printf("\n size of long double :%d", sizeof(long double));
     //  printf("\n size of long long double :%d",sizeof(long long double));  error

     //  printf("\n size of long long long  :%d",sizeof(long long long  int)); //error
     // printf("\n size of long float :%d",sizeof(long float));
     printf("\n size of unsigned int :%d", sizeof(unsigned int));
     printf("\n size of signed int :%d", sizeof(signed int));
     printf("\n size of unsigned char :%d", sizeof(unsigned char));
     printf("\n size of signed char :%d", sizeof(signed char));
}
