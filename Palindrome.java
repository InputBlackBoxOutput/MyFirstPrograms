import java.io.*;
class Palindrome
{
    String s; int l;
    public void main()throws IOException
    {
        input();
        palindrome();
    }
     public void input()throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter word:");
        s=br.readLine();
        l=s.length();
    }
    public void palindrome()
    {
        String rev="";
        for(int i=0;i<l;i++)
        {
            char ch=s.charAt(i);
            rev+=ch;
        }
        try
        {
          if(s.equalsIgnoreCase(rev))
          {
            System.out.println(s+" is a Palindrome");
          }
          else
          {
            System.out.println(s+" is not a Palindrome");
          }
        }
        catch(NullPointerException e1)
        {
            System.out.println("Error Occurred: "+e1);
        }
    }
}