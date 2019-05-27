package Controller;
//import java.awt.*;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import DB.DAO;
import View.*;

public class LoginController implements ActionListener {

    LoginFrame login;

    public LoginController(LoginFrame login) {
        this.login = login;
    }

    @Override
    public void actionPerformed(ActionEvent ae) {

        if (ae.getSource() == login.getBtsubmit()) {
            System.out.println("submit called");

            String UIusername = login.getTname().getText();
            String UIpassword = login.getTpassword().getText();
            DAO d1=new DAO();
           int temp= d1.validate(UIusername,UIpassword);
            if (temp==1){
                JOptionPane.showMessageDialog(login, "Successful");
                HomeFrame home=new HomeFrame();
                login.dispose();
            }
           else {
                JOptionPane.showMessageDialog(login, "Invalid");

            }
        }
        else if (ae.getSource() == login.getBtregister()) {
            RegisterFrame register = new RegisterFrame();
            //register.
            login.dispose();
        }
        else if (ae.getSource() ==login.getBtclear()) {
            login.getTname().setText(" ");
            login.getTpassword().setText(" ");
        }
    }
}
