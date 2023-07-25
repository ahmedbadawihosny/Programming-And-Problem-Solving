import java.util.Scanner;

public class Z {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num1,num2,counter = 0;
  num1 = input.nextInt();
  num2 = input.nextInt();

for (int i = 0;i <= num1;i++){
    for (int z = 0;z <= num1;z++){
        if (num2 - i - z >= 0 && num2 - i -z <= num1){
            counter++;
        }
    }
}
  System.out.println(counter);
  input.close();
  }
}