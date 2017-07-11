using System;

namespace Teste
{
  class MainClass
  {
    static public void Main(string[] args)
    {
      float b = 1234123.12f;
      float a = (int)b;
      int bb = Convert.ToInt32(b);
      string s = "asd"+b.ToString();
      System.Console.WriteLine(a);
      System.Console.WriteLine(s);
      System.Console.WriteLine("a = {0}, b = {1}, bb = {2}", a, b, bb);
    }
  }
}
