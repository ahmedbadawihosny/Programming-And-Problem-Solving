import java.util.Scanner;

public class G {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int t = input.nextInt();
  long fac = 1;
  for(int i=1;i<=t;i++){
    int num = input.nextInt();
    for (int j=1;j<=num;j++){
      fac *= j;
    }
    System.out.println(fac);
    fac = 1;
  }
  input.close();
  }
}