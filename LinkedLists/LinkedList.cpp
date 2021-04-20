#include <iostream>
using namespace std;

class node {
public:
    int data;
    node * next;
    
};
class LL {
public:
    
    node * head;
    LL(){
        head = NULL;
    }
    void display(){
        node * p = head;
        while(p!=NULL){
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    }
    void InsertAtBig(int x){
        node * temp = new node;
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    // indexing starts from 0
    void InsertAtIndex(int x,int pos){
        if(pos<1||pos>size()-1) {
            cout<<"Enter Valid Index"<<endl;
            return ;
        }
        node *p = head;
        node *temp = new node;
        temp->data = x;
        temp->next = NULL;
        pos-=1;
        while(pos>0){
            pos--;p=p->next;
        }
        temp->next = p->next;
        p->next = temp;
        
    }
    int size(){
        int c=0;
        node * p = head;
        while(p!=NULL){
            c++;
            p=p->next;
        }
        return c;
    }
    void InsertAtEnd(int x){
        node *p = head;
        if(head==NULL) {
            node * temp = new node;
            temp->data = x;
            temp->next = NULL;
            head= temp;
        }
        else{
            while(p->next!=NULL){
                p = p->next;
            }
            node * temp = new node;
            temp->data = x;
            temp->next = NULL;
            p->next = temp;
        }
        
    }
    int remove(int pos){
        node * p = head;
        int value=-1;
        if (pos<0||pos>size()) return -1;
        if (head==NULL) return -1;
        node * temp=NULL;
        if(pos==0){
            temp =head;
            head = head->next;
            value = temp->data;
            delete temp;
            return value;
        }
        pos-=2;
        while(pos--){
            p=p->next;
        }
        temp = p->next;
        p->next = p->next->next;
        value = temp->data;
        delete temp;
        return value;
    }
};

int main(){
    LL ll;
    ll.InsertAtEnd(2);
    ll.InsertAtEnd(5);
    ll.InsertAtEnd(7);
    ll.InsertAtEnd(1);
    ll.display();
    ll.InsertAtBig(6);
    ll.display();
    ll.InsertAtIndex(122, 3);
    ll.display();
    ll.remove(0);
    ll.display();
    ll.remove(3);
    ll.display();
    
    return 0;
}
