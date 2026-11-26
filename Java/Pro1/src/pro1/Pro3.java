package pro1;

import java.util.Scanner;

public class Pro3 {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        int rno;
        String name;
        int per;
        
        System.out.println("Enter rno:");
        rno=s.nextInt();
        
        System.out.println("Enter name:");
        name=s.next();
        
        System.out.println("Enter per:");
        per=s.nextInt();
        
        System.out.println("Details:"+rno+name+per);
        
    }

}

