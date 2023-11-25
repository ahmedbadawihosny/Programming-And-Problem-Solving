import java.util.Scanner;

public class U {
public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    double N = input.nextDouble();

  if (N % 1 == 0) {
      System.out.println("int " + (int) N);
  } else {
      int x = (int) N;
      double y = N - x;
      System.out.println("float " + x + " " + y);
  }
  input.close();
}
}
