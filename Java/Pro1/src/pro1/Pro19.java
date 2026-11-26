package pro1;

class Student {
    int no;
    String name;

    void getnumber(int n, String s) {
        no = n;
        name = s;
    }

    void putnumber() {
        System.out.println("Roll No: " + no);
        System.out.println("Name: " + name);
    }
}

class Test extends Student {
    float sub1;
    float sub2;

    void getmarks(float m1, float m2) {
        sub1 = m1;
        sub2 = m2;
    }

    void putmarks() {
        System.out.println("Subject 1: " + sub1);
        System.out.println("Subject 2: " + sub2);
    }
}

class Result extends Test {
    float total;

    void display() {
        total = sub1 + sub2;
        putnumber();
        putmarks();
        System.out.println("Total: " + total);
    }
}

public class Pro19 {
    public static void main(String[] args) {
        Result r = new Result();
        r.getnumber(1, "Raj");
        r.getmarks(75.5f, 82.5f);
        r.display();
    }
}