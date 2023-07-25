import java.util.Scanner;

  public class S {
  public static void main(String[] args){
  Scanner input = new Scanner(System.in);
  double num = input.nextDouble();

    if(num >=0 && num <= 25){
    System.out.println("Interval [0,25]");
  } else if(num > 25 && num <= 50){
    System.out.println("Interval (25,50]");
  } else if(num > 50 && num <=75){
    System.out.println("Interval (50,75]");
  } else if(num > 75 && num <= 100 ){
    System.out.println("Interval (75,100]");
  } else {
    System.out.println("Out of Intervals");
  }
  input.close();
  }
}