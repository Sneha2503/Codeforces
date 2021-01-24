import java.util.*;
import java.lang.*;
import java.io.*;
public class Tram {
   
     public static void main(String args[]) throws java.lang.Exception
    {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        
        int i = 0;
        int min = 0,max=0;
        int l1,l2;
        int n;
        try
            {
                n = Integer.parseInt(br.readLine());
                
            }
        catch(Exception e)
            {
                return;
                
            }
        
        int capacity[] = new int[n];
        String s[] = new String[n];              
        
        for (i = 0; i < n; i++){
            s[i] = br.readLine();
        }
        String arr[] = new String[2];
        for( i = 0 ; i < n ; i++)
        {
            s[i].trim();
            arr = s[i].split(" ");
            l1 = Integer.parseInt(arr[0]);
            l2 = Integer.parseInt(arr[1]);
            min = min - l1 + l2;
            capacity[i] = min;
        }
        max = capacity[0];
        for (i = 1; i < capacity.length; i++) 
        {
            if (capacity[i] > max) 
                 max = capacity[i]; 
        }
        System.out.println(max);
    }
}
