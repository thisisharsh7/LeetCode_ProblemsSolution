class MyCircularQueue {
public:
    int *arr;
    int rear=-1;
    int front=-1;
    int size=0;
    MyCircularQueue(int k) {
        arr = new int[k];
        this->size=k;
    }
    
    bool enQueue(int value) {
        //pushing element
        if(front==-1 && rear ==-1){
            front=rear=0;
            arr[rear]=value;
            return true;
        }
        else if(isFull()){
            return false;
        }
        else{
            rear = (rear+1)%size;
            arr[rear]=value;
            return true;
        }
        return true;
    }
    
    bool deQueue() {
        //poping element
        if(front==-1){
        return false;}
        else if(front==rear){//single element in queue
            front=rear=-1;
            return true;}
        else{
            front = (front+1)%size;
            return true;
        }
        return true;
    }
    
    int Front() {
        //element on top
        if(front==-1){
            return -1;}
        return arr[front];
    }
    
    int Rear() {
        //element on rear
        if(rear==-1){
            return -1;}
        return arr[rear];
    }
    
    bool isEmpty() {
        //queue empty
        if(front==-1 && rear==-1){
            return true;}
        return false;
    }
    
    bool isFull() {
        //queue full
        return (rear+1)%size== front;   
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */