#include <stdio.h>

int main()
{
  int n,k;
  scanf("%d %d", &n, &k);
  int i = 1;
  int answer = 0;
  int time = 0;
  while(time + k <= 240 && i <= n)
  {
    time += 5*i;
    i++;
    if(time + k > 240)
      break;
    answer++;
  }
  printf("%d\n", answer);
  return 0;
}
