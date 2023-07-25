import java.util.Scanner;

public class B {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int count = input.nextInt();
  if (count == 1){
    System.out.println(-1);
  }

  for (int i=1;i<=count;i++){
    if (i % 2 == 0){
      System.out.println(i);
    }
  }
  input.close();
  }
}