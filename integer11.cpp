#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x;
    scanf ("%d", &x);

    int c = x/100;
    int d = x / 10 % 10;
    int e = x % 10;

    int s = c+d+e;
    int k = c*d*e;

    printf("Сума цифр- %d\nДобуток цифр- %d\n", s, k);

    return 0;
}
