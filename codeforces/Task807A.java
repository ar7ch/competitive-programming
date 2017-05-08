/*
807A
Is it Rated?
Is it rated?

Here it is. The Ultimate Question of Competitive Programming, Codeforces, and Everything. And you are here to answer it.

Another Codeforces round has been conducted. No two participants have the same number of points. For each participant, from the top to the bottom of the standings, their rating before and after the round is known.

It's known that if at least one participant's rating has changed, then the round was rated for sure.

It's also known that if the round was rated and a participant with lower rating took a better place in the standings than a participant with higher rating, then at least one round participant's rating has changed.

In this problem, you should not make any other assumptions about the rating system.

Determine if the current round is rated, unrated, or it's impossible to determine whether it is rated of not.

Input
The first line contains a single integer n (2 ≤ n ≤ 1000) — the number of round participants.

Each of the next n lines contains two integers ai and bi (1 ≤ ai, bi ≤ 4126) — the rating of the i-th participant before and after the round, respectively. The participants are listed in order from the top to the bottom of the standings.

Output
If the round is rated for sure, print "rated". If the round is unrated for sure, print "unrated". If it's impossible to determine whether the round is rated or not, print "maybe".
*/
/* Accepted 155 ms 0 KB */

import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;
public class Task807A
{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int[] a1 = new int[n];
    Integer[] a2 = new Integer[n];
    boolean isRated = false;
    for(int i = 0; i < n; i++)
    {
      a1[i] = in.nextInt();
      a2[i] = in.nextInt();
      if(a2[i] != a1[i])
        isRated = true;
    }
    if(!isRated)
    {
      Integer[] a3 = Arrays.copyOf(a2, a2.length);
      Arrays.sort(a3, Collections.reverseOrder());
      if(Arrays.equals(a3, a2))
      {
        System.out.println("maybe");
        System.exit(0);
      }
      else
      {
        System.out.println("unrated");
        System.exit(0);
      }
    }
    else
    {
      System.out.println("rated");
    }
  }
}
