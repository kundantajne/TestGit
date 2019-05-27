import Controller.MyWindowListner;

import java.awt.*;

public class HrFrame extends Frame {
    Label lname, lid, lsalary, lCommision;
    TextField tname, tid, tsalary, tCommision;
    Button btAdd;


    HrFrame() {
        setVisible(true);
        setTitle("Hr Window");
        this.setBounds(400, 200, 260, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        lid = new Label("ID :");
        lCommision = new Label("Commision");
        lname = new Label("Name");
        lsalary = new Label("Salary ");


        tname = new TextField(20);
        tid = new TextField(20);
        tCommision = new TextField(20);
        tsalary = new TextField(20);


        btAdd = new Button("Add");

        add(lid);
        add(tid);
        add(lname);
        add(tname);
        add(lsalary);
        add(tsalary);
        add(lCommision);
        add(tCommision);
        add(btAdd);

        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);

    }

}
