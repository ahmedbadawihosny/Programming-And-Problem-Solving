import java.util.Scanner;
//there is aproblem in this code
public class Q {
  public static void main(String[] args) {
  Scanner input = new Scanner(System.in);
  int t = input.nextInt();

  for (int i = 1; i <= t; i++) {
      int n = input.nextInt();

  while (n > 0) {
      long digit = n % 10;
      System.out.print(digit + " ");
      n /= 10;
  }
  System.out.println();
}

input.close();
  }
}
