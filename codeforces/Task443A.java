/*
443A
Anton and Letters
Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

Input
The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

Output
Print a single number — the number of distinct letters in Anton's set.
*/
/* Accepted 124 ms 20388 KB */

import java.util.HashSet;
import java.util.Scanner;

public class Task443A{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    HashSet<Integer> set = new HashSet<Integer>();
    for(int i = 0; i < s.length(); i++)
      if(s.charAt(i) != '{' && s.charAt(i) != '}' && s.charAt(i) != ' ' && s.charAt(i) != ',')
        set.add(Character.getNumericValue(s.charAt(i)));
    System.out.println(set.size());
  }
}
