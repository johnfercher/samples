using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1.Commons
{
    class Command
    {
        double leftWheel { get; set; }
        double rightWheel { get; set; }

        // Construtor Default
        public Command()
        {
            leftWheel = rightWheel = 0;
        }

        public Command(double left, double right)
        {
            leftWheel = left;
            rightWheel = right;
        }

        public string Stringify()
        {
            string cmd = "Cmd(" + leftWheel + ", " + rightWheel + ")";
            return cmd;
        }
    }
}
