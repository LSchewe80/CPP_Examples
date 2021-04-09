// Template Klasse
// Template Klassen und Methoden-Prototypen in der selben Datei lassen
template <typename A> class Rechner
{
    public:
        A multi(A x, A y);
        A add(A x,A y);
};

template <typename A> A Rechner<A>::multi(A x,A y)
{
    return x*y;
}
template <typename A> A Rechner<A>::add(A x,A y)
{
    return x+y;
}