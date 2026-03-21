namespace myfirstproject
{
    internal class Arraysort
    {
        static void Main()
        {
            Console.Write("How many marks do you want to sort ");
            int a = Convert.ToInt32(Console.ReadLine());
            int[] arr1 = new int[a];
            int temp;
            for (int i = 0; i < arr1.Length; i++)
            {
                Console.Write("enter " + i + " marks ");
                arr1[i] = Convert.ToInt32(Console.ReadLine());
            }
            for (int i = 0; i < a; i++)
            {
                for (int j = i + 1; j < a; j++)
                {
                    if (arr1[i] < arr1[j])
                    {
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }

                }
            }
            Console.WriteLine(" Sorted Array");
            foreach(int i in arr1)
            {
                Console.WriteLine(i);
            }
        
         Console.WriteLine("Highest marks of the class " + arr1[0]);
      }
    }
}