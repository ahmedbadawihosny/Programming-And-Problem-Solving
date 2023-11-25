import java.util.Scanner;

public class W {
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
      System.out.println();
      spaces--;
  }
  spaces = 1;

      for (int i = num;i >= 1;i--){
      for (int x = 1;x < spaces;x++){
        System.out.print(" ");
      }
      for (int y = i * 2;y > 1;y--){
          System.out.print("*");
      }
      System.out.println();
      spaces++;
      }
  input.close();
  }
}