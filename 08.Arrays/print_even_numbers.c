#include <stdio.h>
#define SIZE 5
int main(){
  int s[SIZE]={0};


  for(size_t i=0;i<SIZE;++i){
     s[i]=2+2*i;
  }
printf("%s%8s\n", "Element", "Value");

for (size_t j = 0; j < SIZE; ++j) {
 printf("%7zu%8d\n", j, s[j]);
 }

}
