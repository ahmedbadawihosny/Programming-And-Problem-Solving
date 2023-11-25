import java.util.Scanner;

public class K {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num = input.nextInt();
  for (int i = 1;i <= num ;i++){
      if (num % i == 0){
        System.out.println(i);
  }
}
  input.close();
  }
}