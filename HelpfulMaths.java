import java.util.*;
public class HelpfulMaths {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
    {
        int i = 0;
        String eq = null;
        eq = sr.nextLine();
        String[] arr  = eq.split("\\+");
        int a[] = new int[5];
       Arrays.sort(arr);
       String[] result = new String[eq.length()+1];
       /*for(int i = 0; i < arr.length ; i++)
           System.out.println(arr[i]);*/
       for( i = 0 ; i < arr.length - 1 ; i++)
       { System.out.print(arr[i]+"+");}
       System.out.print(arr[arr.length-1]);
    }
}
