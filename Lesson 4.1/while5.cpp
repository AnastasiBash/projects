#include <iostream>

using namespace std;

int main()
{
    int N;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf ("%d/n", &N);
    int k = 0;
    while (N >= 2)
    {
        k++;
        N /= 2;
    }
printf("%d\n", k);

    return 0;
}
