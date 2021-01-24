
import java.util.Scanner;
public class team {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
    {
        int l = sr.nextInt();
        String[] arr = new String[3];
        int c = 0,j=0,count = 0;
        String in = null;
        
        for(int i = 0; i <= l ; i++)
		{
                    in = sr.nextLine();
                    for(j=0;j<3;j++)
                    {
                        in.trim();
                    arr = in.split(" ");
                    }
                    c = 0;
                    for(j=0;j<arr.length;j++)
                    {  
                        if(arr[j].equals("1"))
                            c++;
                    }
                    if(c >= 2)
                        count++;
                }
        System.out.println(count);
    }
}
