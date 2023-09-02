#include <stdio.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char arr[9][9]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  	for (int i=a; i<=b; i++)
    {
        if ((1<=i) && (i<=9))
        {
            printf ("%s\n", arr[i-1]);
        }
        else if ((i>9) && (i%2==0))
        {
            printf ("even\n");
        }
        else if ((i>9) && (i%2!=0))
        {
            printf ("odd\n");
        }
    }
    return 0;
}

