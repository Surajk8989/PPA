class OverLoading
{
    public static void main(String arg[])
    {
        Arithematic aobj = new Arithematic();

        int iRet = 0;
        double dret= 0.0;

        iRet = aobj.Addition(10, 11);
        System.out.println("Addition is : "+iRet);
        iRet = aobj.Addition(10, 11, 21);
        System.out.println("Addition is : "+iRet);
        dret = aobj.Addition(10.8, 11.7);
        System.out.println("Addition is : "+dret);
    }
}

class Arithematic
{
    public int Addition(int A, int B)
    {
        return A + B;
    }
    public int Addition(int A, int B, int C)
    {
        return A + B + C;
    }
    public double Addition(double A, double B)
    {
        return A + B;
    }
}
