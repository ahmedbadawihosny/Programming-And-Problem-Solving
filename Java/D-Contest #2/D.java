 // not accept yet
import java.util.Scanner;

public class D {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    long t = scanner.nextLong();
    for (int i = 0; i < t; i++) {
        long l = scanner.nextLong();
        long r = scanner.nextLong();
        long sum = 0;
        for (long num = l; num <= r; num++) {
            sum += num;
        }
        
        System.out.println(sum);
  }
  scanner.close();
}
}
