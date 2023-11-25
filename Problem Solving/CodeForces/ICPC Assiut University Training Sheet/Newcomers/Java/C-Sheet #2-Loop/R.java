import java.util.Scanner;
// this code is erreo
public class R {
  public static void main(String[] args) {
  Scanner input = new Scanner(System.in);

  while (input.hasNext()) {
    int n = input.nextInt();
    int m = input.nextInt();

  if (n <= 0 || m <= 0) {
      break;
  }

  int sum = 0;
  StringBuilder result = new StringBuilder();


  for (int i = n; i <= m; i++) {
      result.append(i).append(" ");
      sum += i;
  }


      System.out.println(result.toString() + "sum = " + sum);
  }

  input.close();
    }
}
