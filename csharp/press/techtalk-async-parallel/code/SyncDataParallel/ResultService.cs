using System;
using System.Threading;
using System.IO;

namespace Result
{
  public class ResultService
  {
    public void SaveSomething(string something){
      System.Console.WriteLine($"{DateTime.Now.TimeOfDay}: Saving thing: {something}");
      Thread.Sleep(500);
      Save();
    }

    private void Save(){
      StreamWriter SW = new StreamWriter($@"Files/SyncDataParalel{DateTime.Now.TimeOfDay}.txt",true);
      SW.WriteLine($@"{DateTime.Now.TimeOfDay}.txt");
      SW.Close();
    }
  }
}
