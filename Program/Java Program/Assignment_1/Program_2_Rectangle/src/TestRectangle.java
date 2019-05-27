import java.util.*;

public class TestRectangle {
    public static void main(String[] args) {
        rectangle rect[] = new rectangle[5];

        for (int i = 0; i < rect.length; i++) {
            rect[i] = new rectangle();
            Scanner in = new Scanner(System.in);
            System.out.println("Enter the height And breath of Rectangle : ");
            System.out.println("Heigth :");
            float h = in.nextFloat();
            System.out.println("Breath :");
            float b = in.nextFloat();
            rect[i].setHeight(h);
            rect[i].setBreath(b);

            //System.out.println("For The"+i+"User");
            rect[i].display();

        }
    }
}
