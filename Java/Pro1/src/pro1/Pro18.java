package pro1;

class emp {
    double salary;

    emp(double s) {
        salary = s;
    }
}

class Programmer extends emp {
    double bonus;

    Programmer(double s, double b) {
        super(s);
        bonus = b;
    }

    void display() {
        System.out.println("Salary: " + salary);
        System.out.println("Bonus: " + bonus);
    }
}

public class Pro18 {
    public static void main(String[] args) {
        Programmer p = new Programmer(50000, 5000);
        p.display();
    }
}