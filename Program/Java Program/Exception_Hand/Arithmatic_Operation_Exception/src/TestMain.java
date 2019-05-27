import java.util.Scanner;

public class TestMain {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int choice = 5;
        try {
            do {
                System.out.println("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Exit");
                System.out.println("Enter ur choice:");
                choice = input.nextInt();
                int num1, num2;
                System.out.println("Enter 2 numbers:");
                num1 = input.nextInt();
                num2 = input.nextInt();
                Number  num = new Number(num1, num2);
                switch (choice) {
                    case 1:
                        num.add();
                        num.display();
                        break;
                    case 2:
                        num.sub();
                        num.display();
                        break;
                    case 3:
                        num.mul();
                        num.display();
                        break;
                    case 4:
                        num.div();
                        num.display();
                        break;
                }
            } while (choice != 5);
        } catch (ArithmeticException e) {
            System.out.println("Division by zero");
        }
    }
}

