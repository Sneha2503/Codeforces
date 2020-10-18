import java.util.*;
public class BearAndBigBrother {
    static Scanner sr = new Scanner(System.in);
     public static void main(String args[])
    {
        String in = null;
        in = sr.nextLine();
        int c = 0;
        String[] arr = in.split(" ");
        int lamik = Integer.parseInt(arr[0]);
        int bob = Integer.parseInt(arr[1]);
        while(lamik<=bob)
        {
            lamik = lamik * 3;
            bob = bob * 2;
            c++;
        }
        System.out.println(c);
    }
}
