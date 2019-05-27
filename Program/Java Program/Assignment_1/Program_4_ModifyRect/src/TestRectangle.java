import java.util.*;

public class TestRectangle {
    public static void main(String[] args) {
        rectangle rect[] = new rectangle[5];

        for (int i = 0; i < rect.length; i++) {
            rect[i] = new rectangle();
            Scanner in = new Scanner(System.in);
            System.out.println("Enter the height And breath of Rectangle : ");
            System.out.println("Length:");
            float h = in.nextFloat();
            System.out.println("Width :");
            float b = in.nextFloat();
            rect[i].setLength(h);
            rect[i].setWidth(b);

            //System.out.println("For The"+i+"User");
            rect[i].display();

        }
    }
}

