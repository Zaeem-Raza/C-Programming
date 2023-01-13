#include <stdio.h>
#include <stdlib.h>
#define size 100
int inputStringA(char arrA[size]);
int inputStringB(char arrB[size]);
int compareStrings(char arrA[size], char arrB[size]);
int findOccourance(char arrA[size], char arrB[size]);
int replaceSubstring(char arrA[size], char arrB[size]);
int delOccourance(char arrA[size], char arrB[size]);
int reverseStringA(char arrA[size]);
int swap(char arrA[size], char arrB[size]);
int palindromeCheck(char arrB[size]);
int titleCase(char arrA[size]);
int delAlternate(char arrA[size]);
int main()
{
    int flag1 = 0, flag2 = 0;
    char arrA[size];
    char arrB[size];
    int num = -1;
    while (num != 0)
    {
        printf("\n1.Input string A.\n");
        printf("2.Input string B.\n");
        printf("3.Compare both strings.\n");
        printf("4.Find all occurrences of sub-string B in string A..\n");
        printf("5.Replace sub-string B with sub-string C in string A.\n");
        printf("6.Swap strings A and B.\n");
        printf("7.Delete all occurrences of sub-string B in string A.\n");
        printf("8.Reverse the contents of string A.\n");
        printf("9.Check whether string B is a palindrome or not.\n");
        printf("10.Change the string A into title case.\n");
        printf("11.Delete alternate words from string A.\n");
        printf("0.Exit.");
        printf("\nEnter a choice.\n");
        scanf("%d", &num);
        while (num < 0 || num > 11)
        {
            printf("Please Enter a valid choice.\n");
            scanf(" %d", &num);
        }
        switch (num)
        {
        case 1:
            flag1 = 1;
            inputStringA(arrA);
            break;
        case 2:
            flag2 = 1;
            inputStringB(arrB);
            break;
        case 3:
            if (flag1 == 1 && flag2 == 1)
            {
                compareStrings(arrA, arrB);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        case 4:
            if (flag1 == 1 && flag2 == 1)
            {
                findOccourance(arrA, arrB);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        case 5:
            if (flag1 == 1 && flag2 == 1)
            {
                replaceSubstring(arrA, arrB);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        case 6:
            if (flag1 == 1 && flag2 == 1)
            {
                swap(arrA, arrB);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        case 7:
            if (flag1 == 1 && flag2 == 1)
            {
                delOccourance(arrA, arrB);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        case 8:
            if (flag1 == 1)
            {
                reverseStringA(arrA);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        case 9:
            if (flag2 == 1)
            {
                palindromeCheck(arrB);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        case 10:
            if (flag1 == 1)
            {
                titleCase(arrA);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        case 11:
            if (flag1 == 1)
            {
                delAlternate(arrA);
                break;
            }
            else
            {
                printf("Please Input required Information.\n");
                break;
            }
        }
    }
    return 0;
}
int inputStringA(char arrA[size])
{
    printf("\nEnter the first string.\n");
    scanf(" %[^\n]s", arrA);
    return 0;
}
int inputStringB(char arrB[size])
{
    printf("\nEnter the Second string.\n");
    scanf(" %[^\n]s", arrB);
    return 0;
}
int compareStrings(char arrA[size], char arrB[size])
{
    int arrC[size];
    int count1 = -1, count2 = -1;
    int flag = 1;
    for (int i = 0; arrA[i] != '\0' || arrB[i] != '\0'; i++)
    {

        if (arrA[i] != arrB[i])
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("\nBoth string are equal.\n");
    }
    else
    {
        printf("\nString are NOT equal.\n");
    }
    for (int i = 0; arrC[i] != '\0'; i++)
    {
        count1++;
    }
    for (int i = 0; arrB[i] != '\0'; i++)
    {
        count2++;
    }
    if (count1 > count2)
    {
        printf("\nFirst string is greater than the second one.\n");
    }
    else if (count1 < count2)
    {
        printf("\nSecond string is greater than the first one.\n");
    }
    return 0;
}
int findOccourance(char arrA[size], char arrB[size])
{
    int count = 0;
    int j = 0;
    for (int i = 0; arrA[i] != '\0'; i++)
    {
        if (arrA[i] == arrB[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if (arrB[j] == '\0')
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("\nThe sub-string is found %d times\n", count);
    }
    else
    {
        printf("\nThe sub-string was NOT found.\n");
    }
    return 0;
}
int replaceSubstring(char arrA[size], char arrB[size])
{
    int count1 = -1, count2 = -1;
    char arrC[size];
    printf("\nEnter the substring you want to replace.\n");
    scanf(" %s[^\n]s", arrC);
    for (int i = 0; arrC[i] != '\0'; i++)
    {
        count1++;
    }
    for (int i = 0; arrB[i] != '\0'; i++)
    {
        count2++;
    }
    while (count1 != count2)
    {
        printf("\nThe string must be of the same size as B.\n");
        scanf(" %s[^\n]s", arrC);
        count1 = -1;
        for (int i = 0; arrC[i] != '\0'; i++)
        {
            count1++;
        }
    }
    int j = 0;
    int p = 0;
    int rand;
    for (int i = 0; arrA[i] != '\0'; i++)
    {
        if (arrA[i] == arrB[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if (arrB[j] == '\0')
        {                                     // my name is habban 
            rand = j - 1;                    //rand =3
            j = 0;
            for (int k = i - rand; k < i +1; k++)   // k points n 
            {
                arrA[k] = arrC[p];
                p++;
            }
            p = 0;
        }
    }
    printf("\nAfter replacing the sub-string string A is: %s\n", arrA);
    return 0;
}
int delOccourance(char arrA[size], char arrB[size])
{
    int j = 0; 
    int count;
    for (int i = 0; arrA[i] != '\0'; i++)
    {
        if (arrA[i] == arrB[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if (arrB[j] == '\0')
        {
            count = j;
            j = 0;
            for (int k = i - count; k < i + 1; k++)
            {
                arrA[k] = 32;
            }
        }
    }
    printf("\n%s\n", arrA);
    return 0;
}
int reverseStringA(char arrA[size])
{
    int count = -1; // to count the number of characters in the string
    char temp;
    for (int i = 0; arrA[i] != '\0'; i++)
    {
        count++;
    }
    int div = count; // to store the number of characters in the string
    for (int i = 0; i < count / 2; i++)
    {
        temp = arrA[i];
        arrA[i] = arrA[div]; // swapping the characters
        arrA[div] = temp;
        div--;
    }
    printf("Reverse of first string is: %s\n", arrA);
    return 0;
}
int swap(char arrA[size], char arrB[size])
{
    char temp[size];
    int i;
    for (i = 0; arrB[i] != '\0'; i++)
    {
        temp[i] = arrB[i];
    }
    temp[i] = '\0';

    int j;
    for (j = 0; arrA[j] != '\0'; j++)
    {
        arrB[j] = arrA[j];
    }
    arrB[j] = '\0';

    int k;
    for (k = 0; temp[k] != '\0'; k++)
    {
        arrA[k] = temp[k];
    }
    arrA[k] = '\0';
    printf("\nAfter swapping:\n");
    printf("First string: %s\n", arrA);
    printf("Second string: %s\n", arrB);
    return 0;
}
int palindromeCheck(char arrB[size])
{
    int flag = 1;
    int count = -1;
    char temp[size];
    for (int i = 0; arrB[i] != '\0'; i++)
    {
        count++;
    }
    int i;
    for (i = 0; arrB[i] != '\0'; i++)
    {
        temp[i] = arrB[count];
        count--;
    }
    temp[i] = '\0';
    for (int i = 0; arrB[i] != '\0'; i++)
    {
        if (arrB[i] != temp[i])
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("\nSecond String is a palindrome.\n");
    }
    else
    {
        printf("\nSecond String is NOT a palindrome.\n");
    }
    return 0;
}
int titleCase(char arrA[size])
{
    if (arrA[0] >= 97 && arrA[0] <= 122)
    {
        arrA[0] -= 32;
    }
    for (int i = 1; arrA[i] != '\0'; i++)
    {
        if (arrA[i] >= 65 && arrA[i] <= 90)
        {
            arrA[i] += 32;
        }
        else if (arrA[i] == 32)
        {
            if (arrA[i + 1] >= 97 && arrA[i + 1] <= 122)
            {
                arrA[i + 1] -= 32;
            }
            i++;
        }
    }
    printf("\nTitle Case of first string is: %s\n", arrA);
    return 0;
}
int delAlternate(char arrA[size])
{
    int count = 0; // counting the number of characters in the string
    int div = -1;  // dividing the string into two parts
    for (int p = 0; arrA[p] != 0; p++)
    {
        div++; // dividing the string into two parts
    }
    for (int i = 0; arrA[i] != '\0'; i++)
    {
        if (arrA[i] == 32)
        {
            count++;
        }
        if (count % 2 != 0) //
        {
            int j = i + 1; // j is the index of the next character
            while (arrA[j] != 32 && j <= div)
            {
                arrA[j] = '|'; // replacing the character with '|'
                j++;           // incrementing the index
            }
        }
    }
    for (int i = 0; arrA[i] != '\0'; i++)
    {
        if (arrA[i] == '|')
        {
            arrA[i] = 32; // replacing the '|' with space
        }
    }
    printf("\nAfter deleting alternate words, the string is: %s\n", arrA);
    return 0;
}
