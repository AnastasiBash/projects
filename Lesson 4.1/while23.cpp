#include <iostream>

using namespace std;

int main()
{
    int a, b;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf ("%d %d/n", &a, &b);
    while ((a!=0) && (b!=0))
       {
       if (a>b)
           a = a % b;
       else
       b = b % a;
       }
       int k = a = b;
       printf("%d\n", k);

    return 0;
}
