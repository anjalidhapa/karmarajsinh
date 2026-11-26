package Pro1;

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class Pro39 extends MouseAdapter {

    Frame f = new Frame("MY first program");

    public Pro39() {

        f.setSize(600, 600);
        f.setLayout(null);
        f.setVisible(true);
        f.addMouseListener(this);

    }

    @Override
    public void mouseClicked(MouseEvent me) {

        Graphics g = f.getGraphics();
        g.fillRect(me.getX(),me.getY(), 80, 100);
        
    }

    public static void main(String[] args) {

        Pro39 m=new Pro39();
    }

}
