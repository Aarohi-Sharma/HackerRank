#include <stdio.h>
int main()
{
    int n;
    scanf ("%d", &n);
    char arr[9][9]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if ((1<=n) && (n<=9))
    {
        printf ("%s", arr[n-1]);
    }
    else if (n>9) 
    {
        printf ("Greater than 9");
    }
    return 0;
}

