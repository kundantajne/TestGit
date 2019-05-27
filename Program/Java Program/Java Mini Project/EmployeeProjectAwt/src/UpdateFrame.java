import java.awt.*;

public class UpdateFrame extends Frame {
    Label lId;
    TextField tId;
    Button btSearch;

    UpdateFrame(){
        setVisible(true);
        setTitle("Update Window");
        this.setBounds(400, 200, 250, 400);
        this.setLayout(new FlowLayout());
        setResizable(false);

        lId=new Label("Id");
        tId=new TextField(20);
        btSearch=new Button("Update");

        add(lId);
        add(tId);
        add(btSearch);
    }
}
