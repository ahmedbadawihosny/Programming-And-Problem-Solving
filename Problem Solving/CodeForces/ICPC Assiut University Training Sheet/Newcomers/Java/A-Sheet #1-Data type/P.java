import java.util.Scanner;

  public class P {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int x = input.nextInt();
  x /= 1000;
  if (x % 2 == 0){
    System.out.println("EVEN");
  } else  {
    System.out.println("ODD");
  }
  input.close();
  }
}