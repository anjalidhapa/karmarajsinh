package windowadapterdemo;

import java.awt.*;
import java.awt.event.*;
public class WindowAdapterDemo extends WindowAdapter{

    Frame f = new Frame("Enter your message");

    public WindowAdapterDemo() {

        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
        f.addWindowListener(this);        
    }

    @Override
    public void windowClosing(WindowEvent we) {
    
        f.dispose();
    
    }
    

    public static void main(String[] args) {

        WindowAdapterDemo w=new WindowAdapterDemo();
        
        
    }

}
