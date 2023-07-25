import java.util.Scanner;

  public class C {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    long x,y;
    x = input.nextInt();
    y = input.nextInt();
    System.out.println(x + " + " + y + " = " + (x+y));
    System.out.println(x + " * " + y + " = " + (x*y));
    System.out.println(x + " - " + y + " = " + (x-y));
    input.close();
  }
}