using System;

namespace Teste
{
  class MainClass
  {
    enum MyType { FUZZ, BUZZ, BIZZ, FIZZ, BUZZFIZZ };

    static public void Main(string[] args)
    {
      if(0 == 0){
          System.Console.WriteLine("igual");
      }
      if(1 != 0){
        System.Console.WriteLine("diferente");
      }

      float a = 5;
      a %= a == 0 ? 1 : 2;
      System.Console.WriteLine("a = {0}", a);


      MyType type = MyType.BUZZ;

      switch(type)
      {
        case MyType.BUZZ:
          System.Console.WriteLine("BUZZ");
        break;
        default:
          System.Console.WriteLine("!BUZZ");
        break;
      }

    }
  }
}
