#include <string.h>
#include <iostream>
#include <bits/stdc++.h>


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
        virtual std:: string getType();
        virtual void eat();
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
                void findHeaviest(Fruit*);
                void findLightest(Fruit*);
                void findHeaviest();
                void findLightest();
                Fruit* search(Fruit*,int);
                void filterByWeight(int);
                void filterByWeight(Fruit*,int);
                void magnifyByType(std::string,int,Fruit*,std::vector<Fruit*>&);
                void magnifyByType(std::string,int);
                void filterByType(std::string);
                void filterByType(Fruit*,std::string);
                
};
//types
class OvalShapedFruits :virtual public Fruit{
        public :
                virtual std:: string getType();
                virtual void eat();
                 OvalShapedFruits();
                 OvalShapedFruits(int);
};

class TinyFruits :virtual public Fruit{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 TinyFruits();
                 TinyFruits(int);
};
class ElongatedFruits :virtual public Fruit{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 ElongatedFruits();
                 ElongatedFruits(int);
};

class ManySeedsFruits :virtual public Fruit{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 ManySeedsFruits();
                 ManySeedsFruits(int);
};
class UniSeedsFruits :virtual public Fruit{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 UniSeedsFruits();
                 UniSeedsFruits(int);
};
class Berry:public TinyFruits{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 Berry();
                 Berry(int);
};
//fruits
class Grapes :public TinyFruits,public ManySeedsFruits{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 Grapes(int);
};
class Mango :public UniSeedsFruits , public OvalShapedFruits{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                  Mango(int);
};
class Apples :public ManySeedsFruits , OvalShapedFruits{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                  Apples(int);
};
class Avocado :public OvalShapedFruits,public UniSeedsFruits{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 Avocado(int);
};
class Watermelon :public ManySeedsFruits , public OvalShapedFruits{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                  Watermelon(int);
};
class Blackberries:public Berry{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 Blackberries(int);
};
class Elderberries:public Berry{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                Elderberries(int);
                  
};
class Blueberries:public Berry{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 Blueberries(int);
};
class Banana :public ElongatedFruits{
        public :
                 virtual std:: string getType();
                 virtual void eat();
                 Banana(int);
};
