using System;
using System.Threading.Tasks;
using OAuth;
using Core;
using Credential;
using Result;

namespace App
{
  public class Application
  {
    public readonly OAuthClient OAuthClient;
    public readonly CoreBusiness CoreBusiness;
    public readonly CredentialService CredentialService;
    public readonly ResultService ResultService;
    public readonly string Token;

    public Application(){
      OAuthClient = new OAuthClient();
      CoreBusiness = new CoreBusiness();
      CredentialService = new CredentialService();
      ResultService = new ResultService();

      Token = "UmTokenValido";
    }

    public async Task Execute(){
      var tokenValid = await OAuthClient.IsTokenValid(Token);
      if(!tokenValid)
        return;

      var hasPermission = await CredentialService.HasPermission(Token);
      if(!hasPermission)
        return;

      var result = await CoreBusiness.DoSomething();
      await ResultService.SaveSomething(result);
    }
  }
}
