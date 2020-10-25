import java.util.*;
import java.lang.*;
import java.io.*;
public class Magnets {
   
     public static void main(String args[]) throws java.lang.Exception
    {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        int n = 0, i = 0 ;
        int count = 1;
        try
        {
        n = Integer.parseInt(br.readLine());
        }
        catch(Exception e)
        {
            return; 
        }
        String arr[] = new String[n];
        for(i = 0 ; i < n ; i++)
        {
            arr[i] = br.readLine();
        }
        
        for( i  = 0 ; i < arr.length-1 ; i++)
        {
            if(arr[i].equals("10")&&(arr[i+1].equals("01")))
            {
                count++;
            }
            
            if(arr[i].equals("01")&&(arr[i+1].equals("10")))
            {
                count++;
            }
        }
        System.out.println(count);
    }
 }
