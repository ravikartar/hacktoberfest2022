class CircularLinkedList {
private:
	
	struct Node {
		int data;
		Node* next;
	};

	Node* head = nullptr;
	Node* tail = nullptr;
public:
	

	bool isEmpty() {
		if (head == nullptr)
			return true;
		else
			return false;
	}

	void insertAtEnd(int value) {
		//------Node Creation-----//
		Node* newNode = new Node;
		newNode->data = value;
		//-----------------------//
		if (head == nullptr) { //Empty linked list (special case)
			head = tail = newNode;
			newNode->next = head;
		}
		else {
			newNode->next = head;
			tail->next = newNode;
			tail = newNode;
		}
	}

	void insertAt(int value, int pos) {
		//------Node Creation-----//
		Node* newNode = new Node;
		newNode->data = value;
		newNode->next = nullptr;
		//-----------------------//
		if (isEmpty()) {
			head = tail = newNode;
			newNode->next = head;
			return;
		}

		if (pos == 0) { //Special case
			newNode->next = head;
			head = newNode;
		}
		else {
			Node* temp = head;
			for (int i = 0; i < pos - 1 ; i++) {
				if (temp->next == head) { // (2)
					cout << "Error: Out of range\n";
					delete newNode;
					return;
				}
				temp = temp->next;
			}
			
			if (temp == tail) {
				tail->next = newNode;
				tail = newNode;
			}
			else {
				newNode->next = temp->next;
				temp->next = newNode;
			}

		}
	}

	void remove(int value) {
		if (isEmpty()) {
			cout << "Erorr: Linked list is empty\n";
			return;
		}

		if (head->data == value) {
			Node* temp = head;

			if (head == tail) 
				head = tail = nullptr;
			else
				head = head->next;

			delete temp;
			return;
		}

		Node* prev, *temp;
		prev = tail;
		temp = head;

		while (temp != tail && temp->data != value) {
			prev = temp;
			temp = temp->next;
		}

		if (temp == tail) {
			if (temp->data == value) {
				tail = prev;
				tail->next = head;
				delete temp;
			}
			else {
				cout << "Error: Element not exist\n";
			}
			return;
		}

		prev->next = temp->next;
		delete temp;
	}

	void removeAt(int pos) {
		if (isEmpty()) {
			cout << "Erorr: Linked list is empty\n";
			return;
		}

		if (pos < 0) {
			cout << "Erorr: Out of range\n";
			return;
		}

		if (pos == 0) {
			Node* temp = head;

			if (head == tail)
				head = tail = nullptr;
			else
				head = head->next;

			delete temp;
			return;
		}

		Node* temp = head;
		for (int i = 0; i < pos - 1 && temp->next != head; i++) {
			temp = temp->next;
		}

		if (temp->next == head)
		{
			cout << "Error: Out of range\n";
			return;
		}

		if (temp->next == tail)
			tail = temp;

		Node* toBeDeleted = temp->next;
		temp->next = temp->next->next;
		delete toBeDeleted;
		
	}

	bool search(int value) {

		if (isEmpty()) return false;

		Node* temp = head;
		while (temp->next != head && temp->data != value) {
			temp = temp->next;
		}

		if (temp->next == head && temp->data != value)
			return false;
		else
			return true;
	}

	void reverse() {
		if (isEmpty()) return;
		
		Node* prev = tail;
		Node* curr = head;
		Node* next = nullptr;

		bool headVisisted = false;
		while (!headVisisted) {
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
			if (curr == head) 
				headVisisted = true;
		}

		head = prev;
		tail = curr;
	}

	void display() {
		if (isEmpty()) return;
		Node* temp = head;
		while (temp != tail) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << temp->data << endl;
	}

	~CircularLinkedList() {
		Node* temp = head;
		while (head != tail) {
			head = head->next;
			delete temp;
			temp = head;
		}
		delete head;
	}
};
