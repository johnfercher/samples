using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1.Commons
{
    class Pose
    {
        public double positionX { get; set; }
        public double positionY { get; set; }
        public double positionZ { get; set; }
        public double orientationX { get; set; }
        public double orientationY { get; set; }
        public double orientationZ { get; set; }

        // Construtor Default
        public Pose()
        {
            positionX = positionX = positionZ = 0;
            orientationX = orientationX = orientationZ = 0;
        }

        public Pose(double px, double py, double pz, double ox, double oy, double oz)
        {
            positionX = px;
            positionY = py;
            positionZ = pz;
            orientationX = ox;
            orientationY = oy;
            orientationZ = oz;
        }

        public string Stringify()
        {
            string pose = "Pose(" + positionX + ", " + positionY + ", " + positionZ + ", " + orientationX + ", " + orientationY + ", " + orientationZ + ")";
            return pose;
        }
    }
}
