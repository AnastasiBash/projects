#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf ("%d", &n);

    int m=n/60;

    printf("%d\n", m);

    return 0;
}
