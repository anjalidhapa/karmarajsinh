package pro1;

import java.awt.*;
import java.awt.event.*;

public class Pro41 extends KeyAdapter {

    Frame f = new Frame("Enter your message");
    Label l = new Label();

    public Pro41() {

        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
        TextField t = new TextField();
        t.setBounds(100, 100, 200, 40);
        f.add(t);
        l.setBounds(100, 200, 200, 40);
        f.add(l);
        t.addKeyListener(this);
    }

    @Override
    public void keyPressed(KeyEvent ke) {
        
        l.setText("Typing.....");
        
    }

    @Override
    public void keyReleased(KeyEvent ke) {
        l.setText("");
    }

    public static void main(String[] args) {
        Pro41 k=new Pro41();
    }

}
