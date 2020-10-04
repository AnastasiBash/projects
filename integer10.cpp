#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x;
    scanf ("%d", &x);

    int  e = x % 10;
    int  d = x / 10 % 10;


    printf("Одиниці- %d\nДесятки- %d\n", e, d);

    return 0;
}
