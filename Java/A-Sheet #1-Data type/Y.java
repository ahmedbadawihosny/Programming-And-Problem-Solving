import java.util.Scanner;
  
  public class Y{
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int a,b,c,d,res=0;
  a = input.nextInt();
  b = input.nextInt();
  c = input.nextInt();
  d = input.nextInt();
  res = ((a%100) * (b%100) * (c%100) * (d%100));

    if(res % 100 <= 9){
    System.out.println("0" + res %100);
  } else {
    System.out.println(res % 100);
  } 
  input.close();
  }
}