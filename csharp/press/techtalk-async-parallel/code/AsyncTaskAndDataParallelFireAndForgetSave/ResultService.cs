using System;
using System.Threading;
using System.Threading.Tasks;
using System.IO;

namespace Result
{
  public class ResultService
  {
    public Task SaveSomething(string something){
      return Task.Run(() =>
      {
        System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Saving thing: {something}");
        Thread.Sleep(500);
        Save();
      });
    }

    private void Save(){
      StreamWriter SW = new StreamWriter($@"Files/AsyncTaskAndDataParallelFireAndForgetSave{DateTime.Now.TimeOfDay}.txt",true);
      SW.WriteLine($@"{DateTime.Now.TimeOfDay}.txt");
      SW.Close();
    }
  }
}
