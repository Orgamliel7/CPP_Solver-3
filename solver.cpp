
#include "solver.hpp"
#include <complex>
#include <iostream>
using namespace std;
using namespace solver;
RealVariable::RealVariable(double a ,double b, double c) // בנאי למשתנה ממשי 
{
    this->a=a;
    this->b=b;
    this->c=c;
}
//Operator +
RealVariable solver::operator +(const RealVariable &x, const RealVariable &y)
{
    return RealVariable(x.getA()+y.getA(), x.getB()+y.getB(), x.getC()+y.getC());
}
RealVariable solver::operator +(const RealVariable &x, const double y)
{
    return RealVariable(x.getA(), x.getB(), x.getC()+y);
}
RealVariable solver::operator +(const double y, const RealVariable &x)
{
    return RealVariable(x.getA(), x.getB(), x.getC()+y);
}
// Operator - כל האופציות לחיסור
RealVariable solver::operator -(const RealVariable &x, const RealVariable& y)
{return RealVariable(x.getA()-y.getA(), x.getB()-y.getB(), x.getC()-y.getC());}
RealVariable solver::operator -(const RealVariable & x, const double y)
{return RealVariable(x.getA(), x.getB(), x.getC()-y);}
RealVariable solver::operator-(const double y, const RealVariable& x){
    return RealVariable(x.getA(), x.getB(), y-x.getC());}
// Operator *
RealVariable solver::operator *(const double y, const RealVariable& x)
{return RealVariable(x.getA()*y, x.getB()*y, x.getC()*y);}
// Operator /
RealVariable solver::operator /( const RealVariable &x ,const double y)
{
    return RealVariable(x.getA()/y, x.getB()/y, x.getC()/y);
}
RealVariable solver::operator/(const double y, const RealVariable& x)
{
    if(x.getC()!=0) // run-time error שנימנע מחלוקה באפס שתוביל ל 
        return RealVariable(x.getA(), x.getB(), y / x.getC());
    else
        throw std::invalid_argument("Cant divide by zero!");
}
// Operator ^ power העלאה בחזקה
RealVariable solver::operator ^(RealVariable const &x, const double power)
{
    if ((power>2) || (power<0) ){ // אם החזקה לא בין 0-2 כנדרש מאיתנו 
        throw std::invalid_argument("The power violates the task condition!");
    }
    //Trivial cases מקרים תקינים
    if(power==0)
        return RealVariable(0,0,1); // כל ביטוי בחזקת אפס שווה לאחד
    if(power==1) // נשאר על כנו
        return x;
    // 2 יש לנו שני מקרים אם החזקה ממעלה
    if( power==2&& x.getC()!=0 &&x.getB()!=0 )
        return RealVariable(pow(x.getB(),power),x.getB()*x.getC()*power,pow(x.getC(),power));
    if( power==2&& x.getC()==0 && x.getB()!=0 )
        return RealVariable(pow(x.getB(),power),0,0); //  יעלה בחזקת שתיים b אם אין מספר חופשי רק  
}
// Operator ==
RealVariable solver::operator ==(const RealVariable& x, const RealVariable& y){return x-y;}
RealVariable solver::operator ==(const RealVariable& x, const double y){return x-y;}
RealVariable solver::operator ==(const double y, const RealVariable& x){return y-x;}

// פיתרון משוואה לממשיים
double solver::solve(const RealVariable x) {
    double a = x.getA(); 
    double b = x.getB();
    double c = x.getC();
    // מקרי קצה שיזרקו שגיאה
    if(a==0) {
        if(b==0 && c!=0)
            throw std::out_of_range {" there is no result "};
        else return c/-b;
    }
    if ((b * b - 4 * a * c) > 0)
        return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        //  return(-x.b + sqrt(x.b * x.b - 4 * x.a * x.c)) / (2 * x.a); need to check this case

    else if ((b * b - 4 * a * c) == 0)
        return ((-b + sqrt(b * b - 4 * a * c)) / (2 * a));

    throw std::out_of_range {"There is no a real solution !"};

}




