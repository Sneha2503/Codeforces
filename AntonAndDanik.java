
import java.util.*;
import java.lang.*;
import java.io.*;
public class AntonAndDanik {



public static void main(String[] args) throws java.lang.Exception
{
    int noGames = 0;
    String name;
    BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
   try
{noGames = Integer.parseInt(br.readLine());}
catch(Exception e)
{return;}
      try
{name = br.readLine();}
catch(Exception e)
{return;}
    name=name.toUpperCase();
    int countA=0;
    int countD=0;
    char winner;
    for (int i=0; i<noGames;i++){
       winner= name.charAt(i);
       if (winner == 'A')
         countA++;
       else 
         countD++;
    }

    if (countA > countD)
       System.out.println("Anton");
    else if (countA < countD)
       System.out.println("Danik");
    else 
       System.out.println("Friendship");


}
}