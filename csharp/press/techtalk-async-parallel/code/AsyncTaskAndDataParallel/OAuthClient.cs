using System;
using System.Threading;
using System.Threading.Tasks;

namespace OAuth
{
  public class OAuthClient
  {
    public async Task<bool> IsTokenValid(string token){
      return await Task.Run(() =>
      {
        System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Validating token: {token}");
        Thread.Sleep(1000);
        return true;
      });
    }
  }
}
