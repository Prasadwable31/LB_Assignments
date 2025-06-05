import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iNo1 = 0;
        int iNo2 = 0;
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, iNo1 = 1, iNo2 = 2; j <= iCol; j++, iNo1 += 2, iNo2 += 2)
            {
                if((i % 2) == 0)
                {
                    System.out.print(iNo1+" ");
                }
                else
                {
                    System.out.print(iNo2+" ");
                }
            }
            System.out.println();
        }
    }
}

class program2
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of rows : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}