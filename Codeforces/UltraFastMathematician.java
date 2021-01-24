import java.util.*;
import java.lang.*;
import java.io.*;
public class UltraFastMathematician {
   
     public static void main(String args[]) throws java.lang.Exception
    {
        String s1,s2 ;
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        try
        {
        s1 = br.readLine();
        }
        catch(Exception e)
        {
            return; 
        }
        try
        {
        s2 = br.readLine();
        }
        catch(Exception e)
        {
            return; 
        }
        
        for(int i = 0 ; i < s1.length() ; i++)
        {
            if(Character.compare(s1.charAt(i),s2.charAt(i)) == 0)
                System.out.print("0");
            else
                System.out.print("1");
        }
    }
}
