#include "linked_listMotorcycle.h"
void LinkedListMotorcycle::insert(Motorcycle pMotorcycle)
{
	NodeMotorcycle* newMotorcycle = new NodeMotorcycle(pMotorcycle);
	if (header == NULL) {
		header = newMotorcycle;
		last = newMotorcycle;
		return;
	}
	last->setNext(newMotorcycle);
	newMotorcycle->setPrev(last);
	last = newMotorcycle;
}

void LinkedListMotorcycle::print()
{
	NodeMotorcycle* aux = header;
	while (aux != NULL) {
		cout << aux->getMotorcycle().toString();
		aux = aux->getNext();
	}

}
int LinkedListMotorcycle::countMotorcycle() {
	NodeMotorcycle* aux = header;
	int count = 0;
	while (aux != NULL) {
		count++;
		aux = aux->getNext();
	}
	return count;
}
string* LinkedListMotorcycle::createTextList() {
	string* textList = new string[countMotorcycle()];
	NodeMotorcycle* aux = header;
	int index = 0;
	while (aux != NULL) {
		textList[index] = aux->getMotorcycle().toString();
		aux = aux->getNext();
		index++;
	}
	return textList;
}