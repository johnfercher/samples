using System;

namespace Arrays
{
  class MainClass
  {
    static public void Main(string[] args)
    {
      double []array = new double[5] {1.0, 2.0, 3.0, 4.0, 5.0};
      for(int i = 0 ; i < array.Length ; i++)
        System.Console.WriteLine(i);

      foreach(int number in array)
        System.Console.WriteLine(number);

    }
  }
}
