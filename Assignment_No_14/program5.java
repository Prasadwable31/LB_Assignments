import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iNo = 0;

        for(i = 1; i <= iRow; i++, iNo++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(iNo+j+" ");
            }
            System.out.println();
        }
    }
}

class program5
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