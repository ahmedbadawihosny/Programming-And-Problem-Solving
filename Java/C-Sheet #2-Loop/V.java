import java.util.Scanner;

public class V {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int num = input.nextInt();

  int counter = 1;
  for (int i = 1;i <= num;i++){
      if (counter % 4 == 0){
        counter++;
        System.out.println("PUM");
        i--;
        continue;
      }
      System.out.print(counter + " ");
      counter++;
      System.out.print(counter + " ");
      counter++;
      System.out.print(counter + " ");
      counter++;
    }
      System.out.println("PUM");
  input.close();
  }
}