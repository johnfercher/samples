using System;
using System.Threading;
using System.Threading.Tasks;

namespace Credential
{
  public class CredentialService
  {
    public async Task<bool> HasPermission(string token){
      return await Task.Run(() =>
      {
        System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Retrieving credential for: {token}");
        Thread.Sleep(500);
        return true;
      });
    }
  }
}
