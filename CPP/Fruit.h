#include <string.h>
#include <iostream>
#include <list>




class Fruit  {
    protected :
            int weight;
            std::string type;
    public : 
            Fruit *left ,*right;
            
    public : 
        Fruit();
        Fruit(int);
        int getWeight();
        void setWeight(int);
        Fruit* getLeft();
        void setLeft(Fruit*);
        Fruit* getRight();
        void setRight(Fruit*);
        std:: string getType();
};
class Tree{
        public:
        Fruit* root;
        public:
                Tree(){root=NULL;}
                void insert(Fruit*);
                void insert(Fruit*,Fruit*);
                void Iterate();
                void Iterate(Fruit*);
                void ordered(Fruit*);
                Fruit* findHeaviest(Fruit*);
                Fruit* findLightest(Fruit*);
                Fruit* search(Fruit*,int);
                void filterByWeight(int);
                void filterByWeight(Fruit*,int);
                void filterByType(std::string);
                void filterByType(Fruit*,std::string);
                
};
//types
class OvalShapedFruits :virtual public Fruit{
        public :
                 std:: string getType();
                 OvalShapedFruits();
                 OvalShapedFruits(int);
};

class TinyFruits :virtual public Fruit{
        public :
                 std:: string getType();
                 TinyFruits();
                 TinyFruits(int);
};
class ElongatedFruits :virtual public Fruit{
        public :
                 std:: string getType();
                 ElongatedFruits();
                 ElongatedFruits(int);
};

class ManySeedsFruits :virtual public Fruit{
        public :
                 std:: string getType();
                 ManySeedsFruits();
                 ManySeedsFruits(int);
};
class UniSeedsFruits :virtual public Fruit{
        public :
                 std:: string getType();
                 UniSeedsFruits();
                 UniSeedsFruits(int);
};
class Berry:public TinyFruits{
        public :
                 std:: string getType();
                 Berry();
                 Berry(int);
};
//fruits
class Grapes :public TinyFruits,public ManySeedsFruits{
        public :
                 std:: string getType();
                  Grapes(int);
};
class Mango :public UniSeedsFruits , public OvalShapedFruits{
        public :
                 std:: string getType();
                  Mango(int);
};
class Apples :public ManySeedsFruits , OvalShapedFruits{
        public :
                 std:: string getType();
                  Apples(int);
};
class Avocado :public OvalShapedFruits,public UniSeedsFruits{
        public :
                 std:: string getType();
                 Avocado(int);
};
class Watermelon :public ManySeedsFruits , public OvalShapedFruits{
        public :
                 std:: string getType();
                  Watermelon(int);
};
class Blackberries:public Berry{
        public :
                 std:: string getType();
                 Blackberries(int);
};
class Elderberries:public Berry{
        public :
                 std:: string getType();
                Elderberries(int);
                  
};
class Blueberries:public Berry{
        public :
                 std:: string getType();
                 Blueberries(int);
};
class Banana :public ElongatedFruits{
        public :
                 std:: string getType();
                 Banana(int);
};
