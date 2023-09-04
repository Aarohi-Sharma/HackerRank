#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int max1=0, max2=0, max3=0;
  for (int i=1; i<=n; i++)
  {
      for (int j=i+1; j<=n; j++)
      {
        int t1=i&j, t2=i|j, t3=i^j;  
        if (t1>max1 && t1<k)
        {
            max1=t1;
        }
        if (t2>max2 && t2<k)
        {
            max2=t2;
        }
        if (t3>max3 && t3<k)
        {
            max3=t3;
        }
      }
  }
  printf ("%d\n%d\n%d\n", max1, max2, max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
