import java.util.Scanner;
  
  public class W {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int x,y,z,res=0;
  char opr,opr2;
  x = input.nextInt();
  opr = input.next().charAt(0);
  y = input.nextInt();
  opr2 = input.next().charAt(0);
  z = input.nextInt();

    if (opr=='+') {
        res = x + y;
    } else if (opr=='-') {
        res = x - y;
    } else if (opr=='*') {
        res = x * y;
    }

    if (res == z && opr2=='=') {
        System.out.println("Yes");
    } else {
        System.out.println(res);
    }
    input.close();
  }
}
