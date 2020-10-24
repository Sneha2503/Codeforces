import java.util.*;
public class BeautifulYear {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args)
    {
        int n = sc.nextInt();
        int r = 0;
        int a = 0;
        int digits = 0;
        Set<Integer> link = new LinkedHashSet<Integer>();
        while(true)
        {
            n++;
            a = n;
            digits = 0;
            while(a!=0)
            {
               r = a % 10;
               a = a / 10;
               link.add(r);
               digits++;
            }
            if(link.size() == digits)
            {
                System.out.println(n);
                break;
            }
            else
            {
                link.clear();
                continue;
            }
        }
    }
}
