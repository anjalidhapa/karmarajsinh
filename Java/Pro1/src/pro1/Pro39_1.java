package Pro1;

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class Pro39_1 extends MouseMotionAdapter {

    Frame f = new Frame("MY first program");

    public Pro39_1() {
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
        f.addMouseMotionListener(this);

    }

    @Override
    public void mouseDragged(MouseEvent me) {
        Graphics g = f.getGraphics();
        g.fillArc(-90,90,me.getX(), me.getY(), 20, 20);
    }

    public static void main(String[] args) {

        Pro39_1 m=new Pro39_1();

    }

}
