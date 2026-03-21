namespace My_First_Application 
{ 
    internal class sumofnumbers 
    { 
        public static void Main() 
        { 
            Console.WriteLine(" Enter the  N th number "); 
            int range = Convert.ToInt32(Console.ReadLine()); 
            int i=1,sum = 0; 
            while(i<= range) 
            { 
                sum = sum + i; 
                i = i + 2; 
 
            } 
            Console.WriteLine("sum of odd numbers are " + sum); 
        } 
    } 
}