namespace Checkvowel
{
internal class vowelchecking 
    { 
        static void Main() 
        { 
                Console.WriteLine("Enter the character");     
                char ch = Convert.ToChar(Console. ReadLine()); 
                switch (Char. ToLower(ch)) 
                { 
                    case 'a': 
                    case 'e': 
                    case 'i':                         
                    case 'o':                         
                    case 'u': 
                        Console. WriteLine("Vowel"); 
                        break; 
                    default: 
                        Console. WriteLine("Consonant"); 
                        break; 
               } 
        } 
    } 
}