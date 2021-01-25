
class SelectionSort
{
    public void compute()
    {
        int a[]={12,3,33,56,15,33,78,};
        int x=a.length; int t;
        for(int i=0;i<x-1;i++)
        {
            for(int j=i+1;j<x;j++)
            {
                if(a[i]<a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        for(int i=0;i<x;i++)
        {
            System.out.print(a[i]+",");
        }
    }
}