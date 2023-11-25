import java.util.Scanner;
public class I {
public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int a,x=0;
  a = input.nextInt();
  x = a % 10;
  a /= 10;
  if (x % a == 0 || a % x == 0){
    System.out.println("YES");
  } else {
    System.out.println("NO");
  }
  input.close();
}
}
