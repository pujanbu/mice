#ifndef SERVING_H
#define SERVING_H
#include <vector>
#include "items.h"

using namespace std;

class Serving{
	private:
		Containr _container; 
		vector<Flavor>  _flavors;
		vector<Topping> _toppings;
		vector<int> _top_kind;

	public:
		Serving(Containr container);
		void set_topping(Topping topping, int kind);
		void set_flavor(Flavor flavor);

		Containr get_container() ;
		vector<Flavor> get_flavors() ;
		vector<Topping> get_toppings() ;
		vector<int> get_top_kind() ;
		double get_total_retail_price() ;
		double get_total_wholesale_price();		
};

std::ostream& operator<<(std::ostream& os, const Serving& serving);

#endif

	