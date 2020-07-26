import java.io.*;
class NameBeginsWith
{
    String a[]= new String [10]; char ch;
    
     public void input()throws IOException
    {
        InputStreamReader isr =new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        System.out.println("Enter ten names");
        for(int i=0;i<10;i++)
        {
            a[i]= br.readLine();
        }
        System.out.println("Find names that begin with: ");
        ch=(char)br.read();
        
    }
    public void compute()
    {   
        System.out.println("Name/s that begin with "+ch+" is/are - ");
        String s;
        for(int i=0;i<10;i++)
        {
            s=a[i];
            if(s.charAt(0)==ch)
            {
                System.out.println(s);
            }
        }
    }
    public void main()throws IOException
    {
        input();
        compute();
    }
}