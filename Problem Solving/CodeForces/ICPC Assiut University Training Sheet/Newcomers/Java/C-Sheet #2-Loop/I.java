import java.util.Scanner;

public class I {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int x,y;
  int z = 0;
  x = input.nextInt();
  y = x;
  while (x>0){
    z = z * 10 + x % 10;
    x = x / 10;
  }
  if (y == z){
    System.out.print(z + "\n" + "YES");
  } else {
    System.out.print(z + "\n" + "NO" );
  } 
  input.close();
  }
}