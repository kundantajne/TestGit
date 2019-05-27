import Controller.MyWindowListner;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RegisterFrame extends Frame implements ActionListener {
    Label luname, lpassword,lcity;
    TextField tname, tpassword,tcity;
    Button btregister,btclear;

    @Override
    public void actionPerformed(ActionEvent ae) {
        if (ae.getSource()==btregister){
          LoginFrame login=new LoginFrame();
            //login.add(btregister);
            this.dispose();
        }
        if (ae.getSource()==btclear){
            tname.setText(" ");
            tpassword.setText(" ");
            tcity.setText(" ");

        }
    }


    RegisterFrame(){
        setVisible(true);
        setTitle("Register Window");
        this.setBounds(400, 200, 350, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        luname = new Label("Enter the Name");
        lpassword = new Label("Enter the Password");
        lcity=new Label("Enter the City Name");
        tname = new TextField(20);
        tpassword = new TextField(20);
        tcity=new TextField(20);
        btregister = new Button("Register");
        btclear = new Button("Clear");

        this.add(luname);
        this.add(tname);
        this.add(lpassword);
        this.add(tpassword);
        this.add(lcity);
        this.add(tcity);
        this.add(btregister);
        this.add(btclear);


        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);

        btclear.addActionListener(this);
        btregister.addActionListener(this);

    }
}

