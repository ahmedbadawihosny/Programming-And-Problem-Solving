import java.util.Scanner;
public class E {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int a,b;
    a = input.nextInt();
    b = input.nextInt();
    if ((a == 0 || b == 0) || Math.abs(a-b) >= 2){
      System.out.println("NO");
    } else {
      System.out.println("YES");
    }
    input.close();
  }
}
