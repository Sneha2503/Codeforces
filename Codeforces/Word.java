import java.util.*;
public class Word {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
	{
            String  n =null;
		 n = sr.nextLine();
                 int lower = 0,upper = 0;
                 for(int i = 0 ; i < n.length() ; i++)
                 {
                     if(Character.isUpperCase(n.charAt(i)))
                     {
                         upper++;
                     }
                     else
                         lower++;
                 }
                 
                 if(upper > lower)
                     n = n.toUpperCase();
                 if(upper <= lower)
                     n = n.toLowerCase();
                 System.out.println(n);
        }
}
