import java.util.*;
import java.io.*;

 // Compiler version JDK 11.0.2

 class Dcoder
 {
   public static void main(String args[]) throws IOException
   { 
    
    InputStreamReader read = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(read);
   
   String s[]  = new String[2];
   s = in.readLine().split(" ");
   int a = Integer.parseInt(s[0]);
   float b = Float.parseFloat(s[1]);
   if((a+0.5)<b && a%5==0)
   {
     System.out.println(b-0.5-a);
   }
   else 
   System.out.println(s[1]);
   
     }
 }