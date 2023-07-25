import java.util.Scanner;
public class C {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  char x = input.next().charAt(0);
  int letter = (int) x;
  
  if (x == 122){
    System.out.println('a');
  } else {
    ++x;
    System.out.println(x);
  }
  input.close();
  }
}
