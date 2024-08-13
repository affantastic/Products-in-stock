#include <iostream>
using namespace std;
class product{
private:
 int code;
 string name;
 float unitPrice;
 int quantityinStock;
public:
 product(){
 code=0000;
 name="null";
 unitPrice=0.00;
 quantityinStock=0;
 }
 product(int c, string n, float u, int q){
 code=c;
 name=n;
 unitPrice=u;
 quantityinStock=q;
 }
 product(product& other){
 other.code=code;
 other.name=name;
 other.unitPrice=unitPrice;
 other.quantityinStock=quantityinStock;
 }
 void display(){
 cout<<"Product Code:"<<code<<endl;
 cout<<"Product Name:"<<name<<endl;
 cout<<"Product Unit-Price:"<<unitPrice<<endl;
 cout<<"Quantity in Stock:"<<quantityinStock<<endl;
 }
 void updateStock(int quantityChange){
 quantityinStock=quantityinStock+quantityChange;
 }
};
main()
{
 product prod1;
 cout<<"Default details of product 1:"<<endl;
 prod1.display();
 cout<<endl;
 cout<<"Details of product 2:"<<endl;
 product prod2(123,"Eggs",160.5,12);
 prod2.display();
 cout<<endl;
 product prod3;
 cout<<"Product 3 (copy of product 2):"<<endl;
 prod3=prod2;
 prod3.display();
 cout<<endl;
 cout<<"Update in stock for Product 2:"<<endl;
 prod2.updateStock(-6);
 cout<<"Details of product 2 after an update in stock:"<<endl;
 prod2.display();
}
