package pro1; 

import java.util.Scanner;

public class Pro9 {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        
        int i=0,j=0;
        
        int a[][] = new int[2][2];
        int b[][] = new int[2][2];
        int c[][] = new int[2][2];
        
        System.out.println("ENTER values of matrix a[2][2] : ");
        
        while(i<2)
        {
            j=0;
            while(j<2)
            {
                System.out.println("ENTER value of "+i+j);
                a[i][j]=s.nextInt();
                j++;
            }
            i++;
        }
        
        i=0;
     
        
        System.out.println("ENTER values of matrix b[2][2] : ");
        
        while(i<2)
        {
            j=0;
            while(j<2)
            {
                System.out.println("ENTER value of "+i+j);
                b[i][j]=s.nextInt();
                j++;
            }
            i++;
        }
        
        i=0;
        j=0;
        
        while(i<2)
        {
            j=0;
            while(j<2)
            {
                c[i][j]=a[i][j]+b[i][j];
                j++;
            }
            i++;
        }

        i=0;
        j=0;
        
        while(i<2)
        {
            j=0;
            while(j<2)
            {
                System.out.println("sum of matrix a and b ="+c[i][j]);
                j++;
            }
            i++;
        }
    }
}