class Rettangolo{
    private:
        int base;
        int altezza;
    public:
    Rettangolo(int x, int y){
        this->base;
        this->altezza;
    }
    friend Rettangolo Duplica(Rettangolo r);
};

Rettangolo Duplica(Rettangolo r){
    return Rettangolo(r.base,r.altezza);

}
