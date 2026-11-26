package threaddemo2;

public class ThreadDemo2 implements Runnable {

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                System.out.println(i);
//            Thread.sleep(1000);
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args) {

        ThreadDemo2 t = new ThreadDemo2();
        Thread main = new Thread(t);

        ThreadDemo2 t1 = new ThreadDemo2();
        Thread main1 = new Thread(t);
        main.start();
        main1.start();
        main.setName("Writing book");
        System.out.println("name:"+main.getName());
    }

}
