import Controller.MyWindowListner;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class HomeFrame extends Frame implements ActionListener {
    Button btAdd, btDelete, btUpdate, btSearch, btDisplay;

    @Override
    public void actionPerformed(ActionEvent ae) {
        if (ae.getSource() == btAdd) {
            AddFrame add = new AddFrame();
            //add.add(btAdd);
            this.dispose();

        }
        if (ae.getSource() == btDelete) {
         DeleteFrame delete=new DeleteFrame();
         this.dispose();

        }
        if (ae.getSource() == btDisplay) {
            DisplayFrame display=new DisplayFrame();
            this.dispose();

        }
        if (ae.getSource() == btSearch) {
            SearchFrame search=new SearchFrame();
            this.dispose();

        }
        if (ae.getSource() == btUpdate) {
            UpdateFrame update=new UpdateFrame();
            this.dispose();

        }
    }

    HomeFrame() {
        setVisible(true);
        setTitle("Home Window");
        this.setBounds(400, 200, 350, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);


        btAdd = new Button("Add");
        btDelete = new Button("Delete");
        btUpdate = new Button("Update");
        btSearch = new Button("Search");
        btDisplay = new Button("Display");

        add(btAdd);
        add(btDelete);
        add(btUpdate);
        add(btSearch);
        add(btDisplay);


        MyWindowListner mw = new MyWindowListner(this);
        this.addWindowListener(mw);

        btAdd.addActionListener(this);
        btUpdate.addActionListener(this);
        btSearch.addActionListener(this);
        btDisplay.addActionListener(this);
        btDelete.addActionListener(this);
    }
}
