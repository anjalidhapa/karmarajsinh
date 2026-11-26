package pro1;

import java.util.Scanner;

abstract class shape {

    int r, l, w;
    double area;
    Scanner s = new Scanner(System.in);

    abstract void area();
}

class circle extends shape {

    @Override
    void area() {
        System.out.println("enter r:");
        r=s.nextInt();
        area = 3.14 * r * r;
        System.out.println("area of cirlce:"+area);
    }

}

class rectangle extends shape {

    @Override
    void area() {
        System.out.println("enter l:");
        l=s.nextInt();
        System.out.println("enter w:");
        w=s.nextInt();
        area = l*w;
        System.out.println("area of rectangle:"+area);
    }

}


public class Pro26 {

    public static void main(String[] args) {

        circle c=new circle();
        c.area();
        
        rectangle r=new rectangle();
        r.area();
        
        
    }

}
