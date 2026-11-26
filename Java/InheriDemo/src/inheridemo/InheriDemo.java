package inheridemo;



public class InheriDemo {

    int no=1;
String name="agd";
}
class abc extends InheriDemo
{
    
    void display()
    {
        System.out.println("no:"+no);
        System.out.println("name:"+name);
    }
    
    public static void main(String[] args) {

        abc a1=new abc();
        a1.display();

    }

}
