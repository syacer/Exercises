using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace CH11Ex
{
    class Program
    {
        public static IEnumerable SimpleList()
        {
            yield return "string One";
            yield return "string Two";
            yield return "string Three";
        }
        static void Main(string[] args)
        {
            foreach (string item in SimpleList())
            {
                Console.WriteLine("{0}",item);
            }
            Console.ReadKey();
        }
    }
}
