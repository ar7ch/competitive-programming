/*
611A
Today is Wednesday, the third day of the week. What's more interesting is that tomorrow is the last day of the year 2015.

Limak is a little polar bear. He enjoyed this year a lot. Now, he is so eager to the coming year 2016.

Limak wants to prove how responsible a bear he is. He is going to regularly save candies for the entire year 2016! He considers various saving plans. He can save one candy either on some fixed day of the week or on some fixed day of the month.

Limak chose one particular plan. He isn't sure how many candies he will save in the 2016 with his plan. Please, calculate it and tell him.

Input
The only line of the input is in one of the following two formats:

"x of week" where x (1 ≤ x ≤ 7) denotes the day of the week. The 1-st day is Monday and the 7-th one is Sunday.
"x of month" where x (1 ≤ x ≤ 31) denotes the day of the month.
Output
Print one integer — the number of candies Limak will save in the year 2016.
*/
/* Accepted	170 ms	20300 KB */

import java.util.Scanner;

public class Task611A{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int x1, y1, x2, y2;
  while (in.hasNextInt())
     {


     int[] m = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     int n, c = 0;
     boolean isWeek = false;
     n = in.nextInt();
     String s = in.nextLine();
     char[] ch = s.toCharArray();
     for (int i = 0; i < ch.length; i++){
       if (ch[i] == 'w') isWeek = true;
     }

     if (isWeek == true) {
       int d = (n + 3) % 7 + (n == 4 ? 7 : 0);
       c = 1 + (366 - d) / 7;
     } else {
       for (int i = 0; i < 12; ++i) {
         if (m[i] >= n) {
           ++c;
         }
       }
     }
     System.out.println(c);
     System.exit(0);
  }
}
}
