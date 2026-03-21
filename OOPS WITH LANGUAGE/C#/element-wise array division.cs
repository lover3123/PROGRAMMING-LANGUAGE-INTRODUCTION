using System;

class Program
{
    static void Main()
    {
        // Example arrays of numbers
        double[] array1 = { 10, 5, 2, 8, 4 };
        double[] array2 = { 2, 1, 0, 4, 2 };

        try
        {
            // Perform element-wise division and handle exceptions
            PerformElementwiseDivision(array1, array2);
        }
        catch (DivideByZeroException)
        {
            // Handle DivideByZeroException
            Console.WriteLine("Error: Cannot perform division, as there is an attempt to divide by zero.");
        }
        catch (IndexOutOfRangeException)
        {
            // Handle IndexOutOfRangeException
            Console.WriteLine("Error: Arrays must have the same length for element-wise division.");
        }
        catch (Exception)
        {
            // Handle other unexpected exceptions
            Console.WriteLine("An unexpected error occurred.");
        }
    }

    // Perform element-wise division of two arrays
    static void PerformElementwiseDivision(double[] array1, double[] array2)
    {
        // Check if arrays have the same length
        if (array1.Length != array2.Length)
        {
            // Throw an exception if arrays have different lengths
            throw new IndexOutOfRangeException();
        }

        // Iterate through each element of the arrays
        for (int i = 0; i < array1.Length; i++)
        {
            try
            {
                // Perform division and display the result
                double result = CheckDivision(array1[i], array2[i]);
                Console.WriteLine($"{array1[i]} / {array2[i]} = {result}");
            }
            catch (DivideByZeroException)
            {
                // Handle DivideByZeroException during the division
                Console.WriteLine($"Error at index {i}: Cannot divide by zero.");
            }
        }
    }

    // Check if divisor is zero before performing division
    static double CheckDivision(double dividend, double divisor)
    {
        if (divisor == 0)
        {
            // Throw DivideByZeroException if the divisor is zero
            throw new DivideByZeroException();
        }

        // Perform division and return the result
        return dividend / divisor;
    }