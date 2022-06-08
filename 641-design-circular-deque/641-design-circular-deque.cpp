class MyCircularDeque {
public:
    int *arr;
    int front=-1;
    int rear=-1;
    int size;
    MyCircularDeque(int k) {
        arr= new int[k];
        this->size=k;
    }
    
    bool insertFront(int value) {
        if(isFull())return false;
        else if(front==-1){
            front=rear=0;
            arr[front]=value;
            return true;
        }
        else if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=value;
            return true;
        }
        else front--;
        arr[front]=value;
        return true;
    }
    
    bool insertLast(int value) {
         if(isFull()){
             return false;}
        else if(front==-1){
            front=rear=0;
            arr[rear]=value;
            return true;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=value;
            return true;
        }
        else rear++;
        arr[rear]=value;
        return true;
    }
    
    bool deleteFront() {
        if(front==-1){
            return false;
        }
        else if(front==rear){
            front=rear=-1;
            return true;
        }
        else{
            front = (front+1)%size;
        }
        return true;
    }
    
    bool deleteLast() {
        if(front==-1){
            return false;
        }
        else if(front==rear){
            front=rear=-1;
            return true;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
        return true;
    }
    
    int getFront() {
        if(front==-1){
            return -1;
        }
        return arr[front];
    }
    
    int getRear() {
        if(rear==-1){
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if((rear+1)%size==front){
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */