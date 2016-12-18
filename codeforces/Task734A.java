//k2 = a[0], k3 = a[1], k5 = a[2], k6 = a[3]
/*Accepted 	155 ms 	0 KB */
/*
Anton likes to play chess, and so does his friend Danik.

Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.

Now Anton wonders, who won more games, he or Danik? Help him determine this.
Input

The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of games played.

The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games. The i-th character of the string is equal to 'A' if the Anton won the i-th game and 'D' if Danik won the i-th game.
Output

If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.

If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.

If Anton and Danik won the same number of games, print "Friendship" (without quotes).
*/

import java.util.Scanner;

public class Task734A{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int[] a = new int[4];
    int sum = 0;
    a[0] = in.nextInt();
    a[1] = in.nextInt();
    a[2] = in.nextInt();
    a[3] = in.nextInt();

    int min1 = Math.min(Math.min(a[0], a[2]), a[3]);
    if(min1 - a[0] == 0){
      System.out.println(256 * min1);
      System.exit(0);
    }
    else{
      a[0] -= min1;
      a[2] -= min1;
      a[3] -= min1;
      sum += 256*min1;
      sum += Math.min(a[0],a[1]) * 32;
      System.out.println(sum);
      System.exit(0);
    }
  }
}
