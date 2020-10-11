#include <stdio.h>

int main(void)
{
   int a, b;
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   scanf ("%d%d", &a, &b);

   int temp = a;
   while (temp >= 0)
    {
       temp -= b;
    }
   printf("%i\n ", temp + b);

   return 0;
}
