#include <stdio.h>
#define SIZE 100
void func(char str[]);
int main()
{
    char str[SIZE];
    printf("Enter any string");
    gets(str);
    func(str);
}
void func(char str[]){
    int freq[255];
    int max;
    int ascii;
    for (int i = 0; i < 255; i++)
    {
        freq[i] = 0;
    }
    // find frequency of each character

    int j = 0;
    while (str[j] != '\0')
    {
        ascii = (int)str[j];
        freq[ascii]++;
        j++;
    }
    max = 0;
    for (int i = 0; i < 255; i++)
    {
        if (freq[i] > freq[max])
            max = i;
    }
    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);
}
