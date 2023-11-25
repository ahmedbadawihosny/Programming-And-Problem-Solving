import java.util.Scanner;

public class L {
public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    String F1 = input.next();
    String S1 = input.next();
    String F2 = input.next();
    String S2 = input.next();

    if (S1.equals(S2)) {
        System.out.println("ARE Brothers");
    } else {
        System.out.println("NOT");
    }
    input.close();
}
}

