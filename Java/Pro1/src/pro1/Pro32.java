package pro1;

import java.util.logging.Level;
import java.util.logging.Logger;

public class Pro32 extends Thread 
{
    @Override
    public void run() {

        for (int i = 0; i < 10; i++) {
            System.out.println(i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                Logger.getLogger(Pro32.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }

    public static void main(String[] args) {

        Pro32 t = new Pro32();
        Thread main = new Thread(t);
        main.setName("abc");
        System.out.println("Name:"+main.getName());


    }

}
