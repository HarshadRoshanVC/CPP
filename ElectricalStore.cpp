/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Tools{
    long ID;
    string Name;
    float Quantity;
    float Price;
};
struct Salesassistants{
    string Name;
    string Division;
};
struct NewOrder{
    Tools tool;
    Salesassistants assistant;
    float reset;
};
NewOrder AddOrder(){
    NewOrder temp;
    cout<<"Enter order details"<<endl;
    cout<<"Tool ID:";
    cin>>temp.tool.ID;
    cout<<"Tool Name:";
    cin>>temp.tool.Name;
    cout<<"Tool Quantity:";
    cin>>temp.tool.Quantity;
    cout<<"Tool Price:";
    cin>>temp.tool.Price;
    cout<<"Salesassistants Name:";
    cin>>temp.assistant.Name;
    cout<<"Salesassistants Division:";
    cin>>temp.assistant.Division;
    cout<<"Order reset:";
    cin>>temp.reset;
    return temp;
}
void printOrder(const NewOrder & order){
    cout<<"____________________________"<<endl;
    cout<<"Tool ID:"<<order.tool.ID<<endl;
    cout<<"Tool Name:"<<order.tool.Name<<endl;
    cout<<"Tool Quantity:"<<order.tool.Quantity<<endl;
    cout<<"Tool Price:"<<order.tool.Price<<endl;
    cout<<"Salesassistants Name:"<<order.assistant.Name<<endl;
    cout<<"Salesassistants Division:"<<order.assistant.Division<<endl;
    cout<<"Order reset:"<<order.reset<<endl;
    cout<<"____________________________"<<endl;
}

void SearchSalesAssistantByName(const NewOrder orders[],string Name){
    int flag=0;
    cout<<"____________________________"<<endl;
    for(int i=0;i<10;i++){
        if(orders[i].assistant.Name==Name){
            flag=1;
            cout<<"Salesassistants Name:"<<orders[i].assistant.Name<<endl;
            cout<<"Salesassistants Division:"<<orders[i].assistant.Division<<endl;
        }
    }
    if(flag==0)
        cout<<"No Sales assistant with name:"<<Name<endl;
    cout<<"____________________________"<<endl;
}

void SearchSalesAssistantByDivision(const NewOrder orders[],string Division){
    int flag =0;
    cout<<"____________________________"<<endl;
    for(int i=0;i<10;i++){
        if(orders[i].assistant.Division==Division){
            flag=1;
            cout<<"Salesassistants Name:"<<orders[i].assistant.Name<<endl;
            cout<<"Salesassistants Division:"<<orders[i].assistant.Division<<endl;
        }
    }
    if(flag==0)
        cout<<"No Sales assistant with Division:"<<Division<endl;
    cout<<"____________________________"<<endl;
}
void printTool(Tools tool){
    cout<<"____________________________"<<endl;
    cout<<"Tool ID:"<<tool.ID<<endl;
    cout<<"Tool Name:"<<tool.Name<<endl;
    cout<<"Tool Quantity:"<<tool.Quantity<<endl;
    cout<<"Tool Price:"<<tool.Price<<endl;
    cout<<"____________________________"<<endl;
}
void SearchToolsByName(const NewOrder orders[],string Name){
    if flag=0;
    for(int i=0;i<10;i++){
        if(orders[i].tool.Name==Name){
            flag=1;
            printTool(orders[i].tool);
            break;
        }
    }
    if(flag==0)
        cout<<"No tool with Name:"<<Name<<endl;
}
void SearchToolsByID(const NewOrder orders[],long ID){
    int flag=0;
    for(int i=0;i<10;i++){
        if(orders[i].tool.ID==ID){
            flag=1;
            printTool(orders[i].tool);
            break;
        }
    }
    if(flag==0)
        cout<<"No tool with Name:"<<Name<<endl;
}
void SearchToolsByPrice(const NewOrder orders[],double Price){
    for(int i=0;i<10;i++){
        if(orders[i].tool.Price>Price){
            printTool(orders[i].tool); 
        }
    }
}
void SearchToolsByQuantity(const NewOrder orders[],double Quantity){
    for(int i=0;i<10;i++){
        if(orders[i].tool.Quantity>Quantity){
            printTool(orders[i].tool); 
        }
    }
}
void SearchOrderByReset(const NewOrder orders[],float reset){
    for(int i=0;i<10;i++){
        if(orders[i].reset>reset){
            printOrder(orders[i]); 
        }
    }
}

int main()
{
    NewOrder orders[10];
    bool done = false;
    while (!done)
    {
        cout << "Electrical Tools Store" <<endl
        << "1. Fill data.\n"
        << "2. Display data.\n"
        << "3. Search Salesassistants by Name\n"
        << "4. Search Salesassistants by Division.\n"
        << "5. Search Tools by Name.\n"
        << "6. Search Tools by ID.\n"
        << "7. Search Tools by Price.\n"
        << "8. Search Tools by Quantity.\n"
        << "9. Search Order by reset.\n"
        << "10. Exit.\n";
        int choice;
        cin >> choice;
        if(choice==1){
            for(int i=0;i<1;i++){
                orders[i]=AddOrder();
            }
        }else if(choice==2){
            for(int i=0;i<10;i++){
                printOrder(orders[i]);
            }
        }else if(choice==3){
            string name;
            cout<<"Sales assistants Name :";
            cin>>name;
            SearchSalesAssistantByName(orders,name);
        }else if(choice==4){
            string division;
            cout<<"Sales assistants Division :";
            cin>>division;
            SearchSalesAssistantByDivision(orders,division);
        }else if(choice==5){
            string name;
            cout<<"Tool Name :";
            cin>>name;
            SearchToolsByName(orders,name);
        }else if(choice==6){
            long ID;
            cout<<"Tool ID :";
            cin>>ID;
            SearchToolsByID(orders,ID);
        }else if(choice==7){
            SearchToolsByPrice(orders,100);
        }else if(choice==8){
            SearchToolsByQuantity(orders,500);
            
        }else if(choice==9){
            SearchOrderByReset(orders,700);  
        }
        else if(choice==10){
            done=true;
        }
    }
    cout<<"Hello World";

    return 0;
}
