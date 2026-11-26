package pro1;

import java.io.*;
import java.util.Scanner;

public class Pro35 {

    public static void main(String[] args) {

        try {
            FileWriter a = new FileWriter("D:/even.txt");
            for (int i = 1; i <= 100; i++) {
                if (i % 2 != 1) {
                    a.write(i+"\t");
                }
            }

            FileWriter b = new FileWriter("D:/odd.txt");
            for (int i = 1; i <= 100; i++) {
                if (i % 2 == 1) {
                    b.write(i+"\t");
                }
            }
            
            a.close();
            b.close();

            FileReader r1 = new FileReader("D:/odd.txt");
            FileReader r2 = new FileReader("D:/even.txt");
            Scanner s1 = new Scanner(r1);
            Scanner s2 = new Scanner(r2);

            System.out.println("ODD NUmbers");
            while(s1.hasNext())
            {
                System.out.print("\t"+s1.next());
            }
            
            System.out.println("Even NUmbers");
            while(s2.hasNext())
            {
                System.out.print("\t"+s2.next());
            }
            
            

        } 
        catch(Exception e)
        {
            System.out.println(e);
        }

    }
}
