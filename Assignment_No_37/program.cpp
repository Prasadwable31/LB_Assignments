#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int Size;

    public:

        Array(int value = 10)
        {
            cout<<"Inside Connstructor\n";
            this->Size = value;
            this->Arr = new int[Size];
        }

        Array(Array &ref)
        {
            cout<<"Inside copy connstructor\n";

            this->Size = ref.Size;
            this->Arr = new int[this->Size];

            for(int i = 0; i<Size; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside Destructor\n";

            delete []Arr;
        }

        inline void Accept();
        inline void Display();
};

void Array :: Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0; i<this->Size; i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Elements are\n";

    for(int i = 0; i < this->Size; i++)
    {
        cout<<Arr[i]<<" ";
    }

    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(no)
        {
            cout<<"Inside ArrSearch Constructor\n";
        }

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == Size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch :: Frequency(int value)
{
    int icnt = 0;
    
    for(int i = 0; i<Size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }

    return icnt;
}

int ArrSearch :: SearchLast(int value)
{
    int iTrack = -1;
    int  i = 0;

    for(i = 0; i < Size; i++)
    {
        if(Arr[i] == value)
        {
            iTrack = i;
        }
    }    

    if(iTrack == -1)
    {
        return iTrack;
    }
    else
    {
        return iTrack + 1;
    }
}

int ArrSearch :: EvenCount()
{
    int EvenCount = 0;

    for(int  i = 0; i < Size; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            EvenCount++;
        }
    }    

    return EvenCount;
}

int ArrSearch :: OddCount()
{
    int OddCount = 0;

    for(int  i = 0; i < Size; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            OddCount++;
        }
    }    

    return OddCount;
}

int ArrSearch :: SumAll()
{
    int iSum = 0;

    for(int  i = 0; i < Size; i++)
    {
        iSum = iSum + Arr[i];
    }    

    return iSum;
}

int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    
    sobj1.Accept();
    sobj1.Display();

    int iret = sobj1.Frequency(11);

    cout<<"Frequency is "<<iret<<"\n";
    
    iret = sobj1.SearchFirst(11);
    cout<<"First occurance is is "<<iret<<"\n";
    
    iret = sobj1.SearchLast(11);
    cout<<"Last occurance is is "<<iret<<"\n";

    iret = sobj1.EvenCount();
    cout<<"Even Count is "<<iret<<"\n";
    
    iret = sobj1.OddCount();
    cout<<"Odd Count is "<<iret<<"\n";
    
    iret = sobj1.SumAll();
    cout<<"Sum of all element is "<<iret<<"\n";
    
    return 0;
}