#include <stdio.h>
#include <strings.h>
void toUpper(char str[100]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("You entered: ");
    puts(str);
    printf("Upper case: ");
    toUpper(str);
    return 0;
}