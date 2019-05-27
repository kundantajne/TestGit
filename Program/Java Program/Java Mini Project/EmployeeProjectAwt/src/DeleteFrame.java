import Controller.MyWindowListner;

import java.awt.*;

public class DeleteFrame extends Frame {
    Label lId;
    TextField tId;
    Button btDelete;

    DeleteFrame()
    {
        setVisible(true);
        setTitle("Delete Window");
        this.setBounds(400, 200, 250, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        lId=new Label("Id");
        tId=new TextField(20);
        btDelete=new Button("Delete");

        add(lId);
        add(tId);
        add(btDelete);

        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);
    }
}
