public class Pro13 {
    String name;
    int age;

    Pro13(String n, int a) {
        name = n;
        age = a;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        Pro13 p1 = new Pro13("Raj", 20);
        Pro13 p2 = new Pro13("Amit", 22);
        p1.display();
        p2.display();
    }
}