using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Chapter10CardLib
{
    class Program
    {
        static void Main(string[] args)
        {
            Deck DeckOfCards = new Deck();
            DeckOfCards.Shuffle();
            Console.WriteLine("Get # of {0} card is {1}",3,DeckOfCards.GetCard(3));
            Console.ReadKey();
        }
    }
}
