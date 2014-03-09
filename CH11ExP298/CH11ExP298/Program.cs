using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

// This is the example of using Enumerator in collection class(DictionaryBase)
namespace CH11ExP298
{
    public class Animal
    {
        private string name;
        public Animal(string myName)
        {
            name = myName;
        }
        public string ShowName()
        {
            return name;
        }

    }
    public class Animals : DictionaryBase
    {
        public void Add(string newID, Animal newAnimal)
        {
            Dictionary.Add(newID, newAnimal);
        }

        public void Remove(string animalID)
        {
            Dictionary.Remove(animalID);
        }
        public Animals()
        { 
        }

        public Animal this[string animalID]
        {
            get
            {
                return (Animal)Dictionary[animalID];
            }
            set
            {
                Dictionary[animalID] = value;
            }
        }
        public new IEnumerator GetEnumerator()
        {
            foreach (object Animal in Dictionary.Values)
            {
                yield return (Animal)Animal;
            }
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Animals animals = new Animals();
            animals.Add("Chicken",new Animal("Chicken"));
            animals.Add("Duck", new Animal("Duck"));
            animals.Add("Sheep", new Animal("Sheep"));

            foreach (Animal animal in animals)
            {
                Console.WriteLine("{0} \n", animal.ShowName());
            }
            Console.ReadKey();
        }
    }
}
