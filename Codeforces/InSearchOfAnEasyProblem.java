import java.util.*;
import java.lang.*;
import java.io.*;
public class InSearchOfAnEasyProblem {
   
     public static void main(String args[]) throws java.lang.Exception
    {
        int n = 0 , count = 0;
        String s;
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        try
        {
        n = Integer.parseInt(br.readLine());
        }
        catch(Exception e)
        {
            return; 
        }
        
        try
        {
        s = br.readLine();
        }
        catch(Exception e)
        {
            return; 
        }
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s.charAt(i) == '1')
            {
                count++;
                break;
            }
        }
        if(count != 0)
            System.out.println("HARD");
        else
            System.out.println("EASY");
    }
}



 