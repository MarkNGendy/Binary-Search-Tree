#include "Fruit.h"

Fruit ::Fruit()
    : weight(0)
    , left(NULL)
    , right(NULL)
{
}
Fruit ::Fruit(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
int Fruit:: getWeight(){
    return this->weight;
}
void Fruit:: setWeight(int weight){
            this->weight=weight;
}
Fruit* Fruit::insert(Fruit* root,int weight)
{
    if (!root)
        return new Fruit(weight);
    
    if (weight > root->getWeight())
        root->right = insert(root->right, weight);

    else
        root->left = insert(root->left, weight);

    return root;
}
void Fruit ::Iterate(Fruit* root)
{
    if (!root) {
        return;
    }
    Iterate(root->left);
    cout << root->weight << endl;
    Iterate(root->right);
}
void Fruit ::ordered(Fruit* root)
{
    if (!root) {
        return;
    }
    ordered(root->left);
    sortedlist.push_back(root->weight) ;
    ordered(root->right);
}
Fruit* Fruit::findHeaviest(Fruit* root){
    while(root->right)
    {
        root=root->right;
    }
    return root;
}
Fruit* Fruit::findLightest(Fruit* root){
    while(root->left)
    {
        root=root->left;
    }
    return root;
}
Fruit* Fruit::search(Fruit* root,int weight){
		while (root) {
			if (weight == root->getWeight()) {
				return root;
			} else if (weight > root->getWeight()) {
				root = root->right;
			} else {
				root = root->left;
			}
		}
		return NULL;
}
void Fruit::filterByWeight(Fruit* root,int weight){
        ordered(root);
        list <int> :: iterator it;
        int count =1;
        if(findHeaviest(root)->weight == weight )
        {
            cout<<"This is the biggest Node\n";
            return;
        }
        for(it=sortedlist.begin();it != sortedlist.end();it++)
        {
            if(weight < *it)
            { 
                cout << "Node "<<count<<" : "<<*it<<"\n";
                count++; 
            }
        }
}

int main(){
    Fruit b;
    Fruit *root = NULL;
    Mango* m;
    root = b.insert(root, 50);
    b.insert(m, 30);
    b.insert(root, 20);
    b.insert(root, 40);
    b.insert(root, 70);
    b.insert(root, 60);
    b.insert(root, 80);
    //b.Iterate(root);
    //Fruit* test=b.findHeaviest(root);
    //Fruit* test2=b.findLightest(root);
    //cout << "highest"<<test->getWeight()<<" lightest"<<test2->getWeight();
    b.filterByWeight(root,50);
    return 0;
}