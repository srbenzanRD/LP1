public class Memoria{
    public static List<CuentaBancaria> Cuentas {get; set;} = null!;

    public static void AgregarCuenta(CuentaBancaria data) => 
    Cuentas.Add(data);

}