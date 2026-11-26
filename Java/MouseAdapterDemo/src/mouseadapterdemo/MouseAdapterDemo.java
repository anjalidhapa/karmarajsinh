package mouseadapterdemo;

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class MouseAdapterDemo extends MouseAdapter {

    Frame f = new Frame("MY first program");

    public MouseAdapterDemo() {

        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
        f.addMouseListener(this);

    }

    @Override
    public void mouseClicked(MouseEvent me) {

        Graphics g = f.getGraphics();
        g.fillOval(me.getX(),me.getY(), 100, 100);
        
    }

    public static void main(String[] args) {

        MouseAdapterDemo m=new MouseAdapterDemo();
    }

}
