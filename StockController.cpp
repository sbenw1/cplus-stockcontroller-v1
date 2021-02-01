
#include <iostream>

//	This is the stock controller.
//	It keeps a total number of items and then 
//	it either decreases or increases an item.
class StockController {

public:

	int _toiletPaper;
	int _breadItem;
	int _donut;
	int _fishSteak;
	int _porkBurger;

	//	Constructor
	StockController() {

		this->_toiletPaper = 15;
		this->_breadItem = 25;
		this->_donut = 30;
		this->_fishSteak = 5;
		this->_porkBurger = 69;

	}
	
	//	Check to see how much items we have in stock.
	void StockCheck(int orderNumber) {

		//	These are references.
		int& tp = this->_toiletPaper;
		int& bi = this->_breadItem;
		int& d = this->_donut;
		int& fs = this->_fishSteak;
		int& pb = this->_porkBurger;

		switch (orderNumber) {

			case 1:
				std::cout << "There is " << tp << " TOILET PAPER in stock. \n";
				break;

			case 2:
				std::cout << "There is " << bi << " BREAD ITEM in stock. \n";
				break;

			case 3:
				std::cout << "There is " << d << "DONUT in stock. \n";
				break;

			case 4:
				std::cout << "There is " << fs << " FISH STEAK in stock. \n";
				break;

			case 5:
				std::cout << "There is " << pb << " PORK BURGER in stock. \n";
				break;

			default:
				std::cout << "Sorry, we do not have that item in stock. \n ";
				break;

		}
		

	}

	//	Increment Item by one.
	void IncrementItem(int orderNumber) {

		switch (orderNumber) {

		case 1:
			this->_toiletPaper++;
			std::cout << "Added more TOILET PAPER. \n";
			break;
		case 2:
			this->_breadItem++;
			std::cout << "Added more BREAD ITEM. \n";
			break;
		case 3:
			this->_donut++;
			std::cout << "Added more DONUT. \n";
			break;
		case 4:
			this->_fishSteak++;
			std::cout << "Added more FISH STEAK. \n";
			break;
		case 5:
			this->_porkBurger++;
			std::cout << "Added more PORK BURGER. \n";
			break;
		default:
			std::cout << "Sorry, we do not have that item in stock. \n ";
			break;

		}

	}

	//	Decrement Item
	void DecrementItem(int orderNumber) {

		switch (orderNumber) {

		case 1:

			if (this->_toiletPaper > 0) {

				this->_toiletPaper--;
				std::cout << "Decreased TOILET PAPER. \n";

			}
			else {
				std::cout << "You have no more TOILET PAPER. \n";
			}

			break;

		case 2:

			if (this->_breadItem > 0) {

				this->_breadItem--;
				std::cout << "Added more BREAD ITEM. \n";

			}
			else {

				std::cout << "You have no more BREAD ITEM \n";
			}

			break;

		case 3:

			if (this->_donut > 0) {

				this->_donut--;
				std::cout << "You have decreased more DONUT. \n";

			}
			else {

				std::cout << "You have no more DONUT \n.";
			}

			break;

		case 4:

			if (this->_fishSteak > 0) {

				this->_fishSteak--;
				std::cout << "Decreased FISH STEAK. \n";

			}
			else {

				std::cout << "You have no more FISH STEAK. \n";
			}

			break;

		case 5:

			if (this->_porkBurger > 0) {

				this->_porkBurger--;
				std::cout << "Decreaed PORK BURGER. \n";

			}
			else {

				std::cout << "You have no more PORK BURGER. \n";
				std::cout << "You have no more PORK BURGER. \n";
			}

			break;

		default:

			std::cout << "Sorry, we do not have that item in stock. \n ";

			break;

		}

	}

};