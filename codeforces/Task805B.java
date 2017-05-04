/*
805A
3-palindrome
In the beginning of the new year Keivan decided to reverse his name. He doesn't like palindromes, so he changed Naviek to Navick.

He is too selfish, so for a given n he wants to obtain a string of n characters, each of which is either 'a', 'b' or 'c', with no palindromes of length 3 appearing in the string as a substring. For example, the strings "abc" and "abca" suit him, while the string "aba" doesn't. He also want the number of letters 'c' in his string to be as little as possible.

Input
The first line contains single integer n (1 ≤ n ≤ 2·105) — the length of the string.

Output
Print the string that satisfies all the constraints.

If there are multiple answers, print any of them.
*/
/* Accepted 140 ms	0 KB */


import java.util.Scanner;

public class Task805B
{
  public static void main(String[] args)
  {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int flag = 1;
    StringBuilder sb = new StringBuilder();
    sb.append("a");
    for(int i = 1; i < n; i++)
    {
      if(flag == 1 || flag == 2)
        sb.append("b");
      else if(flag == 3 || flag == 4)
        sb.append("a");
      flag++;
      if(flag == 5)
        flag = 1;
    }
    System.out.println(sb.toString());
  }
}
