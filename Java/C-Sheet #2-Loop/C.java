import java.util.Scanner;

public class C {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int count,even=0,odd=0,pos=0,neg=0;
  count = input.nextInt();

  for(int i=1 ;i <= count;i++){
    int num = input.nextInt();
    if(num % 2 == 0){
      even++;
    } else {
      odd++;
    }
    if (num > 0 ){
      pos++;
    } else {
      neg++;
    }
  }
  System.out.print("Even: " + even + "\n"
        + "Odd: " + odd + "\n" + 
        "Positive: " + pos +"\n" +
        "Negative: " + neg );
        input.close();
  }
}