#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if ((x1+y1)%2 == (x2+y2)%2)
    {
       printf ("Yes");
    }
    else
    {
        printf ("No");
    }

    return 0;
}
