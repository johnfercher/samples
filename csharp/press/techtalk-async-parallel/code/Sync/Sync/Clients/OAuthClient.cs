using System;
using System.Threading;

namespace Sync.Clients
{
    public class OAuthClient
    {
        public bool IsTokenValid(string token)
        {
            Console.WriteLine($"{DateTime.Now.TimeOfDay}: Validating token: {token}");
            Thread.Sleep(1000);
            return true;
        }
    }
}