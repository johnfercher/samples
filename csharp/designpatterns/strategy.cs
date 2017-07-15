using System;

namespace Strategy
{
  interface ICalculoDeImposto
  {
    decimal calculo(decimal salario);
  }

  // Estratégia 1
  class CalculoDeImpostoAte3000 : ICalculoDeImposto
  {
    public decimal calculo(decimal salario)
    {
      // se é sexta feira isso se não aquilo
      // se a resposta for 42
      // se batatinha quando nasce
      return salario*0.2M;
    }
  }

  // Estrategia 2
  class CalculoDeImpostoAcimaDe3000 : ICalculoDeImposto
  {
    public decimal calculo(decimal salario)
    {
      // se C é mais rapido que fortran
      // se Mark Zuckerberg > Dennis Ritchie
      // Se Vettel > Hamilton
      return salario*0.3M;
    }
  }

  interface IPessoa
  {
      decimal salario {get; set;}
      void walk();
  }

  class Pessoa : IPessoa
  {
    public decimal salario {get; set;}
    public void walk(){
      System.Console.WriteLine("Walk");
    }
  }

  class PessoaService
  {
    private Pessoa pessoa;
    private readonly ICalculoDeImposto calculoDeImposto;

    public PessoaService(ICalculoDeImposto calculoDeImposto, Pessoa pessoa)
    {
      this.calculoDeImposto = calculoDeImposto;
    }

    public decimal calculaImposto(decimal salario){
      return calculoDeImposto.calculo(pessoa.salario);
    }

    public void adicionaPagamento()
    {
      decimal salario = 4000; // Viria de outro lugar
      salario -= calculaImposto(salario);
    }

    public decimal retiraPagamento()
    {
      decimal salario = pessoa.salario;
      pessoa.salario = 0;
      return salario;
    }
  }

  class MainClass
  {
    static public void Main(string[] args)
    {
      Pessoa pessoa = new Pessoa();
      pessoa.salario = 3000;
      System.Console.WriteLine("asdasd");
    }
  }
}
