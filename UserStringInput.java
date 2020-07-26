import java.util.Scanner;
class UserStringInput
{
    public void main()
    {
        Scanner sc1 = new Scanner(System.in);
        String s = sc1.nextLine();
        Scanner sc = new Scanner(s);
        String t="";
        while(sc.hasNext())
        {
            t = sc.next();
            System.out.println(t);
        }
    }
}