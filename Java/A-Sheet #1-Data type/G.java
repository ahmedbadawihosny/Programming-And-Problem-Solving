import java.util.Scanner;
  
  public class G {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    long n = input.nextLong();

    System.out.println((n*(n+1)/2));
    input.close();
  }
}