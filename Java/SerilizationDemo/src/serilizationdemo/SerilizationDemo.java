package serilizationdemo;

import java.io.*;

public class SerilizationDemo implements Serializable {

    int id;
    String name;

    public SerilizationDemo(int id, String name) {
        this.id = id;
        this.name = name;
    }

    void show() {
        System.out.println("id:" + id);
        System.out.println("name:" + name);
    }

    public static void main(String[] args) {

    try
    {
        SerilizationDemo d1=new SerilizationDemo(1,"Karmraj");
        FileOutputStream f1=new FileOutputStream("D:/data.txt");
        ObjectOutputStream obj1=new ObjectOutputStream(f1);
        obj1.writeObject(d1);
        
        obj1.close();
        f1.close();
        
        
        FileInputStream f2=new FileInputStream("D:/data.txt");
        ObjectInputStream obj2=new ObjectInputStream(f2);
        SerilizationDemo d2;
        d2=(SerilizationDemo) obj2.readObject();
        d2.show();
    }
    catch(Exception e)
    {
        System.out.println(e);
    }
        
    }

}
