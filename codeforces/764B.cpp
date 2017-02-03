/*
764B
Timofey and cubes
Young Timofey has a birthday today! He got kit of n cubes as a birthday present from his parents. Every cube has a number ai, which is written on it. Timofey put all the cubes in a row and went to unpack other presents.

In this time, Timofey's elder brother, Dima reordered the cubes using the following rule. Suppose the cubes are numbered from 1 to n in their order. Dima performs several steps, on step i he reverses the segment of cubes from i-th to (n - i + 1)-th. He does this while i ≤ n - i + 1.

After performing the operations Dima went away, being very proud of himself. When Timofey returned to his cubes, he understood that their order was changed. Help Timofey as fast as you can and save the holiday — restore the initial order of the cubes using information of their current location.

Input
The first line contains single integer n (1 ≤ n ≤ 2·105) — the number of cubes.

The second line contains n integers a1, a2, ..., an ( - 109 ≤ ai ≤ 109), where ai is the number written on the i-th cube after Dima has changed their order.

Output
Print n integers, separated by spaces — the numbers written on the cubes in their initial order.

It can be shown that the answer is unique.
*/
/* Accepted 623 ms	3596 KB */


#include <iostream>
const unsigned long ARRAY_MAX_SIZE = 200001;
void arraySwap(long long* a, long long* b);

int main() {
  int n;
  std::cin >> n;
  long long a[ARRAY_MAX_SIZE];
  for(int i = 0; i < n; i++)
    std::cin >> a[i];

  for (int i = 0; i <= (n - i - 1); i++) {
    if ((i % 2 - 1) != 0)
      arraySwap(&a[i], &a[n - i - 1]);
  }

  for(int i = 0; i < n; i++) {
    if(i != n-1)
      std::cout << a[i] << " ";
    else
      std::cout << a[i] << '\n';
  }
  return 0;
}
void arraySwap(long long* a, long long* b){
  long long temp = *a;
  *a = *b;
  *b = temp;
}
