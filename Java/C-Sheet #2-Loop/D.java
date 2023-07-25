import java.util.Scanner;

public class D {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num;
  while(true){
    num = input.nextInt();
    if(num == 1999){
      System.out.println("Correct");
      break;
    } else {
      System.out.println("Wrong");
    }
    }
    input.close();
  }
}