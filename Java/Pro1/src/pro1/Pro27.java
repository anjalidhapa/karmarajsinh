package pro1;

import java.util.Scanner;

abstract class operation {

    float no1,no2,ans;
 
    Scanner s = new Scanner(System.in);

    abstract void cal();
    void getd(){
        System.out.println("Enter value of 'a':");
        no1=s.nextInt();
        System.out.println("Enter value of 'b':");
        no2=s.nextInt();
    }
}

class addi extends operation {

    @Override
    void cal() {
        ans=no1+no2;
        System.out.println("Addition:"+ans);
    }

}
class divi extends operation {

    @Override
    void cal() {
        if(no2!=0)
        {
            ans=no1/no2;
            System.out.println("Addition:"+ans);
        }
        else
        {
            System.out.println("Division not possible");
        }
    }

}
class multi extends operation {

    @Override
    void cal() {
        ans=no1*no2;
        System.out.println("Multiplication:"+ans);
    }

}
class sub extends operation {

    @Override
    void cal() {
        ans=no1-no2;
        System.out.println("subtraction:"+ans);
    }

}



public class Pro27 {

    public static void main(String[] args) {
        
        addi a = new addi();
        sub s = new sub();
        divi d = new divi();
        multi m = new multi();

        a.getd();
        a.cal();
        s.getd();
        s.cal();
        d.getd();
        d.cal();
        m.getd();
        m.cal();
    }

}
