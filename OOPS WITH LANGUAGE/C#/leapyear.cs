namespace My_First_Application 
{ 
    class birthyrcalculation 
    {    
          static void Main() 
        { 
            Console.WriteLine("enter your birth year"); 
            int birthyear= Convert.ToInt32(Console.ReadLine()); 
            if (birthyear % 4 == 0) 
            { 
                Console. WriteLine("Your Birthday falls on Feb 29th. specicial Gift is waiting for u "); 
            } 
            else 
            { 
                Console.WriteLine("Sorry, You are not eligible for gift"); 
            } 
         } 
    } 
}