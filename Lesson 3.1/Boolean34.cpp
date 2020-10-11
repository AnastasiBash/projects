#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x, y;
    scanf("%d %d", &x, &y);

    if ((x+y)%2!=0)
    {
       printf ("Yes");
    }
    else
    {
        printf ("No");
    }

    return 0;
}
