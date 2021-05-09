
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

 

public class Main
{
	public static void main(String[] args) {
	       html h = new html();
	 String tag= h.open("html")+h.open("head")+h.close("head")+h.close("html");
	    File file= new File("c:\\generate.html");
	 
try {
     BufferedWriter wr = new BufferedWriter (new FileWriter(file));
      wr.write(tag);
      wr.close();
      System.out.println("Successfully wrote to the file.");
    } catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }
	
	}

}
