import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iNo = 0;
        char ch = '\0';
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, iNo = 1, ch = 'a'; j <= iCol; j++, iNo++, ch++)
            {
                if((i % 2) == 0)
                {
                    System.out.print(iNo+" "); 
                }
                else
                {
                    System.out.print(ch+" ");
                }
            }
            System.out.println();
        }
    }
}

class program3
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