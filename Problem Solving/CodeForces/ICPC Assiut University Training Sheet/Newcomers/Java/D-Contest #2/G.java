  // not accept yet
  import java.util.Scanner;
public class G {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int t;
    t = input.nextInt();
    for (int i = 1;i <= t;i++){
      long n,s;
      n = input.nextLong();
      s = input.nextLong();
      if (n * (n+1) / 2 < s){
        System.out.print("-1");
      } else {
        long sum=0;
        for(int j=(int)n;j>=1;j--){
          if (sum + j <= s){
            sum += j;
            System.out.print(j + " ");
          }
        }
        System.out.println();
      }
    }
    input.close();
  }
}
