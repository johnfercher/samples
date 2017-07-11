using ConsoleApplication1.Commons;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1.Interfaces
{
    interface IDifferentialControl
    {
        Command control(Pose act, Pose set);
    }
}
