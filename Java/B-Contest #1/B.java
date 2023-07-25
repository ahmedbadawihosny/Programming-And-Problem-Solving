import java.util.Scanner;
public class B {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    long a,b,k;
    a = input.nextLong();
    b = input.nextLong();
    k = input.nextLong();

    if (a % k == 0 && b % k == 0){
    System.out.println("Both");
  } else if (a % k == 0 && b % k != 0){
    System.out.println("Memo");
  } else if (a % k != 0 && b % k == 0){
    System.out.println("Momo");
  } else if (a % k != 0 && b % k != 0){
    System.out.println("No One");
  }
  input.close();
  }
}
