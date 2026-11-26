package class_demo;

import java.util.Scanner;

public class CLASS_DEMO {

    int no;
    String name;
    Scanner s = new Scanner(System.in);

    public CLASS_DEMO(int no, String name) {
        this.no=no;
        this.name=name;
    }
    
    void getData() {
        System.out.println("enter no:");
        no = s.nextInt();
        System.out.println("enter name:");
        name = s.next();
    }
    
    void display() {
        System.out.println("no:" + no);
        System.out.println("name:" + name);
    }
    
    public static void main(String[] args) {
        
        CLASS_DEMO c=new CLASS_DEMO(1,"abc");
//        c.getData();
        c.display();
       
    }

}
