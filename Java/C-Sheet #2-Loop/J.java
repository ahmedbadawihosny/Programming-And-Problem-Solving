import java.util.Scanner;

public class J {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num;
  num = input.nextInt();
  for (int i = 2;i <= num;i++){
      boolean y = false;
      for (int x = 2 ;x < i;x++){
        if (i % x == 0)
            y = true;
      }
        if (y == false){
          System.out.print(i + " ");
        }
  }
  input.close();
  }
}