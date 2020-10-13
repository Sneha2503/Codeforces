import java.util.Scanner;
public class Domino_Pilling {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
    {
        String in = null;
        in = sr.nextLine();
        String[] a = new String[2];
        in.trim();
        a = in.split(" ");
        int squares = Integer.parseInt(a[0])*Integer.parseInt(a[1]);
        int domino = squares/2;
        System.out.println(domino);
    }
}
