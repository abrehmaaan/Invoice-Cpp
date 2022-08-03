#include<iostream>
#include<string>
using namespace std;
class Invoice{
	string partNum;
	string partDesc;
	int quantity;
	int price;
	double VAT;
	double discountRate;
public:
	Invoice(string n, string d, int q, int p){
		partNum = n;
		partDesc = d;
		quantity = q;
		price = p;
		VAT = 0.20;
		discountRate = 0;
	}
	void setPartNum(int n){
		partNum = n;
	}
	void setPartDesc(int d){
		partDesc = d;
	}
	void setQuantity(int q){
		if(q>0){
			quantity = q;
		}
	}
	void setPrice(int p){
		if(p>0){
			price = p;
		}
	}
	void setVAT(double v){
		if(v>0){
			VAT = v;
		}
	}
	void setDiscountRate(double r){
		if(r>0){
			discountRate = r;
		}
	}
	string getPartNum(){
		return partNum;
	}
	string getPartDesc(){
		return partDesc;
	}
	int getQuantity(){
		return quantity;
	}
	int getPrice(){
		return price;
	}
	double getVAT(){
		return VAT;
	}
	double getDiscountRate(){
		return discountRate;
	}
	double getInvoiceAmount(){
		int total = quantity*price;
		double tax = total*VAT;
		double discount = total*discountRate;
		return total+tax-discount;
	}
};
int main(){
	Invoice in("0005", "This is a hair brush", 2, 500);
	in.setVAT(0.3);
	in.setDiscountRate(0.1);
	cout<<"Invoice Amount = "<<in.getInvoiceAmount()<<endl;
	return 0;
}
