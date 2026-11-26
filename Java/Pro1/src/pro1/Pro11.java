package pro1; 

import java.util.Scanner;

public class Pro11 {

    int amount=0;
    int i;
    Scanner s = new Scanner(System.in);

    public Pro11(int amount) {
        this.amount=amount;
    }

    public Pro11() {
    }
    
    
    void getData() {
 
        System.out.println("enter amount:");
        amount = s.nextInt();
    }
    
    void debit(int a) {
        amount=amount-a;
    }

    void credit(int b) {
        amount=amount+b;
    }
    
    void display() {
      
        System.out.println("amount:" + amount);
 
    }
    
    public static void main(String[] args) {
        int i=0,x,cr=0,db=0;
        Scanner s = new Scanner(System.in);
        Pro11 c=new Pro11();
            
        while(i==0){
            System.out.println("1:Display amount");
            System.out.println("2:Credit amount");
            System.out.println("3:Debit amount ");
            System.out.println("0:EXIT");
            System.out.println("Enter your choise:");
            x = s.nextInt();
            
            if(x==1){
                c.display();
            }
            
            else if(x==2){
                System.out.println("Enter Credit amount:");
                cr=s.nextInt();
                c.credit(cr);
                System.out.println("Credited securly");
            }
            
            else if(x==3){
                System.out.println("Enter Debit amount:");
                db=s.nextInt();
                c.debit(db);
                System.out.println("debited securly");
            }
            else if(x==0){
                i++;
            }
        }
        
    }

}
