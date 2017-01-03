/*
101149A

Sergey takes part in a TV show «Battle of Prophets», in another episode of which the task of the participants is guessing the colors of the balls taken by the show host out of the opaque urn. Using a spirit ritual he found out that the urn contains balls of n different colors, and the number of balls of the i-th color is exactly ai. The show host is planning to take out balls one by one until the urn becomes empty, and Sergey will have to say the ball's color every time before it is taken out. Unfortunately, the ancient spirits refuse to help him, and he has to trust his intuition only. Sergey wants to guess the color of as many balls as possible in the worst case and is now thinking how many times he is able to make a correct guess for sure.

Input
The first line contains a single integer n (1 ≤ n ≤ 2·105) — the number of different colors.

The second line contains n space-separated integers: ai (1 ≤ ai ≤ 109) — the number of balls of the i-th color in the urn.

Output
Output a single integer — the maximal number of balls whose color Sergey can definitely guess.
*/
/* Accepted	592 ms	0 KB */
import java.util.*;

public class CfGymOne{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < a.length; i++){
      a[i] = in.nextInt();
    }
    Arrays.sort(a);
    System.out.println(a[n-1]);
  }
}
