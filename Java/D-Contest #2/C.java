  import java.util.Scanner;
public class C {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int n,k;
    n = input.nextInt();
    k = input.nextInt();
    int min=0,count=0;
    boolean flag = true;
    for (int i =1;i<=n;i++){
      int x;
      x = input.nextInt();
      if (flag){
        min = x;
        flag=false;
      } else {
        if (x < min){
          min = x;
        }
      }
      count++;
      if (count == k || i == n){
        System.out.print(min + " ");
        count = 0;
        flag = true;
      }
    }
    input.close();
  }
}
