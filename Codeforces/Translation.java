import java.util.*;
public class Translation {
    static Scanner sr = new Scanner(System.in);
    static Scanner sr1 = new Scanner(System.in);
    public static void main(String args[])
	{
                 String  word =null;
		 word = sr.nextLine();
                 String  reverse =null;
		 reverse = sr.nextLine();
                 String r = "";
                 for(int i = word.length()-1 ; i >= 0 ; i--)
                 {
                     r = r + word.charAt(i);
                 }
                 if(r.equals(reverse))
                     System.out.println("YES");
                 else
                     System.out.println("NO");
        }
}
