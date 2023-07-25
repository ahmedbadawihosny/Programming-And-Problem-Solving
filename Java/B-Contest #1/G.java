import java.util.Scanner;
public class G {
public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  long x,y,z,res=0;
  x = input.nextLong();
  y = input.nextLong();
  z = input.nextLong();

  if (x == 0 || z == 0){
    System.out.println(0);
  } else {
    if ((y >= x && y >= z) || (y >= z && y < x) || (y < z && y >= x)){
        res = Math.min(x,z);
        System.out.println(res);
    } else if (y < z && y < x){
      res = y;
      x -= y;
      z -= y;
      res += Math.min (x/2,z);
      System.out.println(res);
    }
  }
  input.close();
}
}
