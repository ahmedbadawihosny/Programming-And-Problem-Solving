  import java.util.Scanner;
public class E {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    long n,x,y;
    n = input.nextLong();
    x = n/4;
    if (x % 2 == 0){
      y = n % 4;
    } else {
      y = 3 - (n%4);
    }
    System.out.println(x + " " + y);
    input.close();
  }
}
