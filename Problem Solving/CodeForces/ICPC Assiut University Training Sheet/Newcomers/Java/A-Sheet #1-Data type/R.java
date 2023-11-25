import java.util.Scanner;
  
  public class R {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  int inputdays = input.nextInt();

  int year = inputdays / 365;
  inputdays -= 365 * year;
  int months = inputdays / 30;
  inputdays -= 30 * months;
  System.out.println(year + " years");
  System.out.println(months + " months");
  System.out.println(inputdays + " days");
  input.close();
  }
}