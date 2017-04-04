#include <stdio.h>

int main()
{
  int n;
  int counter = 0;
  scanf("%d\n", &n);
  int a[100];
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if(a[i] % 2 == 0)
      counter++;
  }
  if(counter > 1) //then we search for odd number
  {
    for(int i = 0; i < n; i++)
    {
      if(a[i] % 2 != 0)
      {
        printf("%d\n", i + 1);
      }
    }
  }
  else //we search for even number
  {
    for(int i = 0; i < n; i++)
    {
      if(a[i] % 2 == 0)
      {
        printf("%d\n", i + 1);
      }
    }
  }
  return 0;
}
