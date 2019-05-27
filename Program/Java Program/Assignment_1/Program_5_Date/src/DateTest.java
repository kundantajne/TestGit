import java.util.Scanner;

public class DateTest {

    public static void main(String[] args) {
        Date d1=new Date();
        Scanner in = new Scanner(System.in);
        int d = in.nextInt();
        int m = in.nextInt();
        int y = in.nextInt();

        d1.setDay(d);
        d1.setMonth(m);
        d1.setYear(y);
        d1.display();



    }
}
