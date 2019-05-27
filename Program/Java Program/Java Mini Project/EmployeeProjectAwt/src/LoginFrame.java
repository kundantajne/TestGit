//import Controller.MyWindowListner;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
//import java.awt.event.ActionListener;

public class LoginFrame extends Frame implements ActionListener {
    Label luname, lpassword;
    TextField tname, tpassword;
    Button btregister, btsubmit, btclear;


    @Override
    public void actionPerformed(ActionEvent ae) {
        if (ae.getSource() == this.btsubmit) {
            System.out.println("submit called");

            String UIusername = this.tname.getText();
            String UIpassword = this.tpassword.getText();

            if (UIusername.equals("Kundan") && UIpassword.equals("Mzos")) {
                JOptionPane.showMessageDialog(this, "Success");
                //System.out.println("Success");
                HomeFrame home = new HomeFrame();
                home.add(btsubmit);
                this.dispose();
            } else {
                JOptionPane.showMessageDialog(this, "Invalid");

            }
        }
        if (ae.getSource() == this.btregister) {
            RegisterFrame register = new RegisterFrame();
            register.add(btregister);
            this.dispose();
        }
        if (ae.getSource()==this.btclear){
            tname.setText(" ");
            tpassword.setText(" ");        }
    }

    LoginFrame() {

        setVisible(true);
        setTitle("Login Window");
        this.setBounds(400, 200, 350, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        luname = new Label("Enter the Name");
        lpassword = new Label("Enter the Password");
        tname = new TextField(20);
        tpassword = new TextField(20);
        btregister = new Button("Register");
        btsubmit = new Button("Submit");
        btclear = new Button("Clear");

        this.add(luname);

        this.add(tname);
        this.add(lpassword);
        this.add(tpassword);
        this.add(btsubmit);
        this.add(btclear);
        this.add(btregister);

        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);

        btsubmit.addActionListener(this);
        btclear.addActionListener(this);
        btregister.addActionListener(this);


    }
}


