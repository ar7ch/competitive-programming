/*
58A
Chat room
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to s$

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its le$

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".
*/
/* Accepted 186 ms 20500 KB */

import java.util.Scanner;

public class Task58A{
  public static void main(String args[]){
  Scanner in = new Scanner(System.in);
  int i, j;
  String inputStr, hello, outputStr;
  hello = "hello";
  outputStr = "NO";
  inputStr = in.nextLine();
  for(j = i = 0; i < inputStr.length(); i++){
    if(inputStr.charAt(i) == hello.charAt(j)){
      if(++j == 5){
        outputStr = "YES";
        break;
      }
    }
  }
    System.out.println(outputStr);
  }
}
