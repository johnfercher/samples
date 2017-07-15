using System;

namespace Encapsulation
{
  class Test
  {
    public string namePublic;                         // Acessível de qualquer lugar
    protected string nameProtected;                   // Acessível por classes que hedariam
    private string namePrivate;                       // Acessível somente pela própria classe Test
    internal string nameInternal;                     // Acessível de qualquer lugar do mesmo Assembly
    protected internal string nameProtectedInternal;  // Acessível por classe que herdariam, mas somente se for herança dentro do Assembly
  }

  class MainClass
  {
    static public void Main(string[] args)
    {
      Test test = new Test();
    }
  }
}
