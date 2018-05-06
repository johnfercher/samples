using System;
using System.Threading;
using System.Threading.Tasks;

namespace Sync.Repositories
{
    public class CredentialRepository
    {
        public async Task<bool> HasPermission(string token)
        {
            return await Task.Run(() =>
            {
                Console.WriteLine($"{DateTime.Now.TimeOfDay}: Retrieving credential for: {token}");
                Thread.Sleep(1000);
                return true;
            });

        }
    }
}