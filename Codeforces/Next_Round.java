
import java.util.Scanner;

public class Next_Round {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
    {
        int c = 0; 
        String in = null;
        in = sr.nextLine();
        String[] a = new String[2];
        in.trim();
        a = in.split(" ");
        int n = Integer.parseInt(a[0]);
        int k = Integer.parseInt(a[1]);
       String[] arr = new String[n];
       int[] arr1 = new int[n];
        String scores = null;
        scores = sr.nextLine();  
        scores.trim();
        arr = scores.split(" ");
        
        for(int j = 0; j < n ; j++)
            arr1[j] = Integer.parseInt(arr[j]);
        
        int scor = Integer.parseInt(arr[k-1]);
        for(int i = 0 ; i < n ; i++)
        {
            if(arr1[i] >= scor && arr1[i] > 0  )
                c++;
        }
        System.out.println(c);
    }
}
