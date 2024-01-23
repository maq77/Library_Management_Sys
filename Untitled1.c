/*class LinkedList
{
        Node *head,*tail;
        int size=0;
    public:
        LinkedList(){
        head = NULL;
        tail = NULL;
        }
       void  push(int data){
        Node *tmp = new Node;
        tmp->data = data;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
        size++;
        }
       void  print(){

         Node *tmp;
         tmp = head;
         while(tmp != NULL){
            cout<<tmp->data<<endl;
            tmp = tmp->next;
         }


       }
       Node* get_head(){
       return head;
       }
       Node* get_tail(){
       return tail;
       }
       int get_size(){
       return size;
       }
       void push_front(int data){
         Node *temp = new Node;
         temp->next = head;
         temp->data = data;
         head = temp;
         size++;

       }
       void push_back(int data){
         Node *temp, *temp_last;
         temp->data = data;
         temp_last = head;
         while(temp_last->next != NULL){
            temp_last = temp_last->next;
         }
         temp_last->next = temp;
         tail = temp;
         temp->next = NULL;
         size++;


       }
       void delete_node(int index){
       Node *temp = Node_at(index);
       Node *temp_next = temp->next;
       if(index==0){
        head = temp->next;
        return;
       }
       else if(index = size-1){
        Node *temp_prev = Node_at(index-1);
        tail = temp_prev;
        temp_prev->next = NULL;
        return;
       }
       else{
       Node *temp_prev = Node_at(index-1);
       temp_prev->next = temp_next;
       }
       delete temp;
       }
       int at(int n){
           Node * temp = head;
         if(n==0){
            return temp->data;
         }
         try{
         if(n>size-1){
            throw (n);
         }
         }
         catch(int num){
         cout<<"Out of Range !"<<endl;
         cout<<"Size of Linked List is "<<size<<endl;
         }


         for(int i=0;i<n;i++){
            temp = temp->next;
         }
         return temp->data;

       }
      Node*  Node_at(int n){
          Node* temp = head;
         if(n==0){
            return temp;
         }
         try{
         if(n>size-1){
            throw (n);
         }
         }
         catch(int num){
         cout<<"Out of Range !"<<endl;
         cout<<"Size of Linked List is "<<size<<endl;
         }


         for(int i=0;i<n;i++){
            temp = temp->next;
         }
         return temp;



       }




};
*/
