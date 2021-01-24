import java.util.Scanner;
public class Elephant {
    static Scanner sr = new Scanner(System.in);
    public static void main(String args[])
	{
		int n = sr.nextInt();
                int remainder = 0,next = 0,a = 0;
                if(n <= 5)
                {  
                    a++;
                }
                else
                {
                    for(int i = 1 ; i < 1000000 ; i++)
                    {
                        remainder = n % 5;
                        next = n - remainder;
                        a = next / 5;
                            if(remainder <= 5 && remainder != 0)
                                {
                                    a++;
                                    break;
                                }
                             else
                                {
                                    continue;
                                } 
                    }
                }
                System.out.println(a);
        }
}
