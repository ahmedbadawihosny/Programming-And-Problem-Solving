import java.util.Scanner;
  
  public class F {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    long n,m;
    n = input.nextLong();
    m = input.nextLong();
    System.out.println(((n%10) + (m%10)));
    input.close();
  }
}