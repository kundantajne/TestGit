package Controller;

import DB.DAO;
import Model.User;
import View.LoginFrame;
import View.RegisterFrame;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RegisterController implements ActionListener {
    RegisterFrame re;

    public RegisterController(RegisterFrame re) {
        this.re = re;
    }

    @Override
    public void actionPerformed(ActionEvent ae) {
        if (ae.getSource() == re.getBtregister()) {
            String rcname = re.getTname().getText();
            String rcpass = re.getTpassword().getText();
            String rccity = re.getTcity().getText();
            User u1 = new User(rcname, rcpass, rccity);
            DAO d1 = new DAO();

            if (rcname.equals("") || rcpass.equals("") || rccity.equals("")) {
                JOptionPane.showMessageDialog(null, "Fields Are Empty");
            }

            else if (rcname != null && rcpass != null && rccity != null) {
                System.out.println("Validation");

                d1.insert(u1);
                JOptionPane.showMessageDialog(null,"Submitted");
                d1.display();
                LoginFrame login = new LoginFrame();
                //login.add(btregister);
                re.dispose();
            }

            //System.out.println(rcname+rcpass+rccity);
            //System.out.println(u1);


        } else if (ae.getSource() == re.getBtclear()) {
            re.getTname().setText(" ");
            re.getTpassword().setText(" ");
            re.getTcity().setText(" ");

        }
    }
}
