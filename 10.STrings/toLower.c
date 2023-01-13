#include <stdio.h>
#include <strings.h>
void toLower(char str[100]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("You entered: ");
    puts(str);
    printf("Lower case: ");
    toLower(str);
    return 0;
}