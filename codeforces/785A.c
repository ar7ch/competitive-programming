/* 26201782  785A	  GNU C11 	Accepted	78 ms	 1856 KB */

#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  int answer = 0;
  char next_str[13];
  scanf("%d\n", &n);
  for(int i = 0; i < n; i++)
  {
    if(i != n - 1)
      scanf("%12s\n", next_str);
    else
      scanf("%12s", next_str);
    if(!strcmp(next_str, "Tetrahedron"))
      answer += 4;
    else if(!strcmp(next_str, "Cube"))
      answer += 6;
    else if(!strcmp(next_str, "Octahedron"))
      answer += 8;
    else if(!strcmp(next_str, "Dodecahedron"))
      answer += 12;
    else if(!strcmp(next_str, "Icosahedron"))
      answer += 20;
  }
  printf("%d\n", answer);
  return 0;
}
