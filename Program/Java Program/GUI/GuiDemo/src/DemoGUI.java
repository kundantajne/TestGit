import java.awt.*;

public class DemoGUI {
    public static void main(String[] args) {
        Frame f=new Frame();
        Button b=new Button();
        b.setBounds(20,20,20,30);


        f.setBounds(100,100,200,200);
        f.add(b);
        f.setVisible(true);

    }

}
