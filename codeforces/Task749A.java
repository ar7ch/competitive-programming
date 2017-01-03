/*
749A
Bachgold problem is very easy to formulate. Given a positive integer n represent it as a sum of maximum possible number of prime numbers. One can prove that such representation exists for any integer greater than 1.

Recall that integer k is called prime if it is greater than 1 and has exactly two positive integer divisors — 1 and k.

Input
The only line of the input contains a single integer n (2 ≤ n ≤ 100 000).

Output
The first line of the output contains a single integer k — maximum possible number of primes in representation.

The second line should contain k primes with their sum equal to n. You can print them in any order. If there are several optimal solution, print any of them.
*/
/* Accepted	295 ms	20500 KB */

import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
import java.util.Arrays;
public class Task749A{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int number = in.nextInt();
    if(number % 2 == 0){
      System.out.println(number / 2);
      if (number / 2 == 1) System.out.println("2");
      for(int i = 1; i < (number / 2); i++){
        System.out.print("2 ");
        if (i == (number / 2) - 1) System.out.println("2");
      }
    }
    else if(((number - 3) % 2) == 0 && number != 3){
      System.out.println(((number - 3) / 2) + 1);
      for(int i = 1; i < ((number - 3) / 2) + 1; i++){
        System.out.print("2 ");
        if (i == (number-3) / 2) System.out.println("3");
      }
    }
    else if(number % 3 == 0){
      System.out.println(number / 3);
      if (number / 3 == 1) System.out.println("3");
      for(int i = 1; i < (number / 3); i++){
        System.out.print("3 ");
        if (i == (number / 3) - 1) System.out.println("3");
      }
    }
    System.exit(0);
  }
}
