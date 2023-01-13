#include <stdio.h>
int main()
{
  // int x=60;
  // printf("\n value of x: %d",x);
  // printf("\naddress of x: %d",&x);
  // int *ptr=&x;
  // printf("\nvalue of x using ptr%d",*ptr);
  // printf("\npointer of x using ptr%d",ptr);
  // printf("\n address of pointer%d",&ptr);
  // printf("\nSize of int %d\n:",sizeof(x));
  // ptr++;
  // printf("After increment: \n");
  // printf("\n value of x: %d", x);
  // printf("\naddress of x: %d", &x);
  // printf("\nvalue of x using ptr%d", ptr);
  // printf("\n address of pointer%d", &ptr);
  // printf("\nvalue at p %d", *ptr);

  // char *p=&x;
  // printf("\nValue of x %d",x);
  // printf("\nValue of x %d",*p);
  // printf("\nValue of p %d",p);
  // printf("\nAddress  of p %d",&p);
  // p++;
  // printf("\nValue after increment: \n");
  // printf("\nValue of x %d",x);
  // printf("\nValue at p %d",*p);
  // printf("\naddress of Value at p %d",p);
  // printf("\nAddress  of p %d",&p);

  //  x = 2;
  // int *p = &x;
  // printf("\nvalue of x: %d", x);
  // printf("\nvalue of x using point: %d", *p);
  // printf("\naddress of x : %d", &x);
  // printf("\naddress of x using point : %d", p);
  // printf("\naddress of p : %d", &p);

  // decleration

  // int x=3;
  // int p=&x;
  // printf("  %d",*p);
  // warning but no error

  // int x=3;
  // int *p=&x;
  // int q=p;
  // printf("%d",q);    //warning but no error  //prints address of x
  // // printf("%d",*q);  //error)

  //   int y=6;
  //  int *p=&y;
  //  int *q=p;
  //  printf("%d",*q);  // warning but prints 6

  // int z[]={1,4,6,9,14,78,65};
  // int *p=z;
  // printf("\n%d",*p);   //1
  // printf("\n%d",*p++);  //1 
  // printf("\n%d",*p);    //4
  // printf("\n%d",*++p);  //6
  // printf("\n%d",++*p); // increment in the content placed at p
  // printf("\n%d",*(++p));//9
  // printf("\n%d",*(p++));//9
  // printf("\n%d",*(p));//14

  // int x=5;
  // int *ptr;   //wild pointer
  // printf("%d",*ptr);    // prints 0

  // double x=8.2;
  // double *ptr;
  // ptr=&x;
  // printf("\n%lf",ptr);  //prints 0.000  //address of x 
  // printf("\n%lf",*ptr);  //prints 8.2

  // int x=1;
  // int *p=&x;
  // int *q=p;
  // *q=5;
  // printf("\n%d",x);  // prints 5

  // diference bw *q=p and q=p
  // int x=1;
  // int *p=&x;
  // int *q=p;
  //  printf("\n%d",*q);  // prints 1
  // q=p;
  // *q=5;
  // printf("\n%d",x);  // prints 1


  // *never do this

  // int *ptr;
  // printf("\n%d",*ptr);  // prints garbage value
  // *ptr=1;
  // printf("\n%d",*ptr);  // segmentation fault

  /**
   * *Pointer Arithmetic
   */

  // int x[]={1,2,4,5};
  //   int *p=x;
  //   printf("\n%d",*p); // prints 1
  //   printf("\n%d",*(p+1)); // prints 2   // no inc in p just printed the value
  //   p=p+1;    //p is incremented  i.e. p is pointing to 2 (p++)

  //   printf("\n%d",*p); // prints 2
  //   p=p+2;    //p is incremented  i.e. p is pointing to 5
  //   printf("\n%d",*p);

  /**
   * @brief
   * *idk what is this
   *
   */
  // int arr[] = {12, 3, 67, 5, 4};
  // char *p = arr;  // char *p=&arr[0];

  // for (int i = 0; i < 15; i++)
  // {
  //   printf("\n%d", *p);  
  //   p += 1;   
  // }


  /**
   * @brief
   * *Subtraction among pointers
   *
   */
  // int arr[]={1,2,343,232,532};
  // int *p=arr;
  // int *q=&arr[2];
  // printf("%d",(q-p));   // prints 2  => 2*4=8  => 8/4=2
  // printf("\n%d",(p-q));   // prints -2  => -2*4=-8  => -8/4=-2

  /**
   * *undefined bhavior
   */

  // int x=80;
  // int *p=&x;
  // p++;
  // printf("%d",*p);   // undefined different output

  // int arr[]={1,2,3,4,5,6};
  // int arr2[]={3,8,9,6,8};
  // int *p1=arr;
  // int *p2=&arr2[2];
  // printf("%d",p2-p1);  // undefined

   int arr[]={1,2,3,4,5,6};
   int *p1=arr;
   int *p2=&arr[2];
   printf("%d",p2-p1);  // prints 2   => 2*4=8  => 8/4=2


  /**
   * @brief
   * *Pointer to pointer
   *
   */
  // int x=5;
  // int *p=&x;
  // int **q=&p;
  // printf("\n x is %d",x);  
  // printf("\n *p is %d",*p);
  // printf("\n **q is %d",**q);
  // printf("\n p is %d",p);
  // printf("\n *q is %d",*q);
  // printf("\n q is %d",q);


}