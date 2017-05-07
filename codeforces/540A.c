/*
540A
Combination Lock

Scrooge McDuck keeps his most treasured savings in a home safe with a combination lock. Each time he wants to put there the treasures that he's earned fair and square, he has to open the lock.


The combination lock is represented by n rotating disks with digits from 0 to 9 written on them. Scrooge McDuck has to turn some disks so that the combination of digits on the disks forms a secret combination. In one move, he can rotate one disk one digit forwards or backwards. In particular, in one move he can go from digit 0 to digit 9 and vice versa. What minimum number of actions does he need for that?

Input
The first line contains a single integer n (1 ≤ n ≤ 1000) — the number of disks on the combination lock.

The second line contains a string of n digits — the original state of the disks.

The third line contains a string of n digits — Scrooge McDuck's combination that opens the lock.

Output
Print a single integer — the minimum number of moves Scrooge McDuck needs to open the lock.
*/
/* Accepted 15 ms	4 KB */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ctoi(char ch)
{
  return ch - '0';
}

int main()
{
  int n;
  int init, fin;
  int answer;
  scanf("%d\n", &n);
  char *initial = malloc(sizeof(char) * (n + 1));
  char *final = malloc(sizeof(char) * (n + 1));
  scanf("%1000s\n", initial);
  scanf("%1000s", final);
  for(int i = 0; i < n; i++)
  {
    init = ctoi(initial[i]);
    fin = ctoi(final[i]);
    answer += abs(init - fin) > 5 ? 10 - abs(init - fin) : abs(init - fin);
  }
  free(initial);
  free(final);
  printf("%d\n", answer);
  return 0;
}
