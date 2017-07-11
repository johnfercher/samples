using System;

namespace DataTypes
{
    class MainClass
    {
      static public void Main(string[] args)
      {
        bool boolType = true;


        byte byteType = 255;    // unsigned
        sbyte sbyteType = 127;  // signed
        char charType = 'c';


        decimal decimalType = 12345678912345678912345.123M;
        double doubleType = 12341234.1234;
        float floatType = 1234.1234f;


        long longType = 1234123412341234;       // signed
        ulong ulongType = 1234123412341234567;  // unsigned
        int intType = 12341234;     // signed
        uint uintType = 123412345;  // unsigned
        short shorType = 1234;      // signed
        ushort ushortType = 12345;  // unsigned

        System.Console.WriteLine(sizeof(uint));

        object o;   // Tempo de compilação
        o = 100;

        dynamic d;  // Tempo de execução
        d = 100;

        string a = "oioioi";

        // Ponteiros somente em blocos unsafe
        //int *pointer = &intType;
      }
    }
}
