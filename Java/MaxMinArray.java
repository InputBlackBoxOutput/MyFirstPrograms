import java.io.*;
class MaxMinArray
{   int a[]= new int[10];
    public void input()throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter 10 numbers");
        for(int i=0;i<10;i++)
        {
           a[i]=Integer.parseInt(br.readLine());   
        }
    }
    public void compute()
    {   
        int x;int max=0;int min=65535;
        for(int i=0;i<10;i++)
        {
            x=a[i];
            if(x>max)
				max=x;
            if(x<min)
				min=x;
        }
        System.out.println("Max="+max);
        System.out.println("Min="+min);
    }
    public void main()throws IOException
    {
        input();
        compute();
    }
}
