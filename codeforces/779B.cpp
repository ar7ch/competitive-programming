/*
779B
Weird rounding
Polycarp is crazy about round numbers. He especially likes the numbers divisible by 10^k.

In the given number of n Polycarp wants to remove the least number of digits to get a number that is divisible by 10k. For example, if k = 3, in the number 30020 it is enough to delete a single digit (2). In this case, the result is 3000 that is divisible by 103 = 1000.

Write a program that prints the minimum number of digits to be deleted from the given integer number n, so that the result is divisible by 10k. The result should not start with the unnecessary leading zero (i.e., zero can start only the number 0, which is required to be written as exactly one digit).

It is guaranteed that the answer exists.

Input
The only line of the input contains two integer numbers n and k (0 ≤ n ≤ 2 000 000 000, 1 ≤ k ≤ 9).

It is guaranteed that the answer exists. All numbers in the input are written in traditional notation of integers, that is, without any extra leading zeros.

Output
Print w — the required minimal number of digits to erase. After removing the appropriate w digits from the number n, the result should have a value that is divisible by 10k. The result can start with digit 0 in the single case (the result is zero and written by exactly the only digit 0).
*/
/* Accepted 31 ms 2000 KB */
#include <iostream>
#include <string>

int main()
{
  int n, k;
  std::cin >> n >> k;
  int answer, zeros;
  answer = zeros = 0;
  std::string s = std::to_string(n);
  if(n == 0)
  {
    std::cout << "0" << '\n';
    return 0;
  }
  if(s.length()-1 < k)
  {
    std::cout << s.length() - 1 << '\n';
    return 0;
  }
  for(int i = s.length() - 1; i > 0; i--)
  {
    if(s.at(i) != '0')
      answer++;
    else
      zeros++;
    if(zeros == k) break;
  }
  if(zeros != k)
    answer = s.length() - 1;
  std::cout << answer << '\n';
  return 0;
}
