import java.util.Scanner;

public class N {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    char X = input.next().charAt(0);

  if (Character.isLowerCase(X)) {
      char converted = Character.toUpperCase(X);
      System.out.println(converted);
  } else {

    char converted = Character.toLowerCase(X);
    System.out.println(converted);
  }
  input.close();
}
}
