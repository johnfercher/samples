﻿using ConsoleApplication1.Commons;
using ConsoleApplication1.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class DifferentialPIDControl : IDifferentialControl
    {
        public Command control(Pose act, Pose set)
        {
            return new Command(2, 2);
        }
    }
}