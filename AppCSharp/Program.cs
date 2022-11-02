// See https://aka.ms/new-console-template for more information
Console.WriteLine("¿Cual es tu nombre?");
var nombre = Console.ReadLine();
Console.WriteLine($"¡HOLA! {nombre}");

var Iniciales = string.Join(' ',nombre
.Split(' ')
//.Select(palabra=>palabra[0])
.ToList());
Console.WriteLine($"Tus iniciales: {Iniciales}");
