import Controller.MyWindowListner;

import java.awt.*;

public class SalesManagerFrame extends Frame {

    Label lname,lid,lsalary,lincentive,ltarget;
    TextField tname,tid,tsalary,tincentive,ttarget;
    Button btAdd;

    SalesManagerFrame(){
        setVisible(true);
        setTitle("SalesManager Window");
        this.setBounds(400, 200, 250, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        lid=new Label("ID :");
        lincentive=new Label("Incentive ");
        lname=new Label("Name");
        lsalary=new Label("Salary ");
        ltarget=new Label("Target");

        tname=new TextField(20);
        tid=new TextField(20);
        tincentive=new TextField(20);
        tsalary=new TextField(20);
        ttarget=new TextField(20);

        btAdd=new Button("Add");

        add(lid);
        add(tid);
        add(lname);
        add(tname);
        add(lsalary);
        add(tsalary);
        add(lincentive);
        add(tincentive);
        add(ltarget);
        add(ttarget);

        add(btAdd);



        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);

    }
}
