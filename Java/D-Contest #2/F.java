  import java.util.Scanner;
public class F {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int t = input.nextInt();
    int res=0;
    for (int i = 1;i <= t;i++){
      int count=0;
      long  num;
      num = input.nextLong();
      if (num % 2 != 0){
        count =0;
      } else {
        while(num > 0){
          if (num % 2 != 0){
            break;
          } else {
            count++;
            num/=2;
          }
        }
      }
      if (count > res){
          res = count;
      }
      }
      System.out.println(res);
      input.close();
  }
}
