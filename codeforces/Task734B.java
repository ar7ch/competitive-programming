/*
734B
Recently Anton found a box with digits in his room. There are k2 digits 2, k3 digits 3, k5 digits 5 and k6 digits 6.

Anton's favorite integers are 32 and 256. He decided to compose this integers from digits he has. He wants to make the sum of these integers as large as possible. Help him solve this task!

Each digit can be used no more than once, i.e. the composed integers should contain no more than k2 digits 2, k3 digits 3 and so on. Of course, unused digits are not counted in the sum.

Input
The only line of the input contains four integers k2, k3, k5 and k6 — the number of digits 2, 3, 5 and 6 respectively (0 ≤ k2, k3, k5, k6 ≤ 5·106).

Output
Print one integer — maximum possible sum of Anton's favorite integers that can be composed using digits from the box.
*/
/*Accepted	155 ms	0 KB*/

//k2 = a[0], k3 = a[1], k5 = a[2], k6 = a[3]

import java.util.Scanner;

public class Task734B{
  static int mini(int a, int b, int c){
  int smallest = a;
  if (smallest > b) smallest = b;
  if (smallest > c) smallest = c;
  return smallest;
  }
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int[] a = new int[4];
    int sum = 0;
    a[0] = in.nextInt();
    a[1] = in.nextInt();
    a[2] = in.nextInt();
    a[3] = in.nextInt();

    int min1 = Math.min(Math.min(a[0], a[2]), a[3]);
    if( min1 - a[0] == 0 ){
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
