#include <iostream>

using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a,n;
    scanf("%d %d\n",&a, &n);

    int rez=1;
    for (int i=1; i<=n;++i)
        rez*=a;
    printf("%d\n", rez);
    return 0;
}
