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
  
   for(int i=0;i<t;i++)
   {
     String []s = new String[3];
    s = in.readLine().split(" ");
    int a[] = new int[3];
    for(int j=0;j<3;j++)
      a[j] = Integer.parseInt(s[j]);
    
     if((a[0]>a[1]&&a[0]<a[2]  )|| (a[0]<a[1]&&a[0]>a[2]))
       System.out.println(a[0]);
    else if((a[1]>a[2]&&a[1]<a[0]) ||(a[1]<a[2]&&a[1]>a[0] ))
       System.out.println(a[1]);
    else if(   (a[2]>a[0]&&a[2]<a[1]) || (a[2]<a[0]&&a[2]>a[1]))
       System.out.println(a[2]);
   }
   }
 }