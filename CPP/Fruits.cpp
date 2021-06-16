#include <string.h>
#include "Fruit.h"
#include <list>
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
string OvalShapedFruits:: getType(){
    return "Oval Fruit";
}
string TinyFruits:: getType(){
    return "Tiny Fruit";
}
string ManySeedsFruits:: getType(){
    return "ManySeeds Fruit";
}
string UniSeedsFruits:: getType(){
    return "UniSeeds Fruit";
}
string Berry:: getType(){
    return "Berry Tiny Fruit";
}
string ElongatedFruits:: getType(){
    return "Elongated Fruit";
}
string Mango:: getType(){
    return "Mango Uniseeds Oval Fruit";
}
string Apples:: getType(){
    return "Apple ManySeeds Oval Fruit";
}
string Watermelon:: getType(){
    return "Watermelon ManySeeds Oval Fruit";
}
string Grapes:: getType(){
    return "Grape Tiny ManySeeds Fruit";
}
string Banana:: getType(){
    return "Banana Elongated Fruit";
}
string Blackberries:: getType(){
    return "Blackberries Berry Tiny Fruit";
}
string Blueberries:: getType(){
    return "Blueberries Berry Tiny Fruit";
}
string Elderberries:: getType(){
    return "Elderberries Berry Tiny Fruit";
}
string Avocado :: getType(){
    return "Avocado UniSeeds Oval Fruit";
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
    cout << node->getWeight() << endl;
    Iterate(node->right);
}

Fruit* Tree::findHeaviest(Fruit* root){
    while(root->right)
    {
        root=root->right;
    }
    return root;
}
Fruit* Tree::findLightest(Fruit* root){
    while(root->left)
    {
        root=root->left;
    }
    return root;
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
        cout << root->getWeight() << endl;
    }
    filterByWeight(root->right,weight);
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
        cout << root->getWeight() << "\n";
    }
    filterByType(root->right,type);
}
int main(){
    Tree *b=new Tree();
    Mango* M=new Mango(30);
    Grapes* G = new Grapes(20);
    Blueberries* B = new Blueberries(40);
     Blackberries* Bl = new Blackberries(70);
     Avocado* a = new Avocado(60);
     Banana* ba=new Banana(80);
     b->insert(new Fruit(50));
     b->insert(M);
     b->insert(G);
     b->insert(B);
     b->insert(Bl);
     b->insert(a);
     b->insert(ba);
     //b->Iterate();
      
    b->filterByType("Fruit");
    //Fruit* test=b.findHeaviest(root);
    //Fruit* test2=b.findLightest(root);
    //cout << "highest"<<test->getWeight()<<" lightest"<<test2->getWeight();
    //b.Iterate(root);
    return 0;
}