#include <stdio.h>
#include <iostream>

using namespace std;
 
bool even(int k)
{
  return k % 2? 0: 1;
}
 
int main()
{
  int n, c = 0;
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  for (int i = 0; i < 10; ++i)
  {
    scanf ("%d\n", &n);
    c+=even(n);
  }
  printf("%d", c);
  return 0;
}