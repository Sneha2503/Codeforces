import java.util.*;
public class Word_Capitalisation {
     static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
    {
        String word = null;
        word = sr.nextLine();
        int length = word.length(); 
        if(Character.isLowerCase(word.charAt(0)))
        {
            System.out.print(Character.toUpperCase(word.charAt(0)));
            for(int i = 1 ; i < length ; i++)
           
            System.out.print(word.charAt(i));
        }
        else
            System.out.print(word);
    }
}
