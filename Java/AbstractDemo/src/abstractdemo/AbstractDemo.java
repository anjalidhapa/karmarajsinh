package abstractdemo;

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
class rect extends shape
{

    @Override
    void area() {
        
    }
}

public class AbstractDemo {

    public static void main(String[] args) {

        circle c=new circle();
        c.area();
        
        
    }

}
