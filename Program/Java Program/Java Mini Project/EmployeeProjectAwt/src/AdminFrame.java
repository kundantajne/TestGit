import Controller.MyWindowListner;

import java.awt.*;

public class AdminFrame extends Frame {
    Label lname, lid, lsalary, lAllowance;
    TextField tname, tid, tsalary, tAllowance;
    Button btAdd;

    AdminFrame() {
        setVisible(true);
        setTitle("Admin Window");
        this.setBounds(400, 200, 260, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        lid = new Label("ID :");
        lAllowance = new Label("Allowance ");
        lname = new Label("Name");
        lsalary = new Label("Salary ");


        tname = new TextField(20);
        tid = new TextField(20);
        tAllowance = new TextField(20);
        tsalary = new TextField(20);


        btAdd = new Button("Add");

        add(lid);
        add(tid);
        add(lname);
        add(tname);
        add(lsalary);
        add(tsalary);
        add(lAllowance);
        add(tAllowance);
        add(btAdd);


        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);
    }
}
