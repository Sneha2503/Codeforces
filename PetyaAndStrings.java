import java.util.Scanner;
public class PetyaAndStrings {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
    {
        String line1 = null;
        line1 = sr.nextLine();
        String line2 = null;
        line2 = sr.nextLine();
        line1 = line1.toLowerCase();
        line2 = line2.toLowerCase();
        
            int c = line1.compareTo(line2);
         
        if(c > 0)
        System.out.println("1");
        else if(c < 0 )
            System.out.println("-1");
        else
            System.out.println("0");
    }
}
