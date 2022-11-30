public class Persona
{
    public string nombre;
    public string apellido;
    public int edad;
    public int AnioDeNacimiento() => DateTime.Now.Year - edad;

}