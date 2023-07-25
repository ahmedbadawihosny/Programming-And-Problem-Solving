import java.util.Scanner;

public class X {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int numberTest = input.nextInt();
;
  long  num;
  for (int i=0;i < numberTest;i++){
      num = input.nextLong();
      int ones = 0;
      while (num > 0){
          if (num % 2 == 1){
              ones++;
          }
          num /=2;
      }
      long  sum = 0;
      for (int x = 0 ;x < ones;x++){
          sum+= 1 * Math.pow(2,x);
      }
      System.out.println(sum);
  }
  input.close();
  }
}