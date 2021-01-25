
class BubbleSort
{
    public void main()
    {
        BubbleSort BS=new BubbleSort();
        BS.compute();  
    }
    public void compute()
    {
        int a[]={12,3,33,56,15,33,78,};
        int x=a.length;int t;
        for(int i=0;i<x-1;i++)
        {
            for(int j=0;j<x-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        for(int i=0;i<x;i++)
        {
            System.out.print(a[i]+",");
        }
    }
}