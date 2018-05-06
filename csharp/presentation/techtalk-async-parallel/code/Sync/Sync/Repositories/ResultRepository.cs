using System;
using System.Threading;

namespace Sync.Repositories
{
    public class ResultRepository
    {
        public void SaveSomething(string something)
        {
            Console.WriteLine($"{DateTime.Now.TimeOfDay}: Saving thing: {something}");
            Thread.Sleep(1000);
            Console.WriteLine($"{DateTime.Now.TimeOfDay}: Saved");
        }
    }
}