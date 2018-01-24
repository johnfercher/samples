using System;
using App;
using System.Threading;

namespace SyncExample
{
  public class SyncExample
  {
    static public void Main(string[] args)
    {
      var app = new Application();
      app.Execute();

      System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Existing");
      Thread.Sleep(1000);
    }
  }
}
