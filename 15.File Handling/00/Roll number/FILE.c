#include <stdio.h>
int main(void)
{
    FILE *f;
    f = fopen("m.txt", "w");
    int a;
    char b[30];
    int i = 0;
    while (i < 2)
    {
        printf("enter roll no : ");
        scanf("%d", &a);
        printf("Enter name : ");
        scanf(" %[^\n]",b);
        i++;
        fprintf(f,"%d  - %s\n",a,b);
    }
    fprintf(f,"File :");
    fprintf(f,"😁😏");
    fclose(f);
}
