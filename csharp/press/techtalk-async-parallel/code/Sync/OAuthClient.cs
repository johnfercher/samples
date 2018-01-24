using System;
using System.Threading;

namespace OAuth
{
  public class OAuthClient
  {
    public bool IsTokenValid(string token){
      System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Validating token: {token}");
      Thread.Sleep(1000);
      return true;
    }
  }
}
