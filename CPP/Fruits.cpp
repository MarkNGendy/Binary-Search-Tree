#include <string.h>
#include "Fruit.h"
#include <bits/stdc++.h>
using namespace std;

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
OvalShapedFruits :: OvalShapedFruits(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
OvalShapedFruits ::OvalShapedFruits()
{
}
UniSeedsFruits ::UniSeedsFruits(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
UniSeedsFruits ::UniSeedsFruits()
{
}
ElongatedFruits ::ElongatedFruits(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
ElongatedFruits ::ElongatedFruits()

{
}
ManySeedsFruits ::ManySeedsFruits(int weight){
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
ManySeedsFruits ::ManySeedsFruits()
   
{
}
TinyFruits ::TinyFruits(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
TinyFruits ::TinyFruits()
    
{
}
Berry ::Berry(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Berry ::Berry()
{
}
Mango ::Mango(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Grapes ::Grapes(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Avocado ::Avocado(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Apples ::Apples(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Blueberries ::Blueberries(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Blackberries ::Blackberries(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Watermelon ::Watermelon(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Elderberries ::Elderberries(int weight)
{
    this->weight=weight;
    this->left=NULL;
    this->right=NULL;
}
Banana ::Banana(int weight)
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
Fruit* Fruit:: getLeft(){
    return this->left;
}
void Fruit:: setLeft(Fruit* left){
            this->left=left;
}
Fruit* Fruit:: getRight(){
    return this->right;
}
void Fruit:: setRight(Fruit* right){
            this->right=right;
}
string Fruit:: getType(){
    return "Fruit";
}
void Fruit :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string OvalShapedFruits:: getType(){
    return "Oval Fruit";
}
void OvalShapedFruits :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string TinyFruits:: getType(){
    return "Tiny Fruit";
}
void TinyFruits :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string ManySeedsFruits:: getType(){
    return "ManySeeds Fruit";
}
void ManySeedsFruits :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string UniSeedsFruits:: getType(){
    return "UniSeeds Fruit";
}
void UniSeedsFruits:: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Berry:: getType(){
    return "Berry Tiny Fruit";
}
void Berry :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string ElongatedFruits:: getType(){
    return "Elongated Fruit";
}
void ElongatedFruits :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Mango:: getType(){
    return "Mango Uniseeds Oval Fruit";
}
void Mango:: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Apples:: getType(){
    return "Apple ManySeeds Oval Fruit";
}
void Apples:: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Watermelon:: getType(){
    return "Watermelon ManySeeds Oval Fruit";
}
void Watermelon :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Grapes:: getType(){
    return "Grape Tiny ManySeeds Fruit";
}
void Grapes :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Banana:: getType(){
    return "Banana Elongated Fruit";
}
void Banana :: eat(){
    cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Blackberries:: getType(){
    return "Blackberries Berry Tiny Fruit";
}
void Blackberries :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Blueberries:: getType(){
    return "Blueberries Berry Tiny Fruit";
}
void Blueberries :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Elderberries:: getType(){
    return "Elderberries Berry Tiny Fruit";
}
void Elderberries :: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
string Avocado :: getType(){
    return "Avocado UniSeeds Oval Fruit";
}
void Avocado:: eat(){
cout<<"My Type is "<< this->getType() << " and My Weight is "<<this->getWeight()<<"\n";
}
void Tree::insert(Fruit* leaf)
{    
    if(root==NULL)
        root=leaf;
    else 
        insert(root,leaf);
}
void Tree:: insert(Fruit* leaf, Fruit* key)
{
  if (key->getWeight() < leaf->getWeight()){
    if (leaf->getLeft() != NULL) {
      insert(leaf->getLeft(), key);
     
    } else {
      leaf->setLeft(key);
    }
  } else {
    if (leaf->getRight() != NULL) {
      insert(leaf->getRight(), key);
    } else {
      leaf->setRight(key);
    }
  }
}
void Tree ::Iterate()
{
    Iterate(this->root);
}
void Tree ::Iterate(Fruit* node)
{
    if (node==NULL) {
        return;
    }
    Iterate(node->left);
    cout<<"My Type is "<< node->getType() << " and My Weight is "<<node->getWeight()<<"\n";
    Iterate(node->right);
}

void Tree::findHeaviest(Fruit* root){
    while(root->right)
    {
        root=root->right;
    }
   cout<<"Heaviest : My Type is "<< root->getType() << " and My Weight is "<<root->getWeight()<<"\n";
}
void Tree::findHeaviest(){
    findHeaviest(root);
}
void Tree::findLightest(Fruit* root){
    while(root->left)
    {
        root=root->left;
    }
    cout<<"Lightest : My Type is "<< root->getType() << " and My Weight is "<<root->getWeight()<<"\n";
}
void Tree::findLightest(){
    findLightest(root);
}
Fruit* Tree::search(Fruit* root,int weight){
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
void Tree::filterByWeight(int weight){
    filterByWeight(root,weight);
}
void Tree::filterByWeight(Fruit* root,int weight){
       if (!root) {
        return;
    }
    filterByWeight(root->left,weight);
    if(root->getWeight()>weight){
       cout<<"My Type is "<< root->getType() << " and My Weight is "<<root->getWeight()<<"\n";
    }
    filterByWeight(root->right,weight);
}
void Tree::magnifyByType(string type,int weight,Fruit* r,vector<Fruit*>& lst)
{
    if (r == NULL)  return;
    queue<Fruit *> q;
    q.push(r);
    while (q.empty() == false)
    {
        Fruit *node = q.front();
         if(node->getType().find(type) != string::npos){
        node->setWeight(node->getWeight()+weight);
        }
        lst.push_back(node);
        
        if (node->left != NULL)
            q.push(node->left);

        if (node->right != NULL)
            q.push(node->right);
        q.pop();
    }
    
}
void Tree::magnifyByType(string type,int weight)
{
    vector<Fruit*> lst;
    magnifyByType(type,weight,root,lst);
    root =NULL;
    for(Fruit* i : lst)
    {
        i->setLeft(NULL);
        i->setRight(NULL);
        this->insert(i);
    }
}
void Tree::filterByType(string type){
     filterByType(root,type);
}
void Tree::filterByType(Fruit* root,string type){
       if (!root) {
        return;
    }
    filterByType(root->left,type);
    if(root->getType().find(type) != string::npos){
        cout<<"My Type is "<< root->getType() << " and My Weight is "<<root->getWeight()<<"\n";
    }
    filterByType(root->right,type);
}
int main(){
    Tree *b=new Tree();
     b->insert(new Fruit(50));
     b->insert(new Mango(30));
     b->insert(new Grapes(20));
     b->insert(new Blueberries(40));
     b->insert(new Blackberries(70));
     b->insert(new Avocado(65));
     b->insert(new Banana(90));
     cout<<" >>>>>>>>>Test Iterate<<<<<<<<<<\n";
     b->Iterate();
     cout<<"\n\n>>>>>>>>>>>Test FindHeaviest<<<<<<<<<<<<<\n";
     b->findHeaviest();
     cout<<"\n\n>>>>>>>>>>>>>>Test FindLightest <<<<<<<<<<<<<<<<<<<\n" ;
     b->findLightest();
     cout<<"\n\n>>>>>>>>>>>>>>>>Test FilterByWeight <<<<<<<<<<<<<\n";
     b->filterByWeight(50);
     cout<<"\n\n>>>>>>>>>>>>>>>>Test FilterByType [Tiny]<<<<<<<<<<<<<\n";
     b->filterByType("Tiny");
     cout<<"\n\n>>>>>>>>>>>>>>>>Test FilterByType [UniSeeds] <<<<<<<<<<<<<\n";
     b->filterByType("UniSeeds");
     cout<<"\n\n>>>>>>>>>>>>>>>>Test MagnifyByType <<<<<<<<<<<<<\n";
     b->magnifyByType("Tiny",40);
     b->Iterate();
    return 0;
}