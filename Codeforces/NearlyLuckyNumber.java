import java.util.*;
public class NearlyLuckyNumber {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
	{
            String  n =null;
		 n = sr.nextLine();
                 int c;
                int count = 0;
                for(int i = 0 ; i < n.length() ; i++)
                {
                    c = Integer.parseInt(String.valueOf(n.charAt(i)));
                    if(c == 4 || c ==7)
                        count++;
                }
                if(count == 4 || count == 7)
                    System.out.println("YES");
                else
                    System.out.println("NO");
        }
}
