using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sucesion_Fibb
{
    class Program
    {
        static void Main(string[] args)
        {
            int N =0;
            int F=0;

            do
            {
                System.Console.Clear();
                Console.WriteLine("Eliga la opcion para competa la sucecion de Fibonacci: ");
                Console.WriteLine("1- con recursividad.");
                Console.WriteLine("2- sin recursividad");
                Console.WriteLine("3- Salir ");
                Console.WriteLine("escoge un numero: ");
                F = int.Parse(Console.ReadLine());

                switch (F)
                {
                    case 1:
                        N= Leer(N);
                        Imprimir_rec(N);
                        System.Console.ReadKey();
                        break;
                    case 2:
                        N= Leer(N);
                        imrpimir_sin(N);
                        System.Console.ReadKey();
                        break;
                    case 3:
                        System.Environment.Exit(0);

                        break;
                    default:
                        Console.WriteLine("Escoge una opcion que este esntre ese rango de numeros");
                        break;
                }
            } while (F != 3);
        }

        static int Leer(int Num)
        {
            Console.Write("Dame la posicion hasta donde quieres que llegue el numero de Fibonacci: ");
            Num = int.Parse(Console.ReadLine());
            return Num;
        }

        static void Imprimir_rec(int Num)
        {
            Console.WriteLine("Sucesion: ");
            for (int i = 0; i < Num; i++)
            {
                Console.Write(sucesionRec(i) + " ");
            }
        }

        static void imrpimir_sin(int Num)
        {

            Console.WriteLine("Sucesion: ");

            for (int i = 0; i < Num; i++)
            {
                Console.Write(SucesionFor(i) + " ");
            }

        }

        static int SucesionFor(int Num)
        {
            int P1 = 0;
            int P = 0;
            int P2 = 1;

            if (Num == 0 || Num == 1)
            {
                return Num; // en este caso no se puede hacer la susecion porque esos valores son los primeros
            }
            else {
                for (int j = 2; j <= Num; j++)
                {
                    P = P1 + P2;
                    P1 = P2;
                    P2 = P;
                }
            }


            return P;
        }

        static int sucesionRec(int Num)
        {
            if (Num == 0 || Num == 1)
            {
                return Num; // en este caso no se puede hacer la susecion porque esos valores son los primeros
            }
            else {
                return sucesionRec(Num - 2) + sucesionRec(Num - 1);
            }

        }
    }
}
