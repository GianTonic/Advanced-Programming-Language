class Rettangolo{
    private:
        int base;
        int altezza;
        Cubo* c;
        
    public:
        Rettangolo(int x, int y,int latocubo){
        this->base;
        this->altezza;
        c =new Cubo(1);
        c->lato=5; //se Rettangolo non fosse friend di Cubo non potrei farlo

        
        }
        friend Rettangolo Duplica(Rettangolo r);
};
class Cubo{
    private:
        int lato;
    public:
        Cubo(int lato){
            this->lato=lato;            
        }
        friend class Rettangolo; //RETTANGOLO PUO' ACCEDERE A CUBO
};
Rettangolo Duplica(Rettangolo r){
    return Rettangolo(r.base,r.altezza,0);

}
