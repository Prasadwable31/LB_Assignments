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
        
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt+" # ");
        }
    }
}

class program2
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