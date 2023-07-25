import java.util.Scanner;

public class V {
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int a = scanner.nextInt();
    char opr = scanner.next().charAt(0);
    int b = scanner.nextInt();

    boolean flag;

    if (opr == '<') {
        flag = a < b;
    } else if (opr == '>') {
        flag = a > b;
    } else {
        flag = a == b;
    }

    if (flag) {
        System.out.println("Right");
    } else {
        System.out.println("Wrong");
    }
    scanner.close();
}
}
