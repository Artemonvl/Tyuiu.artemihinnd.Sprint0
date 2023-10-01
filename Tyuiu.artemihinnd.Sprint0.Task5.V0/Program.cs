using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Tyuiu.artemihinnd.Sprint0.Task5.V0.Lib;

namespace Tyuiu.artemihinnd.Sprint0.Task5.V0
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("A + B = " + DataService.Addition(5, 5));
            Console.WriteLine("A - B = " + DataService.Substraction(10, 5));
            Console.WriteLine("A * B = " + DataService.Multiplication(5, 5));
            Console.WriteLine("A / B = " + DataService.Division(9, 0));
            Console.ReadKey();
        }
    }
}
