import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("# "+iCnt+" * ");
        }
    }
}

class program4
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.print("Enter number of elements : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);
    }
}