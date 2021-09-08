#include "node.hpp"

int main() {
    int n,aux,op,N,NN,d;
    bool A,res;
    srand((unsigned)time(NULL));
    node k;
    nodeType* o=new nodeType;
    do{
        printf("\t\tLinked List Operations\n1. Insert at the beginning\n2. Insert at the end\n3. Insert before of X\n4. Insert after of X\n5. Delete first node\n6. Delete Last node\n7. Delete node X\n8. Delete node before X\n9. Delete node after X \n10. Disordered Search \n11. Order Search \nOption: ");

        std::cin>>op;
        switch(op){
            case 1:  std::cout<<"\n->Insert First<-"<<endl;

                std::cout<<"How many elements? ";
                std::cin>>n;
                for(int i=0;i<n;i++){
                    //Insert data by data
                    int data=rand()%100+1;
                    //printf("\nvalue: ");
                    //std::cin>>aux;
                    printf("\nData insert %i[%i]   ",i,data);
                    k.insertFirst(data);

                    k.display();
                }
                printf("\n\n");
                k.display();
                printf("\n\n");


                break;
            case 2:
                std::cout<<"\n->Insert Last<-"<<endl;

                printf("\nvalue: ");
                std::cin>>aux;
                printf("\nData insert [%i]   \n",aux);
                k.insertLast(aux);

                printf("\n\n");
                k.display();
                printf("\n\n");
                break;
            case 3:
                std::cout<<"\n->Insert before of X<-"<<endl;

                printf("\nSelect number: ");
                std::cin>>N;
                printf("Number to insert: ");
                std::cin>>NN;
                k.insertBeforeOfX(N,NN);

                printf("\n");
                k.display();
                printf("\n\n");
                break;
            case 4:
                std::cout<<"\n->Insert after of X<-"<<endl;

                printf("\nSelect number: ");
                std::cin>>N;
                printf("Number to insert: ");
                std::cin>>NN;
                k.insertAfterOfX(N,NN);

                printf("\n");
                k.display();
                printf("\n\n");
                break;
            case 5:
                std::cout<<"\n->Delete First node<-"<<endl;
                printf("\n\nNode deleted: ");
                  k.deleteFirst();
                printf("\n\n");
                  k.display();
                printf("\n\n");
                break;
            case 6:
                std::cout<<"\n->Delete Last node<-"<<endl;
                printf("\n\nNode deleted: ");
                  k.deleteLast();
                printf("\n\n");
                  k.display();
                printf("\n\n");
                    break;


            default:
                std::cout<<"Option incorrect"<<std::endl;
        }
    }while(op!=12);






    /*
        printf("\nvalue: ");
           std::cin>>aux;
          printf("\nData insert %i[%i]   ",i,aux);
          k.insertLast(aux);
  */

    return 0;
}
