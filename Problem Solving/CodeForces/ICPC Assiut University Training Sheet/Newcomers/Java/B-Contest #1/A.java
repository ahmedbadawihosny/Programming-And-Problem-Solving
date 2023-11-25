import java.util.Scanner;

public class A {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  double a,b;
  a = input.nextDouble();
  b = input.nextDouble();
  double pre = 100 - a;
  double price = b/pre;
  double res = (a*price) + b;
  System.out.println(res);
  input.close();
  }
}
