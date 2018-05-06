using System;
using System.Threading;

namespace Sync.Repositories
{
    public class CredentialRepository
    {
        public bool HasPermission(string token)
        {
            Console.WriteLine($"{DateTime.Now.TimeOfDay}: Retrieving credential for: {token}");
            Thread.Sleep(1000);
            return true;
        }
    }
}