/*Name:            Zaeem Raza
  Roll Number :    BCSF21M022
  Question number: 02*/

/*
Statement :
    Show the following menu on screen and get user choice to run the selected choice.Implement each
    option as a function.Two strings A and B are entered by user.*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

//  Function Prototypes
void Input(char str[SIZE]);
int subString(char str[SIZE], char sub[SIZE]);
int compare(char str1[SIZE], char str2[SIZE]);
void find(char str[SIZE], char sub[SIZE]);
void replace(char str[SIZE], char sub[SIZE], char rep[SIZE]);
int length(char A[]);
void delete (char str[SIZE], char sub[SIZE]);
void reverse(char str[SIZE]);
void palindrome(char str[SIZE]);
void Swap(char str1[SIZE], char str2[SIZE]);
void Title(char str[SIZE]);
void alternate(char str[SIZE]);

int main()
{
    char user_choice;
    char A[SIZE];
    char B[SIZE];
    char C[SIZE];
    int flag1 = 0; // for string A
    int flag2 = 0; // for string B
    do
    {
        printf("\n\n\n");
        printf("A) Input string A");
        printf("\nB) Input string B");
        printf("\nC) Compare both strings and display whether both are equal and if unequal, which is larger.");
        printf("\nD) Find all occurrences of sub-string B in string A");
        printf("\nE) Get a string C from user and replace sub-string B with sub-string C in string A");
        printf("\nF) Swap strings A and B");
        printf("\nG) Delete all occurrences of sub-string B in string A");
        printf("\nH) Reverse the contents of string A");
        printf("\nI) Check whether string B is a palindrome or not");
        printf("\nJ) Change the string A into title case");
        printf("\nK) Delete alternate words from string A");
        printf("\nL) Exit");
        printf("\n\n\nEnter your choice: ");
        scanf(" %c", &user_choice);

        while (user_choice < 'A' || user_choice > 'L')
        {
            printf("Invalid Input\nENter again");
            scanf(" %c", &user_choice);
        }

        switch (user_choice)
        {

        case 'A':
            Input(A);
            flag1 = 1;
            break;
        case 'B':
            Input(B);
            flag2 = 1;
            break;
        case 'C':
            if (flag1 == 1 && flag2 == 1)
            {
                compare(A, B);
            }
            else
            {
                printf("Enter both strings first");
            }
            break;
        case 'D':
            if (flag1 == 1 && flag2 == 1)
            {
                find(A, B);
            }
            else
            {
                printf("Enter both strings first");
            }
            break;
        case 'E':
            if (flag1 == 1 && flag2 == 1)
            {
                printf("\nEnter string C: ");
                Input(C);
                replace(A, B, C);
            }
            else
            {
                printf("Enter both strings first");
            }
            break;
        case 'F':
            if (flag1 == 1 && flag2 == 1)
            {
                Swap(A, B);
            }
            else
            {
                printf("Enter both strings first");
            }
            break;
        case 'G':
            if (flag1 == 1 && flag2 == 1)
            {
                delete (A, B);
            }
            else
            {
                printf("Enter both strings first");
            }
            break;
        case 'H':
            if (flag1 == 1)
            {
                reverse(A);
            }
            else
            {
                printf("Enter string A first");
            }
            break;
        case 'I':
            if (flag2 == 1)
            {
                palindrome(B);
            }
            else
            {
                printf("Enter string B first");
            }
            break;
        case 'J':
            if (flag1 == 1)
            {
                Title(A);
            }
            else
            {
                printf("Enter string A first");
            }
            break;
        case 'K':
            if (flag1 == 1)
            {
                alternate(A);
            }
            else
            {
                printf("Enter string A first");
            }
            break;
        default:
            break;
        }
    } while (user_choice != 'L');
}


int compare(char str1[SIZE], char str2[SIZE])
{
    /* this function compares both the strings index by index and*/


    int i = 0;
    // int flag = 1;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] > str2[i])
        {
            printf("String A is greater\n");
            system("pause");
            system("cls");
            return 0;
        }
        else if (str1[i] < str2[i])
        {
            printf("String B is greater\n");
            system("pause");
            system("cls");
            return 0;
        }
        i++;
    }
    printf("Both Strings are equal\n");
    system("pause");
    system("cls");
}
void find(char str[SIZE], char sub[SIZE])
{
    /*
    This function finds the occurance of a substring in a string and represents count*/
    if (subString(str, sub) == 0)
    {
        printf("Substring is not present\n");
    }
    else
    {
        int index;
        int strlen = length(str);
        char str3[SIZE];
        int k = 0;
        // convert str to lower case and store it in str3 because if user enters "my name is Name", the occurance of name is 2
        for (int i = 0; i < strlen; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str3[k] = str[i] + 32;
            }
            else
            {
                str3[k] = str[i];
            }
            k++;
        }
        str3[k] = '\0';
        int count = 0;
        int i = 0;
        int j = 0;
        while (str3[i] != '\0')
        {
            if (str3[i] == sub[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
                j = 0;
            }
            if (sub[j] == '\0')
            {
                count++;
                printf("Substring found at %d index\n", i);
            }
        }

        printf("Total Occurrance: %d times \n", count);
    }
        system("pause");
        system("cls");
    }
void replace(char str[SIZE], char sub[SIZE], char rep[SIZE])
{
    // this function replaces substring with another string given by user
    if(subString(str,sub)==0){
        printf("Substring not found in string A\n");
    }
    else{
        int i,j,k;
        int len=length(str);
        int len2=length(sub);
    for (i = 0; i < len; i++)
    {
        if (str[i] == sub[0])
        {
            for (j = i, k = 0; sub[k] != '\0' && str[j] == sub[k]; j++, k++)
            {
            }
        }
        if (k == len2)
        {
            for (j = i; rep[j] != '\0'; j++)
            {
                str[j] = rep[j];
            }
        }
    }
    printf("%s", str);
    }
    system("pause");
    system("cls");
}
void Swap(char str1[SIZE], char str2[SIZE])
{
    int i = 0;
    char temp[SIZE];
    while (str1[i] != '\0')
    {
        temp[i] = str1[i];
        i++;
    }
    temp[i] = '\0';
    i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    i = 0;
    while (temp[i] != '\0')
    {
        str2[i] = temp[i];
        i++;
    }
    str2[i] = '\0';
    printf("\n\nString after Swap:\n");
    printf("First String = %s\tSecond String = %s\n", str1, str2);
    system("pause");
    system("cls");
}

void delete (char str[SIZE], char sub[SIZE])
{
    int i, j, k, flag;
    if(subString(str,sub)==0){
        printf("Substring is not present\n");
    }
    else{


    for (i = 0; str[i] != '\0'; i++)
    {                                           //my name    is zaeem
        flag = 1;
        for (j = i, k = 0; sub[k] != '\0' && str[j] == sub[k]; j++, k++)
        {
            flag = 0;
        }
        if (flag == 0)
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + k];
            }
        }
    }
    printf("String after deletion: %s\n", str);
    }
    system("pause");
    system("cls");
}

void reverse(char str[SIZE])
{
    int len = 0;
    int i = 0;
    char rev[SIZE];
    while (str[i] != '\0')
    {
        i++;
    }
    // length
    len = i;
    int a = 0;
    int b = len - 1;
    while (b >= 0)
    {
        rev[a] = str[b];
        b--;
        a++;
    }
    rev[a] = '\0';
    printf("Reverse: %s\n", rev);
    system("pause");
    system("cls");
}
void palindrome(char str[SIZE])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    int st = 0;
    int flag = 1;
    int end = len - 1;
    while (st <= end)
    {
        if (str[st] != str[end])
        {
            flag = 0;
        }
        st++;
        end--;
    }
    if (flag)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("String is not a palindrome\n");
    }
    system("pause");
    system("cls");
}

void Title(char str[SIZE])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i - 1] != 32)
            {
                str[i] += 32;
            }
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i - 1] == 32)
            {
                str[i] -= 32;
            }
        }
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
    }
    printf("Title Case: %s\n", str);
    system("pause");
    system("cls");
}

void alternate(char str[SIZE])
{
        // delete alternate words from the string
        int len = length(str);
        int i;
        for (i = 0; i < len; i++)
        {
            if (str[i] == 32)
            {
                int j = i + 1;
                int wordlen = 0;
                while (str[j] != 32)
                {
                    wordlen++;
                    j++;
                }
                for (int k = i; k < len - wordlen; k++)
                {
                    str[k] = str[k + wordlen + 1];
                }
                len -= wordlen;
                len -= 1;
            }
        }

        printf("Alternate words: %s\n", str);
    system("pause");
    system("cls");
    }



int length(char A[])
{
    int i = 0;
    while (A[i] != '\0')
    {
        i++;
    }
    return i;
}
int subString(char str[SIZE], char sub[SIZE])
{
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == sub[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
        if (sub[j] == '\0')
        {
            return 1;
        }
    }
    return 0;
}
void Input(char str[SIZE])
{
    printf("Enter String :");
    scanf(" %[^\n]s", str);
}
