using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace CH11Ex03
{
    class primes
    {
        private long max;
        private long min;

        public primes() : this(2,100)
        { 
        }
        public primes(long minimum, long maximum)
        {
            max = maximum;
            min = minimum;
            if (max < min || min < 2)
                Console.WriteLine("Invaild entry \n");
        }
        public IEnumerator GetEnumerator()
        {
            bool isPrime;
            for (long i = min; i < (max - min + 1); i++)
            {
                isPrime = true;
                for (long k = 2; k <= (long)Math.Floor(Math.Sqrt(i)); k++)
                {
                    if ((i % k) == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                if(isPrime == true)
                  yield return i;
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            primes primerange = new primes(2,999999999999);

            foreach (long num in primerange)
            {
                Console.Write("{0} ", num);
            }
            Console.ReadKey();
        }
    }
}
