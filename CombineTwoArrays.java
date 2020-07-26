import java.io.*;
class CombineTwoArrays
{
    public void main()
    {   
        int x=0;int y=1;
        int A[]={1,-2,-6,8,12};
        int B[]={0,3,18,21,17};
        int C[]= new int[A.length+B.length];
        for(int i=0;i<C.length/2;i++)
        {
            C[x]=A[i];
            x+=2;
        }
        for(int j=0;j<C.length/2;j++)
        {
            C[y]=B[j];
            y+=2;
        }   
        System.out.println("Array c[]=");
        for(int a=0;a<C.length;a++)
        {
            System.out.print(C[a]+",");
        }
    }
}    

    
    