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
   for(int k=0;k<t;k++) {
      
    int count =0;
    String s = in.readLine();
    for(int j=0;j<s.length()-1;j++){
      
      if(s.charAt(j)=='c'&&s.charAt(j+1)=='h')
      count++;
      if(s.charAt(j)=='h'&&s.charAt(j+1)=='e')
      count++;
      if(s.charAt(j)=='e'&&s.charAt(j+1)=='f')
      count++;
      
    }
    
   System.out.println(count);
      }
   }
 }