class Overriding
{
    public static void main(String arg[])
    {
        Base bobj = new Derived(); //Upcasting
        //Base bobj = new Base(); //Nocasting
        //Derived dobj = new Derived(); //nocasting
        //Derived dobj = new Base(); //downcasting
        bobj.fun();
        bobj.gun();
        bobj.sun();
        bobj.run();
        
        //bobj.run(10);         Error
        //bobj.mun();           Error 


    }
    
}

class Base
{
    public void fun()           //1000
    { System.out.println("Inside base fun"); }
    public void gun()           //2000
    { System.out.println("Inside base gun"); }
    public void sun()           //3000
    { System.out.println("Inside base sun"); }
    public void run()           //4000
    { System.out.println("Inside base run"); }

}

class Derived extends Base
{
    public void fun()           //5000
    { System.out.println("Inside derived fun"); }
    public void sun()           //6000
    { System.out.println("Inside derived sun"); }
    public void run(int A)      //7000
    { System.out.println("Inside derived run with parameter"); }
    public void mun()           //8000
    { System.out.println("Inside derived mun"); }
}
