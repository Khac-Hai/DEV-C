#include<bits/stdc++.h>
using namespace std;

template<typename T>
class CircularlyDoublyLinkedList {
private:
	
public:
    struct Node {
        T data;
        Node* next;
        Node* prev;
        Node(const T& value) : data(value), next(NULL), prev(NULL) {}
    };
    Node* head;
    int Size;
    CircularlyDoublyLinkedList() : head(NULL), Size(0) {}

    CircularlyDoublyLinkedList(const T* arr, const int L) : head(NULL), Size(0) {
        for (int i = 0; i < L; ++i) {
            insert_end(arr[i]);
        }
    }

    CircularlyDoublyLinkedList(const vector<T>& vec) : head(NULL), Size(0) {
        for (size_t i = 0; i < vec.size(); ++i) {
            insert_end(vec[i]);
        }
    }

    ~CircularlyDoublyLinkedList() {
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void display() {
        if (head == NULL) {
            cout << "danh sach rong." << endl;
            return;
        }

        Node* current = head;
        do {
            cout << current->data;
            current = current->next;
            if (current != head) {
                cout << ", ";
            }
        } while (current != head);
             cout << endl;
    }

    Node* search(const T val) {
        if (head == NULL) {
            return NULL;
        }

        Node* current = head;
        do {
            if (current->data == val) {
                return current;
            }
            current = current->next;
        } while (current != head);

        return NULL;
    }

    int size() {
        return Size;
    }

    void insert_end(const T& value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            Node* last = head->prev;
            last->next = newNode;
            newNode->prev = last;
            newNode->next = head;
            head->prev = newNode;
        }

        Size++;
    }

    void delete_after(const T value) {
        if (head == NULL) {
            cout << "danh sach rong." << endl;
            return;
        }

        Node* current = head;
        do {
            if (current->data == value) {
                Node* toDelete = current->next;
                if (toDelete != head) {
                    current->next = toDelete->next;
                    toDelete->next->prev = current;
                    delete toDelete;
                    Size--;
                    return;
                } else {
                    cout << "khong tim thay phan tu sau gia tri cho truoc." << endl;
                    return;
                }
            }
            current = current->next;
        } while (current != head);

            cout << "gia tri khong duoc tim thay trong danh sach." << endl;
    }

    
private:
    
};

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    CircularlyDoublyLinkedList<int> circularListFromArray(arr, sizeof(arr) / sizeof(arr[0]));

    cout << "danh sach ban dau: ";
    circularListFromArray.display();

    circularListFromArray.insert_end(6);
    cout << "danh sach sau khi them 6 vao cuoi: ";
    circularListFromArray.display();

    int searchValue = 3;
    CircularlyDoublyLinkedList<int>::Node* foundNode = circularListFromArray.search(searchValue);
    if (foundNode != NULL) {
        cout << "tim thay gia tri " << searchValue << " trong danh sach." << endl;
    } else {
        cout << "khong tim thay gia tri " << searchValue << " trong danh sach." << endl;
    }

    int deleteAfterValue = 2;
    circularListFromArray.delete_after(deleteAfterValue);
    cout << "danh sach sau khi xoa phan tu sau " << deleteAfterValue << ": ";
    circularListFromArray.display();

    return 0;
}

