public class CuentaBancaria
{
    public CuentaBancaria(string nombre,string cedula,double balance = 0)
    {
        Nombre = nombre;
        Cedula = cedula;
        Balance = balance;
    }
    public string Nombre { get; set; } = null!;
    public string Cedula { get; set; } = null!;
    public double Balance { get; set; } = 0;
    public bool Depositar(double valor)
    {
        Balance += valor;
        return true;
    }
    public bool Retirar(double valor)
    {
        if (valor < Balance)
            return false;
        Balance -= valor;
        return true;
    }
}