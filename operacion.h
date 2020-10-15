//que solo perrmita definir solo una vez la clase operacion.
#ifndef _operacion
#define  _operacion

class  operacion{
    protected:
        int valor1;
        int valor2;
        int resultado;

    public:
        void cargar1();
        void cargar2();
        void mostrarresultado();
    


};
#endif