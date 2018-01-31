using System;
using System.Threading;
using System.Threading.Tasks;

namespace Sync.Clients
{
    public class OAuthClient
    {
        public async Task<bool> IsTokenValid(string token)
        {
            return await Task.Run(() =>
            {
                Console.WriteLine($"{DateTime.Now.TimeOfDay}: Validating token: {token}");
                Thread.Sleep(1000);
                return true;
            });
        }
    }
}