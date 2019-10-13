using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace improver
{

    class Program
    {
        private Dictionary<Dice, int> scores = new Dictionary<Dice, int>();
        static void Main(string[] args)
        {
            Program p = new Program();
            p.loadDices();
            p.run();
        }
        public void run()
        {
            while (true)
            {
                 //var numbers = Console.ReadLine().Split(' ').Select(x => Int32.Parse(x));
                //foreach (var num in numbers)
                //{
                  //  Console.WriteLine(num);
                //}
                int play1Dice1, play1Dice2, play2Dice1, play2Dice2, score1, score2;
                String input;
                input = Console.ReadLine();
                int[] numbers = new int[(input.Length/2) + 1];
                for(int i = 0; i < numbers.Length; ++i)
                {
                    numbers[i] = input[i*2] - '0';
                }

                play1Dice1 = numbers[0];
                play1Dice2 = numbers[1];
                play2Dice1 = numbers[2];
                play2Dice2 = numbers[3];

                if ((play1Dice1 == 0) && (play1Dice2 == 0) && (play2Dice1 == 0) && (play2Dice2 == 0))
                {
                    break;
                }

                Dice d1 = new Dice(play1Dice1, play1Dice2);
                Dice d2 = new Dice(play2Dice1, play2Dice2);

                score1 = scores[d1];
                score2 = scores[d2];

                if (score1 > score2)
                {
                    Console.WriteLine("Player 1 wins.");
                }
                else if (score2 > score1)
                {
                    Console.WriteLine("Player 2 wins.");
                }
                else
                {
                    Console.WriteLine("Tie.");
                }



            }
        }
        public void loadDices()
        {
            for (int i = 1; i <= 6; ++i)
            {
                for (int j = 1; j <= 6; ++j)
                {
                    Dice d = new Dice(i, j);
                    if ((i == 1 && j == 2) || (i == 2 && j == 1))
                        scores[d] = i * j * 1000;
                    else if(i == j)
                    {
                        scores[d] = 100 * i + j;
                    }
                    else
                    {
                        if(i > j)
                        {
                            scores[d] = (10 * i) + j;
                        }
                        else
                        {
                            scores[d] = (10 * j) + i;
                        }
                    }
                }
            }
        }
    }
    class Dice
    {
        private int dice1;
        private int dice2;

        public Dice(int d1, int d2)
        {
            this.dice1 = d1;
            this.dice2 = d2;
        }
        public int getDice1()
        {
            return dice1;
        }
        public int getDice2()
        {
            return dice2;
        }
        public override bool Equals(Object other)
        {
            Dice o = (Dice)other;
            return (o.dice1 == this.dice1) && (o.dice2 == this.dice2);
        }
        public override int GetHashCode()
        {
            return dice1 + (dice2*10);
        }
    }
}
