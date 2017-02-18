/*
281A
Word Capitalization
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.
*/
/* Accepted 310 ms 20400 KB */

import java.util.Scanner;

public class Task281A{
    public static void main(String[] args){
      Scanner in = new Scanner(System.in);
      String word = in.nextLine();
      char[] ch = word.toCharArray();
      ch[0] = Character.toUpperCase(ch[0]);
      String word1 = new String(ch);
      System.out.println(word1);
      /* second way, 468 ms
      StringBuilder sb = new StringBuilder();
      sb.append(word);
      sb.setCharAt(0, Character.toUpperCase(sb.charAt(0)));
      */
    }
}
