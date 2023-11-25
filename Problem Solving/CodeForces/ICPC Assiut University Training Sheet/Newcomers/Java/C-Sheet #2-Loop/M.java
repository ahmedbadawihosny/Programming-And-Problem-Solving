import java.util.Scanner;

public class M {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int a,b;
  int counter = -1;
  a = input.nextInt();
  b = input.nextInt();
  for (int i = a;i <= b;i++ ){
      int x = 0;
      int j = i;
      while (j>0){
          if (j % 10 != 4 && j % 10 != 7)
              x++;
              j = j / 10;
      }
      if (x == 0){
        System.out.print(i + " ");
        counter++;
      }
  }
      if (counter == -1){
        System.out.println(-1);
      }
      input.close();
  }
}