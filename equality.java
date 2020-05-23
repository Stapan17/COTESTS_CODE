import java.util.*;
import java.io.*;

 // Compiler version JDK 11.0.2

 class Dcoder
 {
   public static void main(String args[]) throws IOException
   { 
    
    InputStreamReader read = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(read);
   
   
    
    String []s1 = new String[2];
    s1 = in.readLine().split(" ");
    int a1[] = new int[2];
    for(int i=0;i<2;i++)
      a1[i] = Integer.parseInt(s1[i]);
      
      
   String []s = new String[a1[0]];
    s = in.readLine().split(" ");
    int a[] = new int[a1[0]];
    for(int i=0;i<a1[0];i++)
      a[i] = Integer.parseInt(s[i]);
    
     for(int j=0;j<a1[1];j++) 
     {
       int count1 = 0;
       int count2 = 0;
       
       String []s2 = new String[2];
    s2 = in.readLine().split(" ");
    int a2[] = new int[2];
    for(int i=0;i<2;i++)
      a2[i] = Integer.parseInt(s2[i]);
       
       
       for(int i=a2[0]-1;i<a2[1]-1;i++) 
       {
         if(a[i]<a[i+1])
           count1++;
         else if(a[i]>a[i+1])
           count2++;
       }
       if(count1==count2)
         System.out.println("YES");
       else
         System.out.println("NO");
     }
   }
 }