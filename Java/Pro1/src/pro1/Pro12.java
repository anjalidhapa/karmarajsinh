public class Pro12 {
    String name;
    int age;

    Pro12() {
        name = "Unknown";
        age = 0;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        Pro12 s1 = new Pro12();
        s1.display();
    }
}