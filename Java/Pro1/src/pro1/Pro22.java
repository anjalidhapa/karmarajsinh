package pro1;

import java.util.Scanner;

class x {
    double ar=0;
    
    void area(int r)
    {
      ar=(3.14*r*r);
    }
    
    void area(int h, int b) 
    {
        ar=h*b;
    }

    void area(float l) 
    {
        ar=l*l;
    }

}


public class Pro22 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        x m = new x();
        m.area(0);
        m.area(0);
        m.area(0, 0);
    }
}