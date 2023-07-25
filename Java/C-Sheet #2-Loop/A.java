import java.util.Scanner;

public class A {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int x = input.nextInt();
  for (int i=1 ;i<=x;i++){
    System.out.println(i);
  }
  input.close();
  }
}