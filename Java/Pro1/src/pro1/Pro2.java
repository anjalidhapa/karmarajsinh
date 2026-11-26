package pro1;

import java.util.Scanner;

public class Pro2 {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        int no1;
        int no2;
        int result;
        
        System.out.println("Enter no 1:");
        no1=s.nextInt();
        
        System.out.println("Enter name 2:");
        no2=s.nextInt();

        result=no1+no2;
        
        System.out.println("Result:"+result);
        
    }

}
