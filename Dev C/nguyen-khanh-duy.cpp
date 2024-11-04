#include <iostream>
#include <vector>

class CSLLNode {
public:
    int data;
    CSLLNode* next;

    CSLLNode(int value) {
        data = value;
        next = NULL;
    }
};

class CSLinkedList {
private:
    CSLLNode* head;
    int size;

public:
    CSLinkedList(std::vector<int> values) {
        head = NULL;
        size = 0;

        // Th�m ph?n t? v�o danh s�ch t? vector
        for (size_t i = 0; i < values.size(); ++i) {
            insert(values[i]);
        }
    }

    ~CSLinkedList() {
        // Gi?i ph�ng t?t c? c�c n�t trong danh s�ch
        CSLLNode* current = head;
        while (current != NULL) {
            CSLLNode* next = current->next;
            delete current;
            current = next;
        }
    }

    void display() {
        // Hi?n th? n?i dung c?a danh s�ch
        if (head == NULL) {
            std::cout << "Danh sach rong." << std::endl;
        } else {
            CSLLNode* current = head;
            do {
                std::cout << current->data << " ";
                current = current->next;
            } while (current != head);
            std::cout << std::endl;
        }
    }

    CSLLNode* search(int value) {
        // T?m ki?m ph?n t? �?u ti�n c� gi� tr? b?ng tham s? �?u v�o
        if (head == NULL) {
            return NULL;
        }

        CSLLNode* current = head;
        do {
            if (current->data == value) {
                return current;
            }
            current = current->next;
        } while (current != head);

        return NULL;
    }

    int getSize() {
        // Tr? v? k�ch th�?c c?a danh s�ch
        return size;
    }

    void insert(int value) {
        // Th�m m?t ph?n t? v�o cu?i danh s�ch
        CSLLNode* newNode = new CSLLNode(value);
        if (head == NULL) {
            head = newNode;
            head->next = head;
        } else {
            CSLLNode* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            tail->next = newNode;
            newNode->next = head;
        }
        size++;
    }

    void delete_beginning() {
        // X�a ph?n t? �?u danh s�ch
        if (head == NULL) {
            std::cout << "Danh sach rong. Khong co phan tu de xoa." << std::endl;
        } else {
            CSLLNode* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            CSLLNode* temp = head;
            if (head->next == head) {
                head = NULL;
            } else {
                head = head->next;
                tail->next = head;
            }
            delete temp;
            size--;
        }
    }
};

int main() {
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back(4);
    values.push_back(5);

    CSLinkedList csll(values);

    csll.display();  // Hi?n th? danh s�ch: 1 2 3 4 5

    CSLLNode* searchResult = csll.search(3);
    if (searchResult != NULL) {
        std::cout << "Tim thay phan tu co gia tri 3 tai dia chi: " << searchResult << std::endl;
    } else {
        std::cout << "Khong tim thay phan tu co gia tri 3 trong danh sach." << std::endl;
    }

    std::cout << "Kich thuoc cua danh sach: " << csll.getSize() << std::endl;  // K�ch th�?c c?a danh s�ch: 5

    csll.delete_beginning();
    csll.display();  // Hi?n th? danh s�ch sau khi x�a ph?n t? �?u: 2 3 4 5

    return 0;
}

