using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;
namespace Chapter10CardLib
{
    class Cards : CollectionBase
    {
        public void Add(Card newCard)
        {
            List.Add(newCard);
        }
        public void Remove(Card oldCard)
        {
            List.Remove(oldCard);
        }
        public Cards()
        { 
        }
        public Card this[int cardIndex]
        {
            get
            {
                return (Card)List[cardIndex];
            }
            set 
            {
                List[cardIndex] = value;
            }
        }
        public void CopyTo(Cards targetCards)
        {
            for (int index = 0; index < this.Count; index++)
            {
                targetCards[index] = (Card)List[index];
            }
        }
        public bool Contains(Card card)
        {
            return InnerList.Contains(card);
        }
    }
}
