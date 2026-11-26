package pro1;

import java.util.Scanner;

public class Demo {

    public static void main(String[] args) {

        System.out.println("Welcome to java");
        Scanner s = new Scanner(System.in);

        int no;
        String name;
        System.out.println("Enter no:");
        no=s.nextInt();
        System.out.println("Enter name:");
        name=s.next();
        
        System.out.println("No:"+no);
        System.out.println("Name:"+name);
        
    }

}
