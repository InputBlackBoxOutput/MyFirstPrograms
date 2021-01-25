
class BubbleSortStrings
{
    public void main()
    {
        BubbleSortStrings BSS=new BubbleSortStrings();
        BSS.compute();  
    }
    public void compute()
    {
        String a[]={"Alice", "Fred", "Alex", "Max"};
        int x=a.length; String t;
		
        for(int i=0;i<x-1;i++)
        {
            for(int j=0;j<x-1;j++)
            {
                if(a[j].compareTo(a[j+1])<0)
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