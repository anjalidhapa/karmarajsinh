package pro1; 

import java.util.Scanner;

public class Pro10 {

    String name[]= new String[2];
    int age[]= new int[2];
    int i;
    Scanner s = new Scanner(System.in);

    public Pro10(String name,int age) {
        this.age[i]=age;
        this.name[i]=name;
    }

    public Pro10() {
    }
    
    
    void getData() {
        System.out.println("enter name:");
        name[i] = s.next();
        System.out.println("enter age:");
        age[i] = s.nextInt();
    }
    
    void display() {
        System.out.println("name:" + name[i]);
        System.out.println("age:" + age[i]);
 
    }
    
    public static void main(String[] args) {
        int i;
        for(i=0;i<2;i++)
        {
             Pro10 c=new Pro10();
            c.getData();
            c.display();
  
        }
    }

}
