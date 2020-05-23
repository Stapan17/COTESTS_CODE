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
      
    
    String s = in.readLine();
    
    int a[] = new int[s.length()];
    for(int i=0;i<s.length();i++)
      a[i] = s.charAt(i)-48;
      
  int sum = a[0] + a[a.length-1];
      System.out.println(sum);
      }
   }
 }