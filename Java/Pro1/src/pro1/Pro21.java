package pro1;

import java.util.Scanner;

class a2 {
    int a, b, c, sum=0;
    void add(int a,int b)
    {
      
        sum =a+b;
    }




    void add(int a, int b, int c) 
    {
     
        sum=a+b+c;
    }

}


public class Pro21 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        a2 m = new a2();
        m.add(0, 0, 0);
        m.add(0, 0);
    }
}