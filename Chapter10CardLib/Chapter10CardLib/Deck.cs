using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Chapter10CardLib
{
    class Deck
    {
        private Cards cards;

        public Deck()
        {
            cards = new Cards();
            for (int suit = 1; suit <= 4; suit++)
            {
                for (int rank = 1; rank <= 13; rank++)
                {
                    cards.Add(new Card((Suit)suit, (Rank)rank));
                }
            }
            /*for (int i = 0; i < 52; i++)
            {
                Console.WriteLine("{0} \n", DeckOfCardInst[i].ToString());
            }*/
        }
        public Card GetCard(int CardIndex)
        {
            Console.WriteLine("Retrived Card: {0} \n", cards[CardIndex].ToString());
            return cards[CardIndex];
        }
        public void Shuffle()
        {
            Card TempCard;
            int Index;
            Random SourceGen = new Random();

            for(int i= 0; i < 52; i++)
            {
                while(true)
                {
                  Index = SourceGen.Next(52);
                  for (int k = 0; k < i; k++)
                  {
                      if (cards[k] == cards[Index])
                      {
                          break;
                      }
                  }
                  TempCard = cards[i];
                  cards[i] = cards[Index];
                  cards[Index] = TempCard;
                  break;
                }    
            }
            for (int i = 0; i < 52; i++)
            {
                Console.WriteLine("{0} \n", cards[i].ToString());
            }
        }
    }
}
