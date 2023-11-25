import java.util.Scanner;

  public class K {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int x,y,z;
  x = input.nextInt();
  y = input.nextInt();
  z = input.nextInt();

  if (x >= y && x>=z ){
    if(y > z){
      System.out.println(z + " " + x);
    }else {
      System.out.println(y + " " + x);
    }

  }else if ( y >= x && y >= z ){
    if(x > z){
      System.out.println(z + " " + y);
    }else {
      System.out.println(x + " " + y);
  }
  }else if(z >= y && z >= x ){
  if(x>y){
      System.out.println(y + " " + z);
  }else {
      System.out.println(x + " " + z);
  }
  }
  input.close();
  }
}