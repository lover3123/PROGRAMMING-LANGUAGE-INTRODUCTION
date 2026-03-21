namespace My_First_Application 
{ 
    internal class forloop 
    { 
        static void Main () 
        { 
            Console.WriteLine(" Enter the  N th number "); 
            int range = Convert.ToInt32(Console.ReadLine()); 
            int sum = 0; 
            for(int i=0;i<=range;i++) 
            { 
                sum = sum + i; 
            } 
            Console.WriteLine("sum of numbers are " + sum); 
        } 
 
    } 
}