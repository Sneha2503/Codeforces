import java.util.Scanner;
public class Wrong_subtraction {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
	{
           Scanner sr = new Scanner(System.in);
             String in = null;  
             in = sr.nextLine();
             in.trim();
             String arr[] = in.split(" ");
             int n = Integer.parseInt(arr[0]);
             int k = Integer.parseInt(arr[1]);
             int r = 0,b = 0,digits = 0;
             while(k != 0)
             {
                 r = n % 10;
                 if(r != 0)
                     n--;
                 else
                     n = n / 10;
                 k--;
             }
             System.out.println(n);
        }
}
