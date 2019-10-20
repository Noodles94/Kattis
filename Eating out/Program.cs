using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EatingOut
{
    class Program
    {
        static void Main(string[] args)
        {
            String nrs = Console.ReadLine();
            String[] nrsA = nrs.Split(' ');
            int[] ab = new int[nrsA.Length];
            for (int i = 0; i < nrsA.Length; ++i)
            {
                ab[i] = Int32.Parse(nrsA[i]);
            }
            int m = ab[0];
            int a = ab[1];
            int b = ab[2];
            int c = ab[3];
            if ((a+ b +c)> (m*2))
            {
                Console.WriteLine("impossible");

            }
            else
            {
                Console.WriteLine("possible");
            }
            Console.ReadLine();
        }
    }
}
