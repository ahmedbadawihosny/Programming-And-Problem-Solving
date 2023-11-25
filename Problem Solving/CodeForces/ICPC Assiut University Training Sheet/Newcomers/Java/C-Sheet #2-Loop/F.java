import java.util.Scanner;

public class F {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num = input.nextInt();
  for (int i=1;i<=12;i++){
    System.out.println(num + " * " + i + " = " + num*i);
  }
  input.close();
  }
}