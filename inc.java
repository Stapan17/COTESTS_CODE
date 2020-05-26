import java.util.*;
import java.io.*;

 // Compiler version JDK 11.0.2

 class Dcoder
 {
   public static void main(String args[]) throws IOException
   { 
    
    InputStreamReader read = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(read);
   
   int t = Integer.parseInt(in.readLine());
   if(t%4 ==0)
     System.out.println(t+1);
   else
     System.out.println(t-1);
      
      
   }
 }