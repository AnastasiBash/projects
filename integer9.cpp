#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x;
    scanf ("%d", &x);

    int  dig_1 = x / 100;

    printf("%d", dig_1);

    return 0;
}
