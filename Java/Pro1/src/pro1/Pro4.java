package pro1;

import java.util.Scanner;

public class Pro4 {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        int no;
        
        System.out.println("Enter no:");
        no=s.nextInt();
        
        if (no<0)
            System.out.println("NUMBER IS -ve");
        else if(no==0)
            System.out.println("NUMBER IS ZERO");
        else
            System.out.println("NUMBER IS +ve");
        
    }

}