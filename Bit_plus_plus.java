
import java.util.Scanner;


public class Bit_plus_plus {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
    {
        int x = 0;
        String[] arr = new String[3];
        int l = sr.nextInt();
        String in = null;
		
		for(int i = 0; i <= l; i++)
		{
			in = sr.nextLine();
                       
                        if(in.equals("++X"))
                            ++x;
                        if(in.equals("X++"))
                            x++;
                        if(in.equals("--X"))
                            --x;
                        if(in.equals("X--"))
                            x--;
                }
                System.out.println(x);
    }
}
