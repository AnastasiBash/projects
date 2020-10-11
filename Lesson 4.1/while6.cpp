#include <iostream>

using namespace std;

int main()
{
    int N;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf ("%d/n", &N);
    float rez=1;
while (N>=2)
    {
        rez*=N;
        N -= 2;
    }
printf("%f\n", rez);

    return 0;
}
