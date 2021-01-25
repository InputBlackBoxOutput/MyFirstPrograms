/*Pattern -
  N
  -A
  --M
  ---E
 */
import java.io.*;
class Pattern
{   String s;int l;int space=0;
    public void input()throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter your name");
        s=br.readLine();
        s=s.toUpperCase();
        l=s.length();
    }
    public void printpattern()
    {
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            for(space=1;space<=i;space++)
            {
                System.out.print(" ");
            }
            System.out.print(c);
            System.out.println();
        }
    }
    public void main()throws IOException
    {
        Pattern obj = new Pattern();
        obj.input();
        obj.printpattern();
    }
}
        