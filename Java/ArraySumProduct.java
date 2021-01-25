
class ArraySumProduct
{
     public void main()
     {   
		int sum = 0,pro = 1;
		int prime[]={2,3,5,7,11};
		for(int i=0;i<5;i++)
		{
		 sum+=prime[i];
		 pro*=prime[i];
		}
		System.out.println("Sum of 1st five prime no. " + sum);
		System.out.println("Product of 1st five prime no. " + pro);
     }
}
         