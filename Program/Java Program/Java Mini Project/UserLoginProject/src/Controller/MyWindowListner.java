package Controller;

import java.awt.*;
import java.awt.event.*;
public class MyWindowListner implements WindowListener     {
    Frame AnyFrame;
    @Override
    public void windowOpened(WindowEvent e) {

    }

    @Override
    public void windowClosing(WindowEvent e) {

        AnyFrame.dispose();
    }

    @Override
    public void windowClosed(WindowEvent e) {

    }

    @Override
    public void windowIconified(WindowEvent e) {

    }

    @Override
    public void windowDeiconified(WindowEvent e) {

    }

    @Override
    public void windowActivated(WindowEvent e) {

    }

    @Override
    public void windowDeactivated(WindowEvent e) {

    }

    public MyWindowListner(Frame af) {

        this.AnyFrame=af;
    }



}
