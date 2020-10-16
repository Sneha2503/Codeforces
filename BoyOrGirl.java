import java.util.*;
public class BoyOrGirl {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
    {
        String in = null;
        in = sr.nextLine();
        Set<Character> link = new LinkedHashSet<Character>();
        for(int i = 0 ; i < in.length() ; i++)
        {
            link.add(in.charAt(i));
        }
        if(link.size() % 2 == 0)
            System.out.println("CHAT WITH HER!");
        else
            System.out.println("IGNORE HIM!");
    }
}
