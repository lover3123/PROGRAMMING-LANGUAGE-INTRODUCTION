namespace My_First_Application 
{ 
    internal class marks 
    { 
        static void Main(string[] args) 
        { 
            Console.WriteLine("Enter  student's name"); 
            string sname1 = Console.ReadLine(); 
            Console.WriteLine("Enter C# marks"); 
            int marks1 = int.Parse(Console.ReadLine()); 
            Console.WriteLine("Enter Os  marks"); 
            int marks2 = int.Parse(Console.ReadLine()); 
            Console.WriteLine("Enter maths marks"); 
            int marks3 = int.Parse(Console.ReadLine()); 
            int totalmarks = marks1 + marks2 + marks3; 
            if (totalmarks <= 300 && totalmarks > 200) 
                Console.WriteLine("Your grade is excellent"); 
            else if (totalmarks <= 200 && totalmarks > 100) 
                Console.WriteLine("Your grade is good"); 
            else  
                Console.WriteLine("Your grade is average"); 
        } 
    } 
}