/*
733B
Very soon there will be a parade of victory over alien invaders in Berland. Unfortunately, all soldiers died in the war and now the army consists of entirely new recruits, many of whom do not even know from which leg they should begin to march. The civilian population also poorly understands from which leg recruits begin to march, so it is only important how many soldiers march in step.

There will be n columns participating in the parade, the i-th column consists of li soldiers, who start to march from left leg, and ri soldiers, who start to march from right leg.

The beauty of the parade is calculated by the following formula: if L is the total number of soldiers on the parade who start to march from the left leg, and R is the total number of soldiers on the parade who start to march from the right leg, so the beauty will equal |L - R|.

No more than once you can choose one column and tell all the soldiers in this column to switch starting leg, i.e. everyone in this columns who starts the march from left leg will now start it from right leg, and vice versa. Formally, you can pick no more than one index i and swap values li and ri.

Find the index of the column, such that switching the starting leg for soldiers in it will maximize the the beauty of the parade, or determine, that no such operation can increase the current beauty.

Input
The first line contains single integer n (1 ≤ n ≤ 105) — the number of columns.

The next n lines contain the pairs of integers li and ri (1 ≤ li, ri ≤ 500) — the number of soldiers in the i-th column which start to march from the left or the right leg respectively.

Output
Print single integer k — the number of the column in which soldiers need to change the leg from which they start to march, or 0 if the maximum beauty is already reached.

Consider that columns are numbered from 1 to n in the order they are given in the input data.

If there are several answers, print any of them.
*/
/* Accepted	514 ms	0 KB */

import java.util.*;

public class cftwo{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int[] a = new int[n];
    int[] b = new int[n];
    int right = 0;
    int left = 0;
    int numofmax = 0;


    for(int i = 0; i < n; i++){
      a[i] = in.nextInt();
      b[i] = in.nextInt();
      left += a[i];
      right += b[i];
    }

    int[] c = new int[n];
    int[] d = new int[n];

    for(int i = 0; i < n; i++){
      c[i] = Math.abs((left - a[i] + b[i]) - (right - b[i] + a[i]));
      d[i] = Math.abs((left - a[i] + b[i]) - (right - b[i] + a[i]));
    }
    Arrays.sort(d);

    for(int i = 0; i < n; i++){
      if (c[i] == d[n-1]){ numofmax = i + 1; break;}
    }
    if (Math.abs(left - right) > d[n-1]) numofmax = 0;
    System.out.println(numofmax);
  }
}
