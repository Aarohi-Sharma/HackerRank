#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1, n2;
    float n3, n4;
    scanf ("%d %d\n", &n1, &n2);
    scanf ("%f %f\n", &n3, &n4);
    printf ("%d %d\n", n1+n2, n1-n2);
    printf ("%0.1f %0.1f", n3+n4, n3-n4);
    return 0;
}
