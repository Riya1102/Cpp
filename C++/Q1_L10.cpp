#include <bits/stdc++.h>
using namespace std;
#define max_len 1000

void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}

class BST
{
    int tree[max_len];
    int no_of_elements = 0;
    int getRight(int parent)
    {
        return (tree[2 * parent + 2]);
    }
    int getLeft(int parent)
    {
        return (tree[2 * parent + 1]);
    }

public:
    void inOrder(int index)
    {
        if (index >= 0 && tree[index] != -1)
        {
            inOrder(2 * index + 1);
            cout << tree[index] << " ";
            inOrder(2 * index + 2);
        }
    }
    void getInorderSequence(){
        inOrder(0);
    }
    void printTree()
    {
        cout<<"\n";
        for (int i = 0; i < max_len; i++)
        {
            if (tree[i] != -1){
                cout << i << " " << tree[i] << "\n";
            }
        }
        cout << "\n";
    }
    void init()
    {
        for (int i = 0; i < max_len; i++)
        {
            tree[i] = -1;
        }
    }
    int search(int data)
    {
        for (int i = 0; i < max_len; i++)
        {
            if (tree[i] == data)
            {
                return i;
            }
        }
        return -1;
    }
    void insertElement(int parent, int data, int parentIndex)
    {
        if (data > parent)
        {
            if (getRight(parentIndex) != -1)
            {
                return insertElement(getRight(parentIndex), data, 2 * parentIndex + 2);
            }
            else
            {
                tree[2 * parentIndex + 2] = data;
            }
        }
        else
        {
            if (getLeft(parentIndex) != -1)
            {
                return insertElement(getLeft(parentIndex), data, 2 * parentIndex + 1);
            }
            else
            {
                tree[2 * parentIndex + 1] = data;
            }
        }
    }
    bool insert(int data)
    {
        if(tree[0] == -1){
            tree[0] = data;
            return true;
        }
        if (search(data) == -1)
        {
            no_of_elements++;
            insertElement(tree[0], data, 0);
            return true;
        }
        return false;
    }
    void reBalanceBST(int index1,int index2){
        int l1 = 2*index1 + 1,r1 = 2*index1 + 2;
        int l2 = 2*index2 + 1,r2 = 2*index2 + 2;
        if(tree[l2] == -1 && tree[r2] == -1){
            return;
        }
        swap(tree[l1],tree[l2]);
        swap(tree[r1],tree[r2]);
        reBalanceBST(index2,l2);
        reBalanceBST(index2,r2);
    }
    int inorderSuccessor(int right){
        int index = right;
        while(tree[index] != -1 && tree[2*index + 1] != -1){
            index = 2*index + 1;
        }
        return index;
    }
    void deleteNode(int data,int index){
        if(data > tree[index]){
            deleteNode(data,2*index+2);
        }else if(data < tree[index]){
            deleteNode(data,2*index+1);
        }else{
            int right = 2*index+2,left = 2*index+1;
            if(tree[right] == -1 and tree[left] == -1){
                tree[index] = -1;
                return;
            }else if(tree[right] == -1){
                tree[index] = -1;
                swap(tree[index],tree[left]);
                reBalanceBST(index,left);
            }else if(tree[left] == -1){
                tree[index] = -1;
                swap(tree[index],tree[right]);
                reBalanceBST(index,right);
            }else{
                int inSucc = inorderSuccessor(right);
                swap(tree[index],tree[inSucc]);
                deleteNode(tree[inSucc],right);
            }
        }
    }
};

int main()
{
    system("cls");
    BST aTree;
    aTree.init();
    do
    {
        int choice = 0;
        cout << "\t\tPlease enter your choice : \n1. to insert element\n2. to delete element\n3. to search element.\n0. to print inorder sequence\nEnter any number to exit.\n\n\t\t Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int data;
            cout << "\tEnter element to insert.\n Choice : ";
            cin >> data;
            aTree.insert(data) ? cout << "Successfully inserted element!\n" : cout << "Same element already exists\n";
            break;
        case 2:
            cout << "\tEnter element to delete.\n Choice : ";
            cin >> data;
            if(aTree.search(data) == -1){
                cout<<"Element do not exists\n";
                break;
            }
            aTree.deleteNode(data,0);
            break;
        case 3:
            cout << "\tEnter element to search.\n Choice : ";
            cin >> data;
            if(aTree.search(data) != -1){
                cout<<"Element found\n";
            }else{
                cout<<"Element not found\n";
            }
            break;
        case 0:
            cout<<"Inorder Sequence : ";
            aTree.getInorderSequence();
            cout<<"\n";
            break;
        default:
            exit(0);
        }
    } while (true);
    return 0;
}