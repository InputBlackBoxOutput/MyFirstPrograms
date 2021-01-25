class EvenOddArray
{
     public void main()
     {
        int A[]={1,2,3,4,5,6,7,8,9,10};
        int O[]=new int[5];
        int E[]=new int[5];
        int sumo=0;int sume=0;
        int x=0; int y=0;
        for(int i=0;i<10;i++)
        {
            if(A[i]%2==0)
            {
                O[x]=A[i];
                x++;sumo+=A[i];
            }
            else
            {
                E[y]=A[i];
                y++;sume+=A[i];
            }
        }
        System.out.println("Even array:");
         for(int a=0;a<E.length;a++)
        {
            System.out.print(E[a]+",");
        }
        System.out.println("Even sum "+sume);
        System.out.println();
		
        System.out.println("Odd array:");
         for(int b=0;b<O.length;b++)
        {
            System.out.print(O[b]+",");
        }
        System.out.println("Odd sum " +sumo);
    }
}
        