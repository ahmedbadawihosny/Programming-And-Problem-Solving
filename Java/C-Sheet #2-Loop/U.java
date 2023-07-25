import java.util.Scanner;

public class U {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num,x,y;
  num = input.nextInt();
  x= input.nextInt();
  y = input.nextInt();

  long sum1 = 0;
  for (int i=1;i<=num;i++){
      if(i / 10 == 0){
          if (i >= x && i <= y){
              sum1 +=i;
          }
      } else {
          int num2 = i;
          int sum2 = 0;
          while (num2 == 1){
              int digit = num2 % 10;
              sum2 += digit;
              num2 /= 10;
          }
          if (sum2 >= x && sum2 <= y){
              sum1 += i;
          }
      }
  }
    System.out.println(sum1);
  input.close();
  }
}