/* 26224620	133A	GNU C11		Accepted	30 ms	1856 KB */

#include <stdio.h>
#include <string.h>
int main()
{
  char str[101];
  scanf("%100s", str);
  int i = 0;
  for(int i = 0; i < strlen(str); i++)
  {
    if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
    {
      printf("YES\n");
      return 0;
    }
  }
  printf("NO\n");
  return 0;
}
