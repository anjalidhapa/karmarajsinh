package awtdemo;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class AwtDemo {

    public AwtDemo() {
    
        Frame f=new Frame("MY first program");
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
        
        
        Label l1=new Label("Username:");
        l1.setBounds(30, 160, 100, 40);
        f.add(l1);
        
        TextField t=new TextField();
        t.setBounds(140, 160, 200, 40);
        f.add(t);
        
        Button b=new Button("Submit");
        b.setBounds(360, 160, 100, 40);
        f.add(b);
        
        
        b.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
           
                String data=t.getText();
//                System.out.println(data);
                l1.setText(data);
            }
        });
        
        
    }
    
    

    public static void main(String[] args) {

        AwtDemo a1=new AwtDemo();


    }
    
}
