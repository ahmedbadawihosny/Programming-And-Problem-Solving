import java.util.Scanner;

public class Y {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int size = input.nextInt();

  int start = 0,second = 1;
  if (size == 1){
    System.out.println(start);
} else if (size == 2) {
  System.out.print(start + " " + second);
} else {
  System.out.print(start + " " + second + " ");
    for (int i = 2;i < size;i++){
        int res = start + second;
        System.out.print(res + " ");
        start = second;
        second = res;
    }
}
  input.close();
  }
}