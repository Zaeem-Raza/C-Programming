#include <stdio.h>
// void printchar(const char *sptr){
//     for(int i=0;*sptr!='\0';++sptr){
//         printf("%c",*sptr);
//     }
// }
// void f(const int *y){
//     *y=12;
//     printf("%d",y);
// }
int main(){
/**
 * * non constant pointer to constant data
*/
//  const char string[]="My name is Eddie";
//  printf("The string is : ");
//  printchar(string);
// printf("%s",string);
// string[0]='A';
// printf("%s",string);  //error

/**
//  * * constant pointer to non constant data
 // */
// int x=8;
// f(&x);   //error


//  const int i=10;
//  f(&i);  //error

/**
 * @brief
 *  * constant pointer to constant data
 * 
 */

//  const int i=10;
//  const int const *p=&i;   //constant pointer to constant data
//  printf("Before inc:\n");
//  printf("\n%d",*p); //10
//  printf("\n%d",p); //address
//  printf("\n%d",&p); //address
//  printf("\n%d",&i); //address
//  p++;
//     printf("\nAfter inc:\n");
//  printf("\n%d",*p); //10
//  printf("\n%d",p); //address of i
//  printf("\n%d",&p); //address of p
//  printf("\n%d",&i); //address of i
//  //*p=12;  //error



// // pointer to constant string
//  char color[] = "blue";
//  const char *pcolor = "blue";
//  printf("%c", color[3]);
//  printf("\n%c", pcolor[3]);
//  // change the value of color[3] to 'r'
//  color[3] = 'r';
//  printf("\n%s", color);

//  // change the value of pcolor[3] to 'r'
//  //  pcolor[3]='r'; // This is wrong
//  printf("\n%s", pcolor); // blue bcz pcolor is a constant pointer
}