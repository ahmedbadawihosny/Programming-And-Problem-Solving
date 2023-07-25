import java.util.Scanner;

public class S {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int counter = input.nextInt();

  for (int j = 1; j<=counter; j++) {
    int num1,num2,sum=0;
    num1 = input.nextInt();
    num2 = input.nextInt();
    int min,max;
    if (num1 >= num2){
      max = num1;
      min = num2;
    } else {
      max = num2;
      min = num1;
    }
    for (int i = min + 1;i <= max - 1;i++){
          if (i % 2 != 0){
            sum+=i;
          }
    }
    System.out.println(sum);
  }
  input.close();
  }
}