import java.util.Scanner;

public class P {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num ;
  num = input.nextInt();
  for (int i = 1;i <= num;i++){
    for (int x = num ;x >= i;x--){
      System.out.print("*");
    }
    System.out.println();
  }
  input.close();
  }
}