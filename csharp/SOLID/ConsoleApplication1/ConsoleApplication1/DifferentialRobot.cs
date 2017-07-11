using ConsoleApplication1.Commons;
using ConsoleApplication1.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class DifferentialRobot : IDifferentialRobot
    {
        private readonly IDifferentialControl controller;
        public Pose pose { get; set; }
        public Command cmd { get; set; }
        public double batteryLevel { get; set; }

        public DifferentialRobot(IDifferentialControl controller) {
            pose = new Pose();
            cmd = new Command();
            batteryLevel = 100;
            this.controller = controller;
        }

        public void walkTo(Pose set_pose)
        {
            cmd = controller.control(pose, set_pose);
        } 

        public void sayHi()
        {
            Console.WriteLine("Oi");
        }

        public void sayWhere()
        {
            Console.WriteLine("I'm in: " + pose.Stringify());
        }

        public void sayCommand()
        {
            Console.WriteLine("My command is: " + cmd.Stringify());
        }
    }
}
