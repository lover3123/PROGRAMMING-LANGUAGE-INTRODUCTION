namespace myproject 
{
internal class arrayduplicate
    {
        static void Main()
        {
             int[] arr1 = {1,3,1,4,5,3,7,18,1,18};
            Console.WriteLine(" Enter the number to be searched ");
            int searchnumber = Convert.ToInt32(Console.ReadLine());
            int count = 0;
            int i;
            for (i= 0; i < arr1.Length; i++)
            {
                if(arr1[i] == searchnumber)
                    count++;
            }
            if (count > 0)
                Console.WriteLine("search number occured " + count);
            else
                Console.WriteLine("Not occured in the list");
        }
    }
}