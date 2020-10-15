#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b;
    scanf("%d %d\n", &a, &b);

    int sum=0;
    for (int i=a; i<=b;++i)
        sum+=i;
    printf("%d", sum);
    return 0;
}
