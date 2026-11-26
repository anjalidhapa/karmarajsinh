package pro1;

import java.util.Scanner;

public class Pro5 {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        int no1,no2,ans;
        String sign;
        
        System.out.println("Enter no 'a' :");
        no1=s.nextInt();
        System.out.println("Enter a sign (+ , - , / , *) :");
        sign=s.next();
        System.out.println("Enter no 'b' :");
        no2=s.nextInt();
        
        if (sign.compareTo("+")==0)
        {
            ans=no1+no2;
            System.out.println("a+b="+ans);
        }
        else if(sign.compareTo("-")==0)
        {
            ans=no1-no2;
            System.out.println("a-b="+ans);
        }
        else if (sign.compareTo("/")==0)
        {
            ans=no1/no2;
            System.out.println("a/b="+ans);
        }
        else if (sign.compareTo("*")==0)
        {
            ans=no1*no2;
            System.out.println("a*b="+ans);
        }
        else
        {
            System.out.println("ENTER A VALID SIGN");
        }
    }

}





