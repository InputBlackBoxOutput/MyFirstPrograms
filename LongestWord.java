import java.io.*;
class LongestWord
{
    public void main()throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter word 1: ");
        String a=br.readLine();
        String max;String min;
        max=a; min=a;
		for(int i=2;i<=5;i++)
        {
            System.out.println("Enter word "+i+": ");
            String b=br.readLine();
            if(max.length()<b.length())
            { max=b;}
            if(min.length()>b.length())
            { min=b;}
        }
        System.out.println("Max= "+max);
        System.out.println("Min= "+min);
    }
}
