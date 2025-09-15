#ifndef REPUESTO_H
#define REPUESTO_H


class Repuesto
{
    public:
        Repuesto();
        virtual ~Repuesto();
        Repuesto(string,float,string);
        float costoFinal() const; /// uso const pq no puede modificar el costoBasico
        float getCostoBasico() const;
        string getPaisDeOrigen()const;

    protected:

    private:
        string nombre;
        float costoBasico;
        string paisDeOrigen;
};

#endif // REPUESTO_H
