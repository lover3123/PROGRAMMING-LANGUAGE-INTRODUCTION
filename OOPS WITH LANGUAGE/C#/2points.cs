namespace Point
{
    class Points
    {
        private int x;
        private int y;
        private static int countPoint;
        static Points()
        {
            countPoint = 0;
        }
        public Points()
        {
            this.x = 10;
            this.y = 10;
            countPoint++;
        }
        public Points(int x, int y)
        {
            this.x = x;
            this.y = y;
            countPoint++;
        }
        public int getX()
        {
            return x;
        }
        public int getY()
        {
            return y;
        }
        public static int getCount()
        {
            return countPoint;
        }
        static void Main()
        {
            Points point1 = new Points();
            Console.WriteLine("Count of Point objects Created:{0}", getCount());
            Points point2 = new Points();
            Console.WriteLine("Point 1 coordinates: ({0} {1})", point1.getX(), point1.getY());
            Console.WriteLine("Point 2 coordinates: ({0} {1})", point2.getX(), point2.getY());
            Console.WriteLine("Count of point Objects created:{0}", getCount());
            point2 = new Points(1, 1);
            Console.WriteLine("Count of point objects created:{0}", getCount());

        }
    }

}