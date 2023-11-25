import java.util.Scanner;

  public class Z {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  double num1,num2,num3,num4;
  num1 = input.nextDouble();
  num2 = input.nextDouble();
  num3 = input.nextDouble();
  num4 = input.nextDouble();

    if((num2*Math.log(num1)) > (num4*Math.log(num3))){
    System.out.println("YES");
  } else {
    System.out.println("NO");
  }
  input.close();
  }
}