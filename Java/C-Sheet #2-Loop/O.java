import java.util.Scanner;

public class O {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num = input.nextInt();
  
  for (int i = 1;i <= num; i++){
    for (int x = 1;x <= i;x++){
        System.out.print("*");
    }
        System.out.println();
  }
  input.close();
  }
}