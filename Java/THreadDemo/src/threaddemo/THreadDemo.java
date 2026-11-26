package threaddemo;

public class THreadDemo extends Thread {

    @Override
    public void run() {

        for (int i = 0; i < 10; i++) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {

        try {
            THreadDemo t = new THreadDemo();
            THreadDemo t1 = new THreadDemo();
            System.out.println("thread-1:"+t.isAlive());
            
            t.start();
            t.join();
            t1.start();
        } catch (InterruptedException ex) {
            System.out.println(ex);
        }

    }

}
