import java.util.Scanner;
  
  public class J {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int x,y;
    x = input.nextInt();
    y = input.nextInt();
    if (x%y == 0){
      System.out.println("Multiples");
    }  else if (y%x == 0){
      System.out.println("Multiples");
    } else {
      System.out.println("No Multiples");
    }
    input.close();
  }
}