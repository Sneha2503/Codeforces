import java.util.*;
import java.lang.*;
import java.io.*;
public class VanyaAndFence {
    
    public static void main(String[] args)throws java.lang.Exception
    {
        int i;
         String s;
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        try
{s = br.readLine();}
catch(Exception e)
{return;}
        String srr[] = new String[2];
        srr = s.split(" ");
        int a1 = Integer.parseInt(srr[0]);
        int a2 = Integer.parseInt(srr[1]);
        String temp;
        String arr[] = new String[a1];
     
         /*for(i = 0 ; i < a1 ; i++)
         {
             arr[i] = br.readLine();
         }*/
         temp = br.readLine();
         
         arr = temp.split(" ");
         
         int total = 0;
         
         for(i = 0 ; i < arr.length ; i++)
         {
             if(Integer.parseInt(arr[i])>a2)
             {
                 total = total + 2;
             }
             else
                 total++;
         }
         System.out.println(total);
    }
    
}
