package Java;
import java.util.*;

class shortform
{
    public static  void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Name ");
        String s = sc.nextLine();
        s = s.trim();
        int n = s.length();
        String s1 = "" ;
        String ch ;
        s1= s1+ s.charAt(0) + ".";
        for (int i = 0 ; i<n ; i++)
        {
            ch = "";
            ch  = ch + s.charAt(i);
           
            //if (i==0)

            
            if (ch.equals(" ") == true)
            { 
                s1=s1+ s.charAt(i+1) + ".";
            }


        }
        
        System.out.println(s1);


    sc.close();   
        
    }

}