#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[100];
    char sen[100];
    scanf("%c\n", &ch);
    scanf("%[^\n]%*c\n", &s);
    scanf("%[^\n]%*c\n", &sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);   
    return 0;
}
