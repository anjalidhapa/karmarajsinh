package pro1;

import java.util.Scanner;

class Vehicle {
    int x;

    void run(int a) {
        System.out.println("Running");
    }
}

class Bike extends Vehicle {
    @Override
    void run(int b) {
        System.out.println("biking");
    }
}

class Car extends Vehicle {
    @Override
    void run(int c) {
        System.out.println("cruising");
    }
}

public class Pro23 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        Car m = new Car();
        Bike n = new Bike();

        n.run(0);
        m.run(0);
        m.run(0);

        Vehicle v = new Bike();
        v.run(0);  
    }
}