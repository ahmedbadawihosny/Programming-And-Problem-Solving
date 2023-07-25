import java.util.Scanner;

public class L {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num1,num2,gcd=0;
  num1 = input.nextInt();
  num2 = input.nextInt();

  int max,min;
  if (num1 >= num2){
      max = num1;
      min = num2;
  } else {
      max = num1;
      min = num2;
  }
  for (int i =1;i <= max;i++){
      if (num1 % i == 0 && num2 % i == 0){
        gcd = i;
      }
  }
    System.out.println(gcd);
    input.close();
  }
}