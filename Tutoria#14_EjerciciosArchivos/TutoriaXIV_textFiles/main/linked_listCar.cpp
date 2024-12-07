#include "linked_listCar.h"
void LinkedListCar::insert(Car pCar)
{
	NodeCar* newCar = new NodeCar(pCar);
	if (header == NULL) {
		header = newCar;
		last = newCar;
		return;
	}
	last->setNext(newCar);
	newCar->setPrev(last);
	last = newCar;
}

void LinkedListCar::print()
{
	NodeCar* aux = header;
	while (aux != NULL) {
		cout << aux->getCar().toString();
		aux = aux->getNext();
	}

}
int LinkedListCar::countCar() {
	int count = 0;
	NodeCar* aux = header;
	while (aux != NULL) {
		count+=1;
		aux = aux->getNext();
	}
	return count;
}
string* LinkedListCar::createTextList() {
	string* textList = new string[countCar()];
	NodeCar* aux = header;
	int index = 0;
	while (aux != NULL) {
		textList[index] = aux->getCar().toString();
		aux = aux->getNext();
		index++;
	}
	return textList;
}
void LinkedListCar::loadTextList(string* list, int listSize) {
	string line;
	string model, brand,sort,transmission;
	int price;
	int pos;
	for (int i = 0; i < listSize;i++) {
		line = list[i];
		pos = line.find(";");
		sort = line.substr(0, pos);
		line = line.substr(pos + 1, line.size() - pos - 1);
		pos = line.find(";");
		model = line.substr(0, pos);
		line = line.substr(pos + 1, line.size() - pos - 1);
		pos = line.find(";");
		brand = line.substr(0, pos);
		line = line.substr(pos + 1, line.size() - pos - 1);
		pos = line.find(";");
		price = atoi(line.substr(0,pos).c_str());
		transmission = line.substr(pos + 1, line.size() - pos - 2);
		Car newCar = Car(sort,model, brand, price,transmission);
		insert(newCar);
	}
}