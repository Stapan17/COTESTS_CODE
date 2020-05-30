import java.io.*;

class trainandwalk{
    public static void main(String[] args) throws IOException,NumberFormatException{
        
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);

        int t = Integer.parseInt(in.readLine());
        for(int i=0;i<t;i++)
        {
            String[] arr = new String[8];
            arr =in.readLine().split(" ");
           
           int a[] = new int[8];
            for(int j=0;j<8;j++)
                {
                  a[j] = Integer.parseInt(arr[j]);
                }
            String s1 = in.readLine();
            
       
            trainandwalk ob = new trainandwalk();
            int t1 = ob.tw(a[1],a[3],a[5]);
            int t2 = ob.tw(a[3],a[4],a[6]);
            int t3 = ob.tw(a[4],a[2],a[5]);
            int t22 = ob.tw(a[1],a[2],a[5]);
            int z = 0;
            if(a[3]-a[1]>0)
              z = a[3] - a [1];
            
            int t11 = t1 + t2 + t3 + z;
            
            if(t11<t22)
                System.out.println(t22);
            else 
                System.out.println(t11);
        }

    }

    
    int tw(int x,int y , int z){

       int g = Math.abs(x-y);
       return (g*z);
    }
}