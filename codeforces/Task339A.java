import java.util.Scanner;
import java.util.Arrays;

public class Task339A{
  public static void main (String[] args){
    Scanner in = new Scanner(System.in);
    String sum = in.nextLine();
    String[] sumParts = sum.split("\\+");
    int[] a = new int[sumParts.length];
    for (int i = 0; i < sumParts.length; i++){
      a[i] = Integer.parseInt(sumParts[i]);
    }
    Arrays.sort(a);
    for (int i = 0; i < a.length; i++){
      System.out.print(a[i]);
      if (i != a.length-1){
        System.out.print("+");
      }
    }
  }
}
