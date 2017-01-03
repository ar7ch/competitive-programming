/*
572A
You are given two arrays A and B consisting of integers, sorted in non-decreasing order. Check whether it is possible to choose k numbers in array A and choose m numbers in array B so that any number chosen in the first array is strictly less than any number chosen in the second array.

Input
The first line contains two integers nA, nB (1 ≤ nA, nB ≤ 105), separated by a space — the sizes of arrays A and B, correspondingly.

The second line contains two integers k and m (1 ≤ k ≤ nA, 1 ≤ m ≤ nB), separated by a space.

The third line contains nA numbers a1, a2, ... anA ( - 109 ≤ a1 ≤ a2 ≤ ... ≤ anA ≤ 109), separated by spaces — elements of array A.

The fourth line contains nB integers b1, b2, ... bnB ( - 109 ≤ b1 ≤ b2 ≤ ... ≤ bnB ≤ 109), separated by spaces — elements of array B.

Output
Print "YES" (without the quotes), if you can choose k numbers in array A and m numbers in array B so that any number chosen in array A was strictly less than any number chosen in array B. Otherwise, print "NO" (without the quotes).
*/
/* Accepted	639 ms	0 KB */
import java.util.Scanner;

public class Task572A{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);

    int a,b,k,m;
    long l, r, x;
    l = r = x = 0;
    a = in.nextInt();
    b = in.nextInt();
    k = in.nextInt();
    m = in.nextInt();
    for (int i = 0; i < a; i++){
      x = in.nextInt();
      if (i == k - 1){
        l = x;
      }
    }
    for (int i = 0; i < b; ++i){
      x = in.nextInt();
      if(i == b - m){
        r = x;
      }
    }
    if (l < r){
      System.out.println("YES");
    }
    else{
      System.out.println("NO");
    }
  }
}
