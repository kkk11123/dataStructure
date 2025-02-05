#include <stdio.h> 
#include <stdlib.h>


	typedef int ElementType;
	
	typedef struct tagNote
	{
		ElementType Data; //데이터
		struct tagNote* NextNode; //다음 노드 
	 } Node;
	 
	 //Node 생성
	 Node* SLL_CreateNode(ElementType NewData)
	 {
	 	
	 	Node* NewNode = (Node*)malloc(sizeof(Node));
	 	
	 	NewNode -> Data = NewData; //데이터를 저장한다. 
	 	NewNode -> NextNode = NULL; //다음 노드에 대한 포인터는 NULL로 초기화한다. 
	 	
	 	return NewNode; //노드의 주소를 반환 
	  }
	  
	  //Node 삭제 
	  void SLL_DestroyNode(Node* Node)
	  {
	  	free(Node);
	  }
	  
	  // Node 추가
        void SLL_AppendNode(Node** Head, Node* NewNode) {
            if (*Head == NULL) {
                *Head = NewNode; // 헤드가 비어있다면 새 노드가 헤드가 됨
            } else {
                // 마지막 노드를 찾아 NewNode를 연결
                Node* Tail = *Head;
                while (Tail->NextNode != NULL) {
                    Tail = Tail->NextNode;
                }
                Tail->NextNode = NewNode; // 마지막 노드의 NextNode를 새 노드로 연결
            }
        }

    int main()
    {
	  Node* List = NULL;
	  Node* NewNode = NULL;
	  NewNode = SLL_CreateNode(117); //자유 저장소에 노드 생성
      SLL_AppendNode(&List, NewNode); //생성한 노드를 List에 추가
      NewNode = SLL_CreateNode(119); //자유 저장소에 또 다른 노드 생성
      SLL_AppendNode(&List, NewNode); //생성한 노드를 List에 추가
	  
    }
