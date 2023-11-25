import java.util.Scanner;
  
  public class D {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    long a,b,c,d;
    a = input.nextLong();
    b = input.nextLong();
    c = input.nextLong();
    d = input.nextLong();
    System.out.println("Difference = " + ((a*b) - (c*d)));
    input.close();
  }
}