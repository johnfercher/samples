using ConsoleApplication1.Commons;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;              
using System.Threading.Tasks;
using SimpleInjector;
using ConsoleApplication1.Interfaces;

namespace ConsoleApplication1
{      
    class Program
    {
        static readonly Container container;

        static Program()
        {
            container = new Container();
            container.Register<IDifferentialControl, DifferentialBlazicControl>();
            container.Register<DifferentialRobot>();

            container.Verify();
        }

        static void Main(string[] args)
        {
            var handlerRobot = container.GetInstance<DifferentialRobot>();
            handlerRobot.sayHi();
            handlerRobot.walkTo(new Pose(10, 10, 0, 0, 0, 0));
            handlerRobot.sayWhere();
            handlerRobot.sayCommand();
        }
    }
}
