package superdemo;

public class SuperDemo {

    String color = "red";

    void get() {
        System.out.println("hhiiii");
    }

}

class abc extends SuperDemo {

    String color = "blue";

    void get() {
        System.out.println("hello");
    }

    void show() {
        super.get();
        System.out.println("color:" + super.color);
    }

    public static void main(String[] args) {

        abc a1 = new abc();
        a1.show();

    }

}