// -----======== Part 2 ========------
//ComplexVariable class
ComplexVariable::ComplexVariable(std::complex<double> a, std::complex<double> b, std::complex<double> c) { // בנאי למחלקת מרוכבים ע"פ דרישות המטלה
    this->a = a; // x^2
    this->b = b; // x^1
    this->c = c;  //x^0
}
//operator +
ComplexVariable solver::operator +(const ComplexVariable &x, const ComplexVariable &y){  // העמסת אופרטור + לחיבור שתי מחלקות מרוכבים 
    return ComplexVariable(x.getA() + y.getA(), x.getB() + y.getB(), x.getC() + y.getC());
}
ComplexVariable solver::operator +(const ComplexVariable &x, std::complex<double> y){ // העמסת אופרטור + לחיבור מחלקת מרוכבים עם מספר מרוכב 
    return ComplexVariable(x.getA(), x.getB(), x.getC() + y);
}
ComplexVariable solver::operator +(std::complex<double> y, const ComplexVariable &x){ // העמסת אופרטור + לחיבור מחלקת מרוכבים עם מספר מרוכב ,כנ"ל סדר הפוך בקלט
    return ComplexVariable(x.getA(), x.getB() , x.getC()+y);
}
//operator -
ComplexVariable solver::operator -(const ComplexVariable &x, const ComplexVariable &y){
    return ComplexVariable(x.getA() - y.getA() , x.getB() - y.getB() , x.getC() - y.getC());
}
ComplexVariable solver::operator -(const ComplexVariable &x, const complex<double> n){
    return ComplexVariable(x.getA(), x.getB() , x.getC()-n);
}
ComplexVariable operator- (const complex<double> n , const ComplexVariable& x) {
    return ComplexVariable(-x.getA(), -x.getB() , -x.getC()+n);
}
//operator *
ComplexVariable solver::operator*(const complex<double> n, ComplexVariable const &x) {
    return ComplexVariable(x.getA()*n, x.getB()*n, x.getC()*n);
}
//operator /
ComplexVariable solver::operator /(ComplexVariable const &x, const complex<double> n){
    return ComplexVariable(x.getA() / n, x.getB() / n, x.getC()/n);
}
//operator ^ (power) חזקה
ComplexVariable solver::operator^(ComplexVariable const & x, const complex<double> power) {
    if (power.real() == 0) { // אם החזקה שווה לאפס
        throw std::invalid_argument("The equations dont exist"); //נזרוק שגיאה כי אין משוואה
    }
    if (power.real() == 1) { // אם החזקה שווה 1 
        return ComplexVariable(std::complex<double>(0.0, 0.0), std::complex<double>(1.0, 0.0),
                               std::complex<double>(0.0, 0.0));
    }
    //אם החזקה ממעלה שנייה
    if (power.real() == 2) {
        return ComplexVariable(x.getA() + x.getB(), 0, x.getC());
    }
    else if(power.real()>2) // מקרה קצה בו אנו לא מתעסקים במטלה , חזקה גדולה מ2
        throw std::invalid_argument("The power violates the task condition!");
}
//operator == העמסת האופרטור שבדיקת השיוויון תשלח לחיסור ביניהם ואם התוצאה 0 אז יחזיר אמת
ComplexVariable solver::operator ==(const ComplexVariable &x, const int y){
    return x-y;
}
ComplexVariable solver::operator ==(const ComplexVariable &x, const ComplexVariable &y){
    return x-y;
}
complex<double> solver::solve(const ComplexVariable &x) { //     פונקציית פיתרון למחלקה של מרוכבים שמחזירה מספר מרוכב מסוג ליטרל טייפ של השפה  
    complex<double> a = x.getA();
    complex<double> b = x.getB();
    complex<double> c = x.getC();
    if(a == std::complex<double>(0.0,0.0)) { // אם המרוכב הראשון שווה 0
        if(b == std::complex<double>(0.0,0.0) && c != std::complex<double>(0.0,0.0))  // אם המרוכב השני שווה 0 ורק החופשי שונה מ-0, אין פיתרון כי אין נעלם
            __throw_runtime_error("No solution");
        if(b == std::complex<double>(0.0,0.0) && c == std::complex<double>(0.0,0.0)) // אם כולם אפסים נחזיר מרוכב אפסי
            return complex<double>(0,0);
        else return c/-b; // אחרת, נחלק את החופשי במינוס בי ונקבל את פיתרון המשוואה
    }
    return ( (-b + sqrt(b*b -std::complex<double>(4.0,0.0)*a*c)) / (std::complex<double>(2.0,0.0)*a) );// אם איי לא אפסי, נפתור ע"פ נוסחת השורשים הקלאסית
}
