#include <iostream>

using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%d\n", &n);

    float rez=0;
    for (int i=1; i<=n;++i)
        rez = rez + (1.0/i);
    printf("%f\n", rez);
    return 0;
}
