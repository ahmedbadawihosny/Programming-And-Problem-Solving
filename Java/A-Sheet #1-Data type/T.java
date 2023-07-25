import java.util.Scanner;

public class T {
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int a = scanner.nextInt();
    int b = scanner.nextInt();
    int c = scanner.nextInt();

    int min = Math.min(a, Math.min(b, c));
    int max = Math.max(a, Math.max(b, c));
    int middle = a + b + c - min - max;

    System.out.println(min);
    System.out.println(middle);
    System.out.println(max);
    System.out.println();
    System.out.println(a);
    System.out.println(b);
    System.out.println(c);
    scanner.close();
}
}
