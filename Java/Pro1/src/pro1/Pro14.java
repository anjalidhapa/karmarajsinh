public class Pro14 {
    String name;
    int age;

    Pro14(String n, int a) {
        name = n;
        age = a;
    }

    Pro14(Pro14 p) {
        name = p.name;
        age = p.age;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        Pro14 p1 = new Pro14("Raj", 20);
        Pro14 p2 = new Pro14(p1);
        System.out.println("Original object:");
        p1.display();
        System.out.println("Copied object:");
        p2.display();
    }
}