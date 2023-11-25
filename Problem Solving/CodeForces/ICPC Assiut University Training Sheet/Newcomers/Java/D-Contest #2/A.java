  import java.util.Scanner;
public class A {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    long a,b;
    a = input.nextLong();
    b = input.nextLong();

    if (a-b > 0){
      System.out.println(a-b);
    } else {
      System.out.println(0);
    }
    input.close();
  }
}
