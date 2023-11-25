import java.util.Scanner;
public class D {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    long a,b,c,d;
    a = input.nextLong();
    b = input.nextLong();
    c = input.nextLong();
    d = input.nextLong();

    if ((a + b * c == d) || (a - b + c == d) || (a - b * c == d) 
    || (a + b - c == d) || (a * b - c == d) || (a * b + c == d)){
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }
    input.close();
  }
}
