package exceptiondemo;

public class ExceptionDemo {

    public static void main(String[] args) {

        try
        {
            int a=100/0;
            System.out.println("ans is:"+a);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }


    }
    
}
