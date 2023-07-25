import java.util.Scanner;

public class M {
public static void main(String[] args) {
  Scanner scanner = new Scanner(System.in);
  char X = scanner.next().charAt(0);
  if (Character.isDigit(X)) {
      System.out.println("IS DIGIT");
  } else {
    System.out.println("ALPHA");
    if (Character.isUpperCase(X)) {
        System.out.println("IS CAPITAL");
    } else {
        System.out.println("IS SMALL");
    }
    }
    scanner.close();
}
}
