#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if (abs(x1-x2)==abs(y1-y2) || (x1==x2) || (y1==y2))
    {
       printf ("Yes");
    }
    else
    {
        printf ("No");
    }

    return 0;
}
