package pro1;

    import java.awt.*;
    import java.awt.event.ActionEvent;
    import java.awt.event.ActionListener;
public class Pro37 {

    public Pro37() {
    
        Frame f=new Frame("program");
        f.setSize(400, 600);
        f.setLayout(null);
        f.setVisible(true);
        
        Label l1=new Label("Username");
        l1.setBounds(50, 100, 70, 20);
        f.add(l1);
        
        TextField t=new TextField();
        t.setBounds(120, 100, 150, 20);
        f.add(t);
       
        Label l2=new Label("password");
        l2.setBounds(50, 150, 70, 20);
        f.add(l2);
        
        TextField t1=new TextField();
        t1.setBounds(120, 150, 150, 20);
        f.add(t1);
        
        Button b=new Button("Submit");
        b.setBounds(320, 210, 100, 40);
        f.add(b);
        
        
        b.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
           
                String data=t.getText();
                
                String data1=t1.getText();

                if(data.equals("abcd")){
                    if(data1.equals("1234")){
                        System.out.println("Login successfull");
                    }
                    else{
                        System.out.println("Password incorrect");
                    }
                }
                else{
                    System.out.println("Username incorrect");
                }
            }
        });
        
        
    }
    
    

    public static void main(String[] args) {

        Pro37 a1=new Pro37();


    }
    
    
}
