#include <iostream>
#include <list>


using namespace std;
list<int> sortedlist ;

class Fruit{
    public :
            int weight;
            Fruit *left ,*right;
    public :
        Fruit(); 
        Fruit(int);
        int getWeight();
        void setWeight(int);
        Fruit* insert(Fruit*, int);
        void Iterate(Fruit*);
        void ordered(Fruit*);
        Fruit* findHeaviest(Fruit*);
        Fruit* findLightest(Fruit*);
        Fruit* search(Fruit*,int);
        void filterByWeight(Fruit*,int);
};
//types
class OvalShapedFruits :public Fruit{

};

class TinyFruits :public Fruit{

};
class LargeFruits :public Fruit{

};
class NonOvalFruits :public Fruit {

};
class RoundFruits:public Fruit{

};
class Berry:public TinyFruits{

};
//fruits
class Grapes :public TinyFruits,public OvalShapedFruits{

};
class Mango :public OvalShapedFruits{

};
class Apples :public OvalShapedFruits{

};
class Avocado :public OvalShapedFruits{

};
class Watermelon :public LargeFruits,public RoundFruits{

};
class Blackberries:public Berry{

};
class Elderberries:public Berry{

};
class Gooseberries:public Berry{

};
class Blueberries:public Berry{

};
