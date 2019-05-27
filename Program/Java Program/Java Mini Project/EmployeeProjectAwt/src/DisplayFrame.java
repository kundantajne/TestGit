import Controller.MyWindowListner;

import java.awt.*;

public class DisplayFrame extends Frame {

    Label lId;
    TextField tId;
    Button btDisplay;

    DisplayFrame(){
        setVisible(true);
        setTitle("Display Window");
        this.setBounds(400, 200, 250, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        lId=new Label("Id");
        tId=new TextField(20);
        btDisplay=new Button("Display");

        add(lId);
        add(tId);
        add(btDisplay);


        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);
    }
}
