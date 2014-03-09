using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Chapter10CardLib
{
    class Card
    {
        private readonly Suit Suit;
        private readonly Rank Rank;

        private Card(){}
        public Card(Suit SuitInst, Rank RankInst)
        {
            Suit = SuitInst;
            Rank = RankInst;
        }
        public override string ToString()
        {
            return "This card is Suit: " + Suit +" "+ "Rank: " + Rank ;
        }
    }
}
