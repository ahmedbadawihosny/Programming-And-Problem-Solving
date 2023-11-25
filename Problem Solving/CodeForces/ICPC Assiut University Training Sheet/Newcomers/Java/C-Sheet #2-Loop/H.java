import java.util.Scanner;

public class H {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num,res,flag=0;
  num = input.nextInt();
  res = num/2 ;
  
  for (int i = 2 ; i <= res; i++){
      if(num % i == 0){
        System.out.println("NO");
        flag=1;
        break;
      }

    }
    if(flag == 0){
      System.out.println("YES");
    }
    input.close();
  }
}