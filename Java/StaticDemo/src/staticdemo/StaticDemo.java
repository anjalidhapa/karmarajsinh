package staticdemo;

public class StaticDemo {

    static String name="abc";
    static void show()
    {
        System.out.println("hiii");
    }
    static
    {
        System.out.println("static method called...");
    }
    public static void main(String[] args) {
        System.out.println(name);
        show();
    }
    
}
