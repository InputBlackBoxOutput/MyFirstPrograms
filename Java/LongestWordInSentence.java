import java.io.*;
class LongestWordInSentence
{
    String s;int l;
    public void input()throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter Sentence");
        s = br.readLine();
        s=s.trim();s=s+" ";
        l=s.length();
    }
    public void compute()
    {   String temp="";int pos=0;int cnt=0;int max=0;
        String m="";
        for(int i=0;i<l;i++)
        {
            if(s.charAt(i)==32)
            {   cnt++;
                temp=s.substring(pos,i+1);
                pos=i+1;
            }
            if(temp.length()>max)
            {
                max=temp.length();
                m=temp;
            }
        }
        System.out.println("The longest word is "+m);
        System.out.println("It's position is "+cnt);
    }
    public void main()throws IOException
    {
        input();
        compute();
    }
}
      
                 
        