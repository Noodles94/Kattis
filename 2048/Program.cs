using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Game
{
    class Program
    {
        private int[,] gameField = new int[4, 4];
        static void Main(string[] args)
        {
            Program program = new Program();
            program.load();
            program.run();
        }
        public void load()
        {
            for(int i = 0; i < gameField.GetLength(0); ++i)
            {
                for(int j = 0; j < gameField.GetLength(1); ++j)
                {
                    gameField[i, j] = 0;
                    Console.Write(gameField[i, j] + " ");
                }
                Console.WriteLine();
            }
            
            Console.ReadLine();
        }
        public void run()
        {
            
        }
    }
}
