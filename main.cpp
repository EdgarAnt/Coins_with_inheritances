#include <iostream>
#include <cstdlib>

using namespace std;

void validacion();

class Moneda{
	private:
		double precio;
	public:
		void setPrecio(double);
		double getPrecio();
};

void Moneda::setPrecio(double precio)
{
    this->precio=precio;
}

double Moneda::getPrecio()
{
    return this->precio;
}

class Peso:public Moneda{
	private:
	    double cantidad;
	public:
	    void setCantidad(double);
		double getCantidad();
		void CalcularCantidadD();
        void CalcularCantidadE();
        void CalcularCantidadY();
        void CalcularCantidadYu();
};
void Peso::setCantidad(double Cantidad)
{
    this->cantidad=cantidad;
}

double Peso::getCantidad()
{
    return this->cantidad;
}
void Peso::CalcularCantidadD(){
    this->cantidad=this->getPrecio()*0.082;
}
void Peso::CalcularCantidadE(){
    this->cantidad=this->getPrecio()*0.048;
}
void Peso::CalcularCantidadY(){
    this->cantidad=this->getPrecio()*5.49;
}
void Peso::CalcularCantidadYu(){
    this->cantidad=this->getPrecio()*0.32;
}
class Dolar:public Moneda{
	private:
	    double cantidad;
	public:
	    void setCantidad(double);
		double getCantidad();
		void CalcularCantidad();
};
void Dolar::setCantidad(double Cantidad)
{
    this->cantidad=cantidad;
}
double Dolar::getCantidad()
{
    return this->cantidad;
}
void Dolar::CalcularCantidad(){
    this->cantidad=this->getPrecio()/0.082;
}
class Euro:public Moneda{
	private:
	    double cantidad;
	public:
	    void setCantidad(double);
		double getCantidad();
		void CalcularCantidad();
};
void Euro::setCantidad(double Cantidad)
{
    this->cantidad=cantidad;
}
double Euro::getCantidad()
{
    return this->cantidad;
}
void Euro::CalcularCantidad(){
    this->cantidad=this->getPrecio()/0.048;
}
class Yen:public Moneda{
	private:
	    double cantidad;
	public:
	    void setCantidad(double);
		double getCantidad();
		void CalcularCantidad();
};
void Yen::setCantidad(double Cantidad)
{
    this->cantidad=cantidad;
}
double Yen::getCantidad()
{
    return this->cantidad;
}
void Yen::CalcularCantidad(){
    this->cantidad=this->getPrecio()/5.49;
}
class Yuan:public Moneda{
	private:
	    double cantidad;
	public:
	    void setCantidad(double);
		double getCantidad();
		void CalcularCantidad();
};
void Yuan::setCantidad(double Cantidad)
{
    this->cantidad=cantidad;
}
double Yuan::getCantidad()
{
    return this->cantidad;
}
void Yuan::CalcularCantidad(){
    this->cantidad=this->getPrecio()/0.32;
}
void menu() {
    int opc;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"|                                     Menu                                     |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"1) Peso-Dolar"<<endl;
    cout<<"2) Dolar-Peso"<<endl;
    cout<<"3) Peso-Euro"<<endl;
    cout<<"4) Euro-Peso"<<endl;
    cout<<"5) Peso-Yen"<<endl;
    cout<<"6) Yen-Peso"<<endl;
    cout<<"7) Peso-Yuan"<<endl;
    cout<<"8) Yuan-Peso"<<endl;
    cout<<"9) Salir"<<endl;
    cout<<endl<<"opcion: ";
    cin>>opc;

    switch(opc)
    {
        case 1:
        {
            double precio=0;
            Peso ob;
            system("cls");
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"|                                Peso-Dolar                                |"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"Ingrese el valor a peso:";
            cin>>precio;

            ob.setPrecio(precio);
            ob.CalcularCantidadD();

            cout<<endl<<"El peso a dolar es: "<<ob.getCantidad();

        }
        break;
        case 2:
            {
                double precio=0;
            Dolar ob;
            system("cls");
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"|                                Dolar-Peso                                |"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"Ingrese el valor a peso:";
            cin>>precio;

            ob.setPrecio(precio);
            ob.CalcularCantidad();

            cout<<endl<<"El peso a dolar es: "<<ob.getCantidad();
            }
            break;
        case 3:
        {
            double precio=0;
            Peso ob;
            system("cls");
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"|                                Peso-Euro                                |"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"Ingrese el valor a peso:";
            cin>>precio;

            ob.setPrecio(precio);
            ob.CalcularCantidadE();

            cout<<endl<<"El peso a dolar es: "<<ob.getCantidad();

        }
        break;
        case 4:
        {
            double precio=0;
            Euro ob;
            system("cls");
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"|                                Euro-Peso                                |"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"Ingrese el valor a peso:";
            cin>>precio;

            ob.setPrecio(precio);
            ob.CalcularCantidad();

            cout<<endl<<"El peso a dolar es: "<<ob.getCantidad();
        }
        case 5:
        {
            double precio=0;
            Peso ob;
            system("cls");
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"|                                Peso-Yen                                |"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"Ingrese el valor a peso:";
            cin>>precio;

            ob.setPrecio(precio);
            ob.CalcularCantidadY();

            cout<<endl<<"El peso a dolar es: "<<ob.getCantidad();
        }
        case 6:
        {
            double precio=0;
            Yen ob;
            system("cls");
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"|                                Yen-Peso                                |"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"Ingrese el valor a peso:";
            cin>>precio;

            ob.setPrecio(precio);
            ob.CalcularCantidad();

            cout<<endl<<"El peso a dolar es: "<<ob.getCantidad();
        }
        case 7:
        {
            double precio=0;
            Peso ob;
            system("cls");
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"|                                Peso-Yuan                                |"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"Ingrese el valor a peso:";
            cin>>precio;

            ob.setPrecio(precio);
            ob.CalcularCantidadYu();

            cout<<endl<<"El peso a dolar es: "<<ob.getCantidad();
        }
        case 8:
        {
            double precio=0;
            Yuan ob;
            system("cls");
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"|                                Yuan-Peso                                |"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;
            cout<<"Ingrese el valor a peso:";
            cin>>precio;

            ob.setPrecio(precio);
            ob.CalcularCantidad();

            cout<<endl<<"El peso a dolar es: "<<ob.getCantidad();
        }
            break;
        default: {cout<<"Opcion invalida"<<endl;
        }
    }
}

int opc=0;
int main(int argc, char** argv) {



do{
    system("cls");
menu();
cout<<endl<<"Continuar 1[si] 0 [no] "<<endl;
        cin>>opc;
}while(opc!=0);

system("pause>>cls");
return 0;
}

void validacion()
{
    char dato='x0';
        if(isdigit(dato))
            cout<<"Es un numero"<<endl;
        else
            cout<<"No es un numero"<<endl;
}
