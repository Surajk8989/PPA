class Marvellous
{
    public int i;
    public int j;

    public Marvellous()
    {
        System.out.println("Inside Default constructor...");
        this.i = 0;
        this.j = 0;
    }

    public Marvellous(int a, int b)
    {
        System.out.println("Inside Parameterized constructor...");
        this.i = a;
        this.j = b;
    }

    public void Fun()
    {
        System.out.println("Inside Fun method...");
    }
}

class ClassDemo
{
    public static void main(String arg[])
    {
        System.out.println("Inside main..");

        Marvellous objMarvellous = new Marvellous();        //Default 
        Marvellous objMarvellous2 = new Marvellous(11, 21); //Parameterised

        System.out.println(objMarvellous2.i);
        System.out.println(objMarvellous2.j);

        objMarvellous.Fun();
    }
}
