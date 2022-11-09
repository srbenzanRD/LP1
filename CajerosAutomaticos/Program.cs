// See https://aka.ms/new-console-template for more information
Console.WriteLine("Cuentas Bancarias");
Memoria.Cuentas = new List<CuentaBancaria>();

Console.WriteLine($"Opciones:{Environment.NewLine}1. Crear una cuenta.{Environment.NewLine}2. Identificarse.");
var op = Console.ReadLine()![0];
switch (op)
{
    case '1':
        {
            Console.WriteLine("Nombre: ");
            var nombre = Console.ReadLine()!;
            Console.WriteLine("Cédula: ");
            var cedula = Console.ReadLine()!;
            Console.WriteLine("Fondo inicial: ");
            double.TryParse(Console.ReadLine(), out double fondo);
            Memoria.AgregarCuenta(new CuentaBancaria(nombre, cedula, fondo));
        }
        break;
    case '2':
        {
            Console.WriteLine("Cédula: ");
            var cedula = Console.ReadLine()!;
            var cuenta = Memoria.Cuentas.FirstOrDefault(c => c.Cedula == cedula);
            if (cuenta == null)
                Console.WriteLine("Usted no posee cuenta con nosotros!");
            Console.WriteLine($"Hola! {cuenta!.Nombre}, que operación deseas realizar:{Environment.NewLine}1. Depositar.{Environment.NewLine}2. Retirar.");
            var o = Console.ReadLine()![0];
            Console.WriteLine("Monto: ");
            double.TryParse(Console.ReadLine()!,out double monto); 
            var response = "";
            if(o=='1'){
               response =  cuenta!.Depositar(monto)?"Deposito realizado":"❌";
            }
            else if(o=='2'){
               response =  cuenta!.Retirar(monto)? "Retiro realizado":"Fondos insuficientes";
            }
            
            Console.WriteLine($"El balance actual de su cuenta es {cuenta!.Balance}");
        }
        break;
}



