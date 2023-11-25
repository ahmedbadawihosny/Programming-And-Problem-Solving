import java.util.*;
public class O {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    String str = input.next();
    if (str.contains("+")){
        int num1 = Integer.parseInt(str.substring(0, str.indexOf("+")))  , num2 = Integer.parseInt(str.substring(str.indexOf("+")+1));
        System.out.println(num1+num2);
    } else if (str.contains("-")){
        int num1 = Integer.parseInt(str.substring(0, str.indexOf("-")))  , num2 = Integer.parseInt(str.substring(str.indexOf("-")+1));
        System.out.println(num1-num2);
    } else if (str.contains("*")){
        int num1 = Integer.parseInt(str.substring(0, str.indexOf("*")))  , num2 = Integer.parseInt(str.substring(str.indexOf("*")+1));
        System.out.println(num1*num2);
    }else {
        int num1 = Integer.parseInt(str.substring(0, str.indexOf("/")))  , num2 = Integer.parseInt(str.substring(str.indexOf("/")+1));
        System.out.println(num1/num2);
    }
    input.close();
  }
}