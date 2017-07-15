using System;

namespace Loops
{
  class MainClass
  {
    static public void Main(string[] args)
    {
      int i = 0;
      do
      {
        System.Console.WriteLine("dowhile i = {0}", i);
        i++;
      }while(i < 10);

      i = 0;
      while(i < 10)
      {
        System.Console.WriteLine("while i = {0}", i);
        i++;
      }

      for(i = 0 ; i < 10 ; i++)
      {
        System.Console.WriteLine("for i = {0}", i);
      }

      for(i = 0 ; i < 10 ; i++)
      {
        System.Console.WriteLine("break i = {0}", i);
        break;
      }

      for(i = 0 ; i < 10 ; i++)
      {
        continue;
        System.Console.WriteLine("continue i = {0}", i);
      }

    }

  }
}
