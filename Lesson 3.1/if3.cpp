#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x, out;
    scanf("%d", &x);

    if (x>0)
    {
         out= x-8;
    }
    else if (x==0)
    {
        out= 10;
    }
    else
    {
        out= x+6;
    }
    printf("%d\n", out);
    return 0;
}
