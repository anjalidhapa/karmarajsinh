package pro1; 

import java.util.Scanner;

public class Pro8 {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        
        int i=0;
        
        int b[] = new int[7];
        
        System.out.println("ENTER 5 values to find it's SUM : ");
        
        while(i<5)
        {
            System.out.println("ENTER value of "+i);
            b[i]=s.nextInt();
            
            i++;
        }
        
        i=0;
        int ans=0;
        
        while(i<5)
        {
            ans=ans+b[i];
            
            i++;
        }
        System.out.println("Sum of all 5 values ="+ans);
    }
}