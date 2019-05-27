package View;

import Controller.MyWindowListner;

import java.awt.*;

public class HomeFrame extends Frame {
    Label label;
   public HomeFrame() {
        setVisible(true);
        setTitle("Home Window");
        this.setBounds(400, 200, 350, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);
        label=new Label("WELCOME TO HOME FRAME :");
        add(label);

       MyWindowListner mw = new MyWindowListner(this);
       this.addWindowListener(mw);


    }
}
