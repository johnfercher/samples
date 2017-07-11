using ConsoleApplication1.Commons;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1.Interfaces
{
    interface IDifferentialRobot
    {
        Pose pose { get; set; }
        Command cmd { get; set; }
        double batteryLevel { get; set; }

        void sayHi();
        void sayWhere();
        void sayCommand();
    }
}
