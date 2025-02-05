#include <stdio.h> 

int main()
{
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
	  
	  void SLL_AppendNode(Node** Head, Node* NewNode)
	  {
	  	
	  	// 헤드 노드가 NULL이라면 새로운 노드가 Head가 된다.
		  if( (*Head) == NULL)
		  {
		  	*Head = NewNode;
		   } 
		   else
		   {
		   	// 테일을 찾아 NewNode를 연결한다.
			   Node* Tail = (*Head) ;
			   while (Tail -> NextNode != NULL)
			   {
			   	Tail = Tail->NextNode;
			   }
		   }
	  }
	  Node* List = NuLL;
	  Node* NewNode = NULL;
	  NewNode = SLL_CreateNode
	 
	return 0;
}