#include <stdio.h>
#include <stdlib.h>
void convert(char arr[],int num);
int main()
{

    char arr[100];
    gets(arr);
    int num;
    scanf("%d", &num);
    convert(arr,num);
    return 0;
}
void convert(char arr[],int num)
{
    int rand=num;
    int count=-2;
    int rev=0,temp;
    while(num>0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='$' && arr[i+1]=='d')
        {
            int j=i;
            while(rev>0)
            {
                temp=rev%10;
                temp+=48;
                arr[j]=temp;
                rev/=10;
                j++;
        }
    }
    }
    printf("%s", arr);
}

