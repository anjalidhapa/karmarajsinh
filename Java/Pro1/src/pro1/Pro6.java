package pro1;

import java.util.Scanner;

public class Pro6 {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        int no,ans=1;

        System.out.println("Enter a number :");                                                                         
        no=s.nextInt();
        
        while(no!=1)
        {
            ans=ans*no;
            no--;
        }
        
        System.out.println("factorial="+ans);
    }
}