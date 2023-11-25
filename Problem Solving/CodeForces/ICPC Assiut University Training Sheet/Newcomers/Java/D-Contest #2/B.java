  import java.util.Scanner;
public class B {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();

  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (i == j && i != n/2 && j != n/2){
        System.out.print("\\");
      } else if (i == n/2 && j == n/2){
        System.out.print("X");
      } else if (j != n/2 && i == ((n-1)-j)){
        System.out.print("/");
      } else {
        System.out.print("*");
      }
    }
    System.out.println();
  }
  input.close();
}
}
