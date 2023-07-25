import java.util.Scanner;

public class E {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double r=input.nextDouble();
        double area =3.141592653 * Math.pow(r,2);
        System.out.printf("%.9f", area);
        input.close();
    }
}