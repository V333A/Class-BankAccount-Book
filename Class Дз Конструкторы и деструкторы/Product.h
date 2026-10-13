#pragma

//Створити Клас Product(товар у магазині).
//- private - поля: char* name, double price, int weight(вага в грамах), int discount(знижка у відсотках).
//- Модифікатор setName(newName) — як setName у Student.
//- Модифікатор setPrice(newPrice) — лише >= 0, повертає bool.
//- Модифікатор setDiscount(newDiscount) — лише від 0 до 50, повертає bool.
//- ГОЛОВНИЙ конструктор Product(newName, newPrice, newWeight, newDiscount) :
//	у списку ініціалізації — name(nullptr), price(0), weight(newWeight), discount(0);
//у тілі — виклики setName(), setPrice(), setDiscount().
//- ДЕЛЕГУЮЧИЙ конструктор Product(newName, newPrice) — передає головному вагу 1000 і знижку 0.
//- Деструктор — звільняє пам'ять, виділену під назву.
//- Інспектор getFinalPrice() — повертає ціну зі знижкою : price - price * discount / 100.
//- Інспектор isOnSale() — повертає true, якщо знижка більша за 0.
//- Метод print() — виводить :
//назву,
//вагу у форматі «1 кг 250 г»(кілограми : weight / 1000, грами : weight % 1000),
//звичайну ціну,
//а якщо isOnSale() повертає true — ще й ціну зі знижкою та позначку «АКЦІЯ».
//- У main :
//створіть два товари головним конструктором(один зі знижкою) і один делегуючим;
//спробуйте створити товар зі знижкою 70 — переконайтеся, що знижка залишилася 0;
//виведіть усі товари.  










class Product
{ 
	char* name;
	double price;
	int weight;
	int discount;
public:
	Product( const char* newName, double newPrice, int newWeight, int newDiscount) : name(nullptr), price(0), weight(newWeight), discount(0)
	{
		setName(newName);
		setPrice(newPrice);
		setDiscount(newDiscount);
	
	}
	Product(const char* newName, double newPrice) :Product(newName, newPrice, 1000, 0) {};

	void setName(const char* newName);
	void setPrice(double newPrice);
	bool setDiscount(int newDiscount);
	double getFinalPrice()const;
	bool isOnSale()const;
	void print()const;

	~Product()
	{
		delete[] name;
	}

};

