using Sync.Clients;
using Sync.Repositories;
using Sync.Services;
using System.Web.Http;

namespace Sync.Controllers
{
    public class ExemplimController : ApiController
    {
        public readonly OAuthClient OAuthClient;
        public readonly CoreBusiness CoreBusiness;
        public readonly CredentialRepository CredentialRepository;
        public readonly ResultRepository ResultRepository;

        public ExemplimController()
        {
            OAuthClient = new OAuthClient();
            CoreBusiness = new CoreBusiness();
            CredentialRepository = new CredentialRepository();
            ResultRepository = new ResultRepository();
        }

        public IHttpActionResult Post([FromBody]string token)
        {
            var tokenValid = OAuthClient.IsTokenValid(token);
            if (!tokenValid)
                return Unauthorized();

            var hasPermission = CredentialRepository.HasPermission(token);
            if (!hasPermission)
                return Unauthorized();

            var result = CoreBusiness.DoSomething();
            ResultRepository.SaveSomething(result);

            return Ok(result);
        }
    }
}
