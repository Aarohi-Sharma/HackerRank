#include <stdio.h>
int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0;
    int rem, quo;
    for (int i=0; i<5; i++)
    {
        rem=n%10;
        n=n/10;
        sum+=rem;
    }
    printf("%d", sum);
    return 0;
}
