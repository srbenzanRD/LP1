
public class AireAcondicionado
{
    public string marca { get; set; }
    public string color { get; set; }
    public int BTU { get; set; }
    private bool Encendido { get; set; } = true;

    public void Encender(){
        Encendido = !Encendido;
        var texto = Encendido?"encendido":"apagado";
        Console.WriteLine($"{marca} ({color}) {BTU}BTU, esta {texto}.");
    }
}