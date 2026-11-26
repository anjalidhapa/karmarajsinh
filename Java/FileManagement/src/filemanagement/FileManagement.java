package filemanagement;

import java.io.*;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

public class FileManagement {

    public static void main(String[] args) {

        try {
            FileWriter f = new FileWriter("D:/abc.txt");
            f.write("Hello welcome to java programming");
            f.write("\nHTML");
            f.write("\nC Language");
            f.write("\nPython");
            f.close();

            FileReader r = new FileReader("D:/abc.txt");
            Scanner s=new Scanner(r);
            while(s.hasNext())
            {
                System.out.println(s.nextLine() );
            }
            
            
        } catch (IOException ex) {
            Logger.getLogger(FileManagement.class.getName()).log(Level.SEVERE, null, ex);
        }

    }

}
