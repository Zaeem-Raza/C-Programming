#include <stdio.h>
int isPalindrome(int num);
int main(){

printf("%d",isPalindrome(11211));
}

int isPalindrome(int num){
  int clone=num;
  int rev=0;
  while(clone!=0){
    int rem=clone%10;
    rev=(rev*10)+rem;
    clone/=10;
  }
  return (num==rev);
}
