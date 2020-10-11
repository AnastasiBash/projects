#include <iostream>

using namespace std;

int main()
{
    int N;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf ("%d/n", &N);
    int f1=1, f2=1, f=0;
   while (f<N)
    {
       f=f2+f1;
       f2=f1;
       f1=f;
    }
   printf("%s\n",  f==N?"True":"False");


    return 0;
}
