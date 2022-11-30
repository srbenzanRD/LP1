
// See https://aka.ms/new-console-template for more information
AireAcondicionado aire = new AireAcondicionado();
Console.WriteLine("Marca: ");
aire.marca = Console.ReadLine();
Console.WriteLine("Color: ");
aire.color = Console.ReadLine();
Console.WriteLine("BTU: ");
aire.BTU = int.Parse(Console.ReadLine());
aire.Encender();
