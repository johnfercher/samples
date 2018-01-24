using System;
using System.Threading;
using System.Threading.Tasks;
using App;

namespace SyncExample
{
  public class SyncExample
  {
    static public void Main(string[] args)
    {
      var app = new Application();
      app.Execute().Wait();

      System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Existing");
      Thread.Sleep(1000);
    }
  }
}
