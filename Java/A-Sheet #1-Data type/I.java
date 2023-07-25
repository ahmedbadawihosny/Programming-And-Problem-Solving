import java.util.Scanner;

  public class I {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int x,y;
  x = input.nextInt();
  y = input.nextInt();
  if (x>=y) {
    System.out.println("Yes");
  } else  {
    System.out.println("No");
  }
  input.close();
  }
}