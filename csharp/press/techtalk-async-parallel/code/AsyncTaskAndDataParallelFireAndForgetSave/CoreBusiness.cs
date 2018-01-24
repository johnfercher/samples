using System;
using System.Threading;
using System.Threading.Tasks;

namespace Core
{
  public class CoreBusiness
  {
    public string DoSomething(){
      System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Doing core business");

      Parallel.For(0, 45,
                   i => {
                     System.Console.WriteLine($"({Fibonacci(i)})");
                     Thread.Sleep(50);
                   }
                  );

      return "something";
    }

    private int Fibonacci(int number){
      int actual = 0;     // atual
      int previous = 0;   // anterior

      for(int i = 1; i <= number; i++){
        if (i == 1) {
            actual = 1;
            previous = 0;
        } else {
            actual += previous;
            previous = actual - previous;
        }
      }

      return actual;
    }
  }
}
