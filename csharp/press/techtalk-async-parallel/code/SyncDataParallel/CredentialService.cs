using System;
using System.Threading;

namespace Credential
{
  public class CredentialService
  {
    public bool HasPermission(string token){
      System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Retrieving credential for: {token}");
      Thread.Sleep(500);
      return true;
    }
  }
}
