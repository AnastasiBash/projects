#include <stdio.h>
 using namespace std;

 int SumRange(int a, int b)
 {
     int sum=0;
     if (a>b) return 0;
    for (int i=a; i<b; i++)
    sum += i;
    return sum;
 }
   
int main()
{
    int a, b, c;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d %d %d\n", &a, &b, &c);
    printf ("%d %d\n", SumRange(a, b), SumRange(b, c));
    return 0;


}
