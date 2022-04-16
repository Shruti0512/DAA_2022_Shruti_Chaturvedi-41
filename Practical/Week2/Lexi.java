import java.io.*;
import java.lang.*;
class Lexi
{
    public static void main(String args[])
    {
        String s="eewelcometojwva";
        String s1=s.substring(0,3);
        String max="";
        for(int i=1;i<s.length()-2;i++)
        {
            String s2=s.substring(i,i+3);
            int a=s1.compareTo(s2);
            if(a>0)
            {
                max=s1;
            }
            else if(a<0){
                s1=s2;
                max=s2;
            }
        }
        String min="";
        String s3=s.substring(0,3);
        for(int i=1;i<s.length()-2;i++)
        {
            String s2=s.substring(i,i+3);
            int a=s3.compareTo(s2);
            if(a<0)
            {
                min=s3;
            }
            else if(a>0)
            {
                s3=s2;
                min=s2;
            }
        }
        System.out.println(min);
        System.out.println(max);
    }
}