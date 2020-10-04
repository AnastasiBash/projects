#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x;
    scanf ("%d", &x);

    int  dig_1 = x / 10;
    int  dig_2 = x % 10;

    int a= dig_1+dig_2;
    int b= dig_1*dig_2;

    printf("%d %d\n", a, b);

    return 0;
}
