namespace My_First_Application 
{ 
    internal class Palindrome 
    { 
        static void Main() 
        { 
            int num, rem, sum = 0, temp; 
 
            Console.WriteLine("To Find a Number is Palindrome or not "); 
            Console.Write("\n Enter a number: "); 
            num = Convert.ToInt32(Console.ReadLine()); 
            temp = num; 
            while (num > 0) 
            { 
                rem = num % 10; 
                num = num / 10; 
                sum = sum * 10 + rem; 
                 
            } 
            Console.WriteLine(" The Reversed Number is: {0} ", sum); 
            if (temp == sum) 
            { 
                Console.WriteLine(" Number is Palindrome "); 
            } 
            else 
            { 
                Console.WriteLine(" Number is not a palindrome"); 
            } 
        } 
    } 
} 