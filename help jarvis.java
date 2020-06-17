import java.util.*;
import java.io.*;

 // Compiler version JDK 11.0.2

 class Dcoder
 {
   public static void main(String args[]) throws IOException
   { 
    
    InputStreamReader read = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(read);
   
   int t = parseInt.readLine();
   for(int k=0;k<t;k++) {
      
    
    String s = in.readLine();
    
    int a[] = new int[s.length()];
    for(int i=0;i<s.length();i++)
      a[i] = s.charAt(i);
      
    int min = a[0];
    int max = a[0];
    
    for(int i=0;i<s.length();i++)
    {
      if(a[i]<min)
        min = a[i];
        
      if(a[i]>max)
        max = a[i];
    }
    if((max-min)==3)
      System.out.println("YES");
      
    else 
      System.out.println("NO");
      
      }
   }
 }