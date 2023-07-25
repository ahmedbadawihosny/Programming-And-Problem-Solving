import java.util.Scanner;
  
  public class Q {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  double num1,num2;
  num1 = input.nextDouble();
  num2 = input.nextDouble();

    if(num1 == 0 && num2 == 0){
    System.out.println("Origem");
  } else if(num1 == 0 && num2 != 0){
      System.out.println("Eixo Y");
  } else if(num1 != 0 && num2 == 0) {
      System.out.println("Eixo X");
  } else if(num1 > 0 && num2 > 0){
    System.out.println("Q1");
  } else if(num1 < 0 && num2 > 0){
    System.out.println("Q2");
  } else if(num1 < 0 && num2 < 0){
    System.out.println("Q3");
  } else {
    System.out.println("Q4");
  }
  input.close();
  }
}