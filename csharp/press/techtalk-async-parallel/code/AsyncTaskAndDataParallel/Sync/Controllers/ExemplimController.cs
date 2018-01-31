using Sync.Clients;
using Sync.Repositories;
using Sync.Services;
using System.Threading.Tasks;
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

        public async Task<IHttpActionResult> Post([FromBody]string token)
        {
            var taskTokenValid = OAuthClient.IsTokenValid(token);
            var taskHasPermission = CredentialRepository.HasPermission(token);

            await Task.WhenAll(taskTokenValid, taskHasPermission);
            var tokenValid = await taskTokenValid;
            var hasPermission = await taskHasPermission;

            if (!tokenValid || !hasPermission)
                return Unauthorized();

            var result = await CoreBusiness.DoSomething();
            await ResultRepository.SaveSomething(result);

            return Ok(result);
        }
    }
}
