package Database;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.sql.Connection;
 


public class Main
{
	public static void main(String[] args) {
	     String tag="";
		 try {
			
	            Class.forName("com.mysql.cj.jdbc.Driver");
	            Connection con = DriverManager.getConnection(
	                    "jdbc:mysql://localhost:3306/people", "root", "chyadi1234");
	            Statement stmt = con.createStatement();
	            ResultSet rs = stmt.executeQuery("select * from employee");
	            System.out.println("idemployee  firstname   middlename   lastname   phone");
	            html h = new html();
	            tag=h.open("table")+h.open("tr") + h.open("th") + "id" + h.close("th")+h.open("th") + "First Name" + h.close("th")+h.open("th") + "Middle Name" + h.close("th")+h.open("th") + "Last Name" + h.close("th")+h.open("th") + "Phone no" + h.close("th")+h.close("tr");
              
	            while (rs.next()) {
	            	
	       	      tag+=h.open("tr")+h.open("td")+rs.getInt("idemployee") +h.close("td")+h.open("td")+rs.getString("First Name") +h.close("td")+h.open("td")+ rs.getString("Middle Name")+h.close("td")+h.open("td")+ rs.getString("Last Name") +h.close("td")+h.open("td")+ rs.getString("Phone no") +h.close("td")+h.close("tr");
	         	  	 System.out.println( rs.getInt("idemployee") + "\t" + rs.getString("First Name") + "\t " + rs.getString("Middle Name") + "\t " + rs.getString("Last Name") + "   \t" + rs.getString("Phone no"));
	            }tag+=h.close("table");
	            con.close();
	        } catch (Exception e) {
	            System.out.println(e);
	        }
		
		 //html h = new html();
	 	
		//String tag= h.open("html")+h.open("head")+h.open("title")+"Hello"+h.close("title")+h.close("head")+h.open("body")+h.open("h1")+"HTML Page "+h.close("h1")+h.open("textarea")+h.close("textarea")+h.open("table")+h.open("tr")+h.open("th")+"idemployee"+h.close("th")+ h.open("th")+"First Name"+h.close("th")+h.open("th")+"Middle Name"+h.close("th")+h.open("th")+"Last Name"+h.close("th")+h.open("th")+"Phone no"+h.close("th")+h.close("tr")+h.close("table")+h.close("body")+h.close("html");
	  	    File file= new File("generate.html");
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