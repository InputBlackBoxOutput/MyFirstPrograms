import java.io.*;
class SwapArrays
{
    public void main()throws IOException
    {
        InputStreamReader isr =new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
		
        System.out.println("Enter length of array");
        int n =Integer.parseInt(br.readLine());
        int a[]= new int [n];
        
		System.out.println("Enter"+n+"no.s");
        for(int z=0;z<n;z++)
        {
            a[z]= Integer.parseInt(br.readLine());               
        }
		
        int b[]=new int[n];
        int mid=n/2;int p=0;
        for(int i=mid;i<n;i++)
        {
            b[p]=a[i];
            p++;
            System.out.print(a[i]+",");
        }
        for(int j=0;j<mid;j++)
        {
            b[p]=a[j];
            p++;
            System.out.print(a[j]+",");
        }
    }
}