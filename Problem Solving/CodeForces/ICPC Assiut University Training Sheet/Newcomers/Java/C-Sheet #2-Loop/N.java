import java.util.Scanner;

public class N {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  String opr;
  opr = input.next();
  int lines;
  lines = input.nextInt();
  for (int i = 1 ; i <= lines ;i++){
      int x;
      x = input.nextInt();
      for(int j=1;j<=x;j++){
        System.out.print(opr);
      }
      System.out.println();
  }
  input.close();
  }
}