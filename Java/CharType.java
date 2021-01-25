import java.io.*;
class CharType
{
    char charac;
    public void input()throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter Character");
        charac = (char)br.read();
    }
    public  void compute()
    {
        if(Character.isLetter(charac))
        {
            System.out.println("Letter");
        }
        else if(Character.isDigit(charac))
        {
            System.out.println("Digit");
        }
        else if(Character.isWhitespace(charac))
        {
            System.out.println("Whitespace");
        }
        else
        {
            System.out.println("Symbol");
        }
    }
    public  void main()throws IOException
    {
        input();
        compute();
    }
}
    
    