#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b;
    scanf("%d %d\n", &a, &b);

    int rez=1;
    for (int i=a; i<=b;++i)
        rez*=i;
    printf("%d", rez);
    return 0;
}
