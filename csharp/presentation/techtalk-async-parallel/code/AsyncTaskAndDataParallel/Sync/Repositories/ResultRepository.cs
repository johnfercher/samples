using System;
using System.Threading;
using System.Threading.Tasks;

namespace Sync.Repositories
{
    public class ResultRepository
    {
        public async Task SaveSomething(string something)
        {
            await Task.Run(() =>
            {
                Console.WriteLine($"{DateTime.Now.TimeOfDay}: Saving thing: {something}");
                Thread.Sleep(1000);
                Console.WriteLine($"{DateTime.Now.TimeOfDay}: Saved");
            });
        }
    }
}