/*Accepted 	155 ms 	0 KB */
/*
Mehrdad wants to become minister of Arpa’s land. Arpa has prepared an exam. Exam has only one question, given n, print the last digit of 1378^n.

Mehrdad has become quite confused and wants you to help him. Please help, although it's a naive cheat.
Input

The single line of input contains one integer n (0  ≤  n  ≤  109).
Output

Print single integer — the last digit of 1378^n.
*/
/*
Mehrdad хочет стать министром страны Arpa. Arpa приготовил ему экзамен. Экзамен состоит из одной задачи: по заданному числу n определите последнюю цифру числа 1378^n.

Mehrdad озадачен и обратился за помощью к вам. Помогите ему!
Входные данные

Единственная строка содержит целое число n (0  ≤  n  ≤  109).
Выходные данные

Выведите одно целое число — последнюю цифру числа 1378^n.
*/

import java.util.Scanner;
public class Task742A {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		if(n <= 8){
	    n = (long) Math.pow(8, n);
	    String s = Long.toString(n);
	    System.out.println(s.charAt(s.length()-1));
		}
		else{
			switch((int)n % 4){
				case 3: System.out.println("2");
								break;
		  	case 2: System.out.println("4");
								break;
				case 1: System.out.println("8");
								break;
				case 4: System.out.println("6");
			 					break;
				case 0: System.out.println("6");
								break;
			}
		}
		System.exit(0);
	}
}
