import java.util.Scanner;

public class B {
  public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      int small_num = scanner.nextInt();
      long big_num = scanner.nextLong();
      char charactar = scanner.next().charAt(0);
      float small_decimal = scanner.nextFloat();
      double big_decimal = scanner.nextDouble();

      System.out.println(small_num);
      System.out.println(big_num);
      System.out.println(charactar);
      System.out.println(small_decimal);
      System.out.println(big_decimal);
      scanner.close();
  }
}
