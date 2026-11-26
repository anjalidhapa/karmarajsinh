package mousemotionadapterdemo;

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class MouseMotionAdapterDemo extends MouseMotionAdapter {

    Frame f = new Frame("MY first program");

    public MouseMotionAdapterDemo() {
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
        f.addMouseMotionListener(this);

    }

    @Override
    public void mouseDragged(MouseEvent me) {
        Graphics g = f.getGraphics();
        g.fillOval(me.getX(), me.getY(), 20, 20);

    }

    public static void main(String[] args) {

        MouseMotionAdapterDemo m=new MouseMotionAdapterDemo();

    }

}
