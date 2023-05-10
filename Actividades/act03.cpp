#include <iostream>
#include <string>
using namespace std;
class Banco{
    private:
        static float tasinteres;
    public:
        string nombre;
        Banco(const string nombre){
            this->nombre=nombre;
        }
        static void ModificarInteres(float _i){
            tasinteres=_i;
        }
        static float ObtenerInteres(){
            return tasinteres;
        }
};
class CuentaBancaria{
    private:
        int nrodecuenta;
        string nombreusuario;
        float saldo;
    public:
        CuentaBancaria(const int nrodecuenta, const string nombreusuario,const float saldo){
            this->nrodecuenta=nrodecuenta;
            this->nombreusuario=nombreusuario;
            this->saldo=saldo;
        }
        void deposito(const float dinero){
            saldo=saldo+dinero;
            cout<<"Deposito realizado con exito\n";
        }
        void retiro(const float cantidad){
            if (cantidad<saldo){
                saldo=saldo-cantidad;
            cout<<"Retiro realizado con exito\n";
            }
            else{
                cout<<"Retiro NO REALIZADO\n";
            }
        }
        float calcularInteres(int meses, Banco b){
            float interes=saldo*b.ObtenerInteres()*meses/12.0;
            return interes;
        }
        void imprimirDatos(){
            cout<<"Numero de Cuenta: "<<nrodecuenta<<endl;
            cout<<"Usuario: "<<nombreusuario<<endl;
            cout<<"Saldo Disponible: "<<saldo<<endl;
        }
};

float Banco::tasinteres=0.0;

int main(){
    Banco b1("BCP");
    b1.ModificarInteres(0.03);
    CuentaBancaria c1(10102023,"Juan",238.4);
    c1.imprimirDatos();
    c1.deposito(23.5);
    cout<<"-------------\n";
    c1.retiro(400);
    c1.retiro(150);
    c1.imprimirDatos();
    
    cout<<"El interes de 4 meses en el banco "<<b1.nombre<<" es: "<<c1.calcularInteres(4,b1);
    return 0;
}