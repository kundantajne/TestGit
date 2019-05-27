package View;

import Controller.MyWindowListner;
import Controller.RegisterController;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RegisterFrame extends Frame {
    Label luname, lpassword,lcity;
    TextField tname, tpassword,tcity;
    Button btregister,btclear;


    public Label getLuname() {
        return luname;
    }

    public Label getLpassword() {
        return lpassword;
    }

    public Label getLcity() {
        return lcity;
    }

    public TextField getTname() {
        return tname;
    }

    public TextField getTpassword() {
        return tpassword;
    }

    public TextField getTcity() {
        return tcity;
    }

    public Button getBtregister() {
        return btregister;
    }

    public Button getBtclear() {
        return btclear;
    }


    public  RegisterFrame(){
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

        RegisterController rc=new RegisterController(this);
        btclear.addActionListener(rc);
        btregister.addActionListener(rc);

    }
}

