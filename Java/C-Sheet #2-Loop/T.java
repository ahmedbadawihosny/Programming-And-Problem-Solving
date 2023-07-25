import java.util.Scanner;

public class T {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num = input.nextInt();

  int spaces = num-1;
  for (int i = 1;i <= num;i++){
    for (int x = 1 ;x <= spaces;x++){
      System.out.print(" ");
    } 
      for (int y = 1;y < i*2;y++){
      System.out.print("*");
    }
      spaces--;
      System.out.println();
  }
  input.close();
  }
}