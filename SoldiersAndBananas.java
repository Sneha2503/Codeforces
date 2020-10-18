import java.util.*;
public class SoldiersAndBananas {
    static Scanner sr = new Scanner(System.in);
     public static void main(String args[])
    {
        String in = null;
        in = sr.nextLine();
        int total = 0;
        String[] arr = in.split(" ");
        int k = Integer.parseInt(arr[0]);
        int n = Integer.parseInt(arr[1]);
        int w = Integer.parseInt(arr[2]);
        for(int i = 1 ; i <= w ; i++)
            total = total + (i*k);
        if(total>n)
            System.out.println(total-n);
        else
            System.out.println("0");
    }
}
