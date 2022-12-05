#include <stdio.h>
int t;
void print(int x[])
{
  for (int i = 0; i < t; i++)
  {
    if (x[i] != 0)
    {
      printf("%d ", x[i]);
    }
  }
  printf("\n");
}

void ss(int wt[], int x[], int W, int n)
{
  if (W == 0)
  {
    print(x);
    return;
  }
  if (n == 0)
  {
    return;
  }
  if (wt[n - 1] <= W)
  {
    x[n - 1] = wt[n - 1];
    ss(wt, x, W - wt[n - 1], n - 1);
  }
  x[n - 1] = 0;
  ss(wt, x, W, n - 1);
}
int main()
{
  int W = 10;
  // printf("enter size :");
  // scanf("%d", &n);
  int n = 8;
  t = n;
  int x[n];
  // printf("enter weights :");
  for (int i = 0; i < n; i++)
  {
    // scanf("%d", &wt[i]);
    x[i] = 0;
  }
  // printf("enter sum :");
  // scanf("%d", &W);
  int wt[] = {1, 2, 3, 4, 6, 7, 10, 20};
  ss(wt, x, W, 8);
}