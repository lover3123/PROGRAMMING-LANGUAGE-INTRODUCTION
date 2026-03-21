namespace myfirstproject
{
    internal class sumofnumbersarray
    {
        static void Main()
        {
            Console.Write("How many  student’s marks do you want to store");
            int a= Convert.ToInt32(Console.ReadLine());
            int[] arr1 = new int[a];
            int sum = 0;
            float average = 0;
            for(int i=0;i<arr1.Length;i++)
            {
                Console.Write("enter " + i + " number");
                arr1[i] = Convert.ToInt32(Console.ReadLine());
                sum = sum + arr1[i];
            }
            average= sum/arr1.Length;
            Console.WriteLine();
            Console.WriteLine("Displaying array");
            foreach(int j in arr1)
                Console.WriteLine(j);
            Console.WriteLine(" sum is " + sum);
            Console.WriteLine(" average  is " + average);
        }
    }
}