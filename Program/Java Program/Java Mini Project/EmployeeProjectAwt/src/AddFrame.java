import Controller.MyWindowListner;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AddFrame extends Frame implements ActionListener {

    Button btSalesManager,btAdmin,btHr;

    @Override
    public void actionPerformed(ActionEvent ae) {
        if (ae.getSource()==btSalesManager){
            SalesManagerFrame sm=new SalesManagerFrame();
           // sm.add(btSalesManager);
            this.dispose();
        }
        if (ae.getSource()==btHr){
            HrFrame hr=new HrFrame();
           // hr.add(btHr);
            this.dispose();

        }
        if (ae.getSource()==btAdmin){
            AdminFrame admin=new AdminFrame();
           // admin.add(btAdmin);
            this.dispose();
        }
    }

    AddFrame()
    {
        setVisible(true);
        setTitle("Add Window");
        this.setBounds(400, 200, 350, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        btSalesManager=new Button("SalesManager");
        btAdmin=new Button("Admin");
        btHr=new Button("Hr");

        add(btSalesManager);
        add(btAdmin);
        add(btHr);



        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);

        btAdmin.addActionListener(this);
        btHr.addActionListener(this);
        btSalesManager.addActionListener(this);
    }

}
