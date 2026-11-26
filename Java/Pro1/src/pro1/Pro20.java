package pro1;

import java.util.Scanner;

class Employee {
    int eno, salary;
    String name;
}

class Lab extends Employee {

    void getdata(int eno, int salary, String name) {
        this.eno = eno;
        this.name = name;
        this.salary = salary;
    }

    void putdata() {
        System.out.println("Employee number: " + eno);
        System.out.println("Employee name: " + name);
        System.out.println("Employee salary: " + salary);
    }
}

class Manager extends Lab {

    String prname;

    void getm(String a) {
        prname = a;
    }

    void putm() {
        System.out.println("Manager name: " + prname);
    }
}

public class Pro20 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter employee number: ");
        int eno = s.nextInt();

        System.out.print("Enter salary: ");
        int salary = s.nextInt();
        s.nextLine(); // consume leftover newline

        System.out.print("Enter employee name: ");
        String name = s.nextLine();

        System.out.print("Enter manager name: ");
        String mname = s.nextLine();

        Manager m = new Manager();
        m.getdata(eno, salary, name);
        m.getm(mname);

        System.out.println("\n--- Details ---");
        m.putdata();
        m.putm();

        s.close();
    }
}