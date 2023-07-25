import java.util.Scanner;

public class H {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int floorResult = (int) Math.floor((double) a / b);
        int ceilResult = (int) Math.ceil((double) a / b);
        int roundResult = (int) Math.round((double) a / b);

        System.out.println("floor " + a + " / " + b + " = " + floorResult);
        System.out.println("ceil " + a + " / " + b + " = " + ceilResult);
        System.out.println("round " + a + " / " + b + " = " + roundResult);
        input.close();
    }
}
