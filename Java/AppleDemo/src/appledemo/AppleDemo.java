package appledemo;

import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;

public class AppleDemo extends Applet {

    @Override
    public void paint(Graphics g) {
        g.setColor(Color.yellow);
        g.fillOval(20, 20, 150, 150);
        g.setColor(Color.black);
        g.fillOval(60, 60, 20, 20);
        g.fillOval(110, 60, 20, 20);
        g.setColor(Color.black);
        g.fillArc(50, 80, 90, 60, -180, 180);

        g.setColor(Color.white);
        g.fillRect(80, 110, 15, 15);
        g.fillRect(100, 110, 15, 15);

    }

}
