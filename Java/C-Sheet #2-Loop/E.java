import java.util.Scanner;

public class E {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int n,max=0;
  n = input.nextInt();
  for (int i=1;i<=n;i++){
    int num = input.nextInt();
    if (i == 1){
      max = num;
    } if (num > max){
      max = num;
    }
  }
  System.out.println(max + "\n");
  input.close();
  }
}