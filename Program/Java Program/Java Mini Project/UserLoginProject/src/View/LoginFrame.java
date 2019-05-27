package View;

import java.awt.*;
import Controller.*;


public class LoginFrame extends Frame {
    Label luname, lpassword;
    TextField tname, tpassword;
    Button btregister, btsubmit, btclear;


    public Label getLuname() {
        return luname;
    }

    public Label getLpassword() {
        return lpassword;
    }

    public TextField getTname() {
        return tname;
    }

    public TextField getTpassword() {
        return tpassword;
    }

    public Button getBtregister() {
        return btregister;
    }

    public Button getBtsubmit() {
        return btsubmit;
    }

    public Button getBtclear() {
        return btclear;
    }

    public LoginFrame() {

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
        tpassword.setEchoChar('*');
        this.add(btsubmit);
        this.add(btclear);
        this.add(btregister);

        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);

        LoginController lc=new LoginController(this);
        btsubmit.addActionListener(lc);
        btclear.addActionListener(lc);
        btregister.addActionListener(lc);


    }
}


