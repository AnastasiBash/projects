#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b, out;
    scanf("%d %d", &a, &b);

    if (a>b)
    {
       out=2;
    }
    else
    {
       out=1;
    }
    printf("%d\n", out);
    return 0;
}
