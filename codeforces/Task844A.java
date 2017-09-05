/*
https://codeforces.com/contest/844/problem/A
844A. Diversity
Calculate the minimum number of characters you need to change in the string s, so that it contains at least k different letters, or print that it is impossible.

String s consists only of lowercase Latin letters, and it is allowed to change characters only to lowercase Latin letters too.

Input
First line of input contains string s, consisting only of lowercase Latin letters (1 ≤ |s| ≤ 1000, |s| denotes the length of s).

Second line of input contains integer k (1 ≤ k ≤ 26).

Output
Print single line with a minimum number of necessary changes, or the word «impossible» (without quotes) if it is impossible.
*/
/* Accepted	155 ms	0 KB */

import java.util.*;

public class Task844A
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		String str = in.nextLine();
		String temp_int = in.nextLine();
		int a = Integer.parseInt(temp_int);
		if(str.length() < a)
		{
			System.out.println("impossible");
			System.exit(0);
		}
		HashSet<Character> mySet = new HashSet<Character>();
		for(int i = 0; i < str.length(); i++)
		{
			mySet.add(str.charAt(i));
		}
		if (mySet.size() >= a)
			System.out.println("0");
		else
			System.out.println(Math.abs(a - mySet.size()));
	}
}