using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort_Poker_By_Queue
{

   public class MyQueue{

       private int[] Queue;
       private int SizeOfQueue;
       private int Count;
       private int FrontPtr;
       private int RearPtr;

       public MyQueue():this(9){}
       public MyQueue(int size)
       {
           SizeOfQueue = size;
           Queue = new int[size];
           Count = 0;
           FrontPtr = 0;
           RearPtr = 0;
       }
       public void clear()
       {
           for (int i = 0; i < SizeOfQueue; i++)
           {
               Queue[i] = 0;
           }
       }
       public bool EnQueue(int num)
       {
           if (isFull())
           {
               Console.Write("Queue is full can't add any more item \n");
               return false;
           }
           Queue[RearPtr] = num;
           RearPtr = (RearPtr + 1) % SizeOfQueue;
           Count++;

           return true;
       }
       public bool DeQueue(ref int num)
       {
           if (isEmpty())
           {
               Console.Write("Queue is Empty. can't delete any more item \n");
               return false;
           }
           num = Queue[FrontPtr];
           Queue[FrontPtr] = 0;
           FrontPtr = (FrontPtr + 1) % SizeOfQueue;
           Count--;

           return true;
       }
       public bool getFront(ref int num)
       {
           if (isEmpty())
           {
               Console.Write("Queue is Empty. No Item in front\n");
               return false;
           }
           num = Queue[FrontPtr];

           return true;
       }
       public bool isEmpty()
       {
           if (Count == 0)
               return true;
           else
               return false;
       }
       public bool isFull()
       {
           if (Count == SizeOfQueue)
               return true;
           else
               return false;
       }
       public void getQueue()
       {
           Console.Write("Dump Queue: \n");
           for (int i = 0; i < SizeOfQueue; i++)
           {
               Console.Write("{0}", Queue[i]);
           }
           Console.Write("\n");   
       }
   }

   public class Poker
    {
       
      private int NumOfPoker;
      protected int[] PokerCards;
       public Poker():this(1)
       { 
       }
       public Poker(int NoOfPok)
       {
           NumOfPoker = NoOfPok;
           PokerCards = new int[NumOfPoker * 36];
       }
       public void WashCards()
       {
           Random rd = new Random();
           int RdNum;
           int Counts = 0;
           int NumOfSameNum = NumOfPoker;
           while (true)
           {
               if(Counts == NumOfPoker * 36)
                   break;
               RdNum = rd.Next() % (NumOfPoker * 50);
               if(RdNum < 10 || RdNum > 49 || (RdNum % 10 == 0))
                   continue;
               for (int i = 0; i <= Counts; i++)
               {
                   if (PokerCards[i] == RdNum && NumOfSameNum != 0)
                       NumOfSameNum--;
               }
               if (NumOfSameNum != 0)
               {
                   PokerCards[Counts] = RdNum;
                   Counts++;
               }
               NumOfSameNum = NumOfPoker;
           }
       }
       public void SortCards()
       {
          
           MyQueue Queue1 = new MyQueue(9*NumOfPoker);
           MyQueue Queue2 = new MyQueue(9*NumOfPoker);
           MyQueue Queue3 = new MyQueue(9*NumOfPoker);
           MyQueue Queue4 = new MyQueue(9*NumOfPoker);
           MyQueue Queue5 = new MyQueue(9*NumOfPoker);
           MyQueue Queue6 = new MyQueue(9*NumOfPoker);
           MyQueue Queue7 = new MyQueue(9*NumOfPoker);
           MyQueue Queue8 = new MyQueue(9*NumOfPoker);
           MyQueue Queue9 = new MyQueue(9*NumOfPoker);
           MyQueue QueueA = new MyQueue(9*NumOfPoker);
           MyQueue QueueB = new MyQueue(9*NumOfPoker);
           MyQueue QueueC = new MyQueue(9*NumOfPoker);
           MyQueue QueueD = new MyQueue(9*NumOfPoker);

           for (int i = 0; i < NumOfPoker * 36; i++)
           {
               switch (PokerCards[i] % 10)
               {
                   case 1: if (Queue1.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   case 2: if (Queue2.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   case 3: if (Queue3.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   case 4: if (Queue4.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   case 5: if (Queue5.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   case 6: if (Queue6.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   case 7: if (Queue7.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   case 8: if (Queue8.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   case 9: if (Queue9.EnQueue(PokerCards[i])) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   default: Console.Write("Wrong with Numbers \n"); break;
               }
           }
           SortCardbyColor(Queue1,Queue2,Queue3,Queue4,Queue5,Queue6,Queue7,Queue8,Queue9,QueueA,QueueB,QueueC,QueueD);
           SortCardBack(QueueA,QueueB,QueueC,QueueD);
       }
       public void SortCardbyColor(params MyQueue[] args)
       {
           int Temp = 0;
           for (int i = 0; i < 9; i++)
           {
               for (int j = 0; j < 4 * NumOfPoker; j++)
               {
                   if (args[i].DeQueue(ref Temp) != true)
                       return;

                   switch (Temp / 10)
                   {
                       case 1: if (args[9].EnQueue(Temp)) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                       case 2: if (args[10].EnQueue(Temp)) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                       case 3: if (args[11].EnQueue(Temp)) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                       case 4: if (args[12].EnQueue(Temp)) break; else { Console.Write("Enqueue Queue error! \n"); return; }
                   }
               }
           }
       }
       public void SortCardBack(params MyQueue[] args)
       {
           int temp = 0;
           for (int i = 0; i < 9 * NumOfPoker; i++)
           {
               for (int j = 0; j < 4; j++)
               {
                   args[j].DeQueue(ref temp);
                   PokerCards[i*4+j]  = temp;
               }
           }
       }
       public void getPoker()
       {
           Console.Write("Poker Washed. # of Pokers {0} \n",NumOfPoker);
           for (int i = 0; i < NumOfPoker * 36; i++)
           { Console.Write("{0} ", PokerCards[i]); }
           Console.Write("\n");
       }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Poker PokerOne = new Poker(10);
            PokerOne.WashCards();
            PokerOne.getPoker();
            PokerOne.SortCards();
            PokerOne.getPoker();
            Console.ReadKey();
        }
    }
}
