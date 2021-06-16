var types = require('./Fruit');
var BST = require('./BST');
let BinarySearchTree = BST.BinarySearchTree;

/* Creating some fruits */
var blueberry = Object.create(types.blueberry);
blueberry.weight = 3;
var raspberry = Object.create(types.raspberry);
raspberry.weight = 1;
var blackberry = Object.create(types.blackberry);
blackberry.weight = 2;
var apple = Object.create(types.apple);
apple.weight = 20;
var banana = Object.create(types.banana);
banana.weight = 18;
var watermelon = Object.create(types.watermelon);
watermelon.weight = 100;
var mango = Object.create(types.mango);
mango.weight = 40;
var peach = Object.create(types.peach);
peach.weight = 25;
var grapes = Object.create(types.grapes);
grapes.weight = 5;
var cherry = Object.create(types.cherry);
cherry.weight = 7;


/* Inserting fruits to tree */
var tree = BinarySearchTree(apple);
tree.insert(banana);
tree.insert(watermelon);
tree.insert(mango);
tree.insert(peach);
tree.insert(grapes);
tree.insert(cherry);
tree.insert(blueberry);
tree.insert(blackberry);
tree.insert(raspberry);

/* Testing iterate() function */
console.log("***** Testing iterate function *****");
tree.iterate();
console.log("\n");

/* Testing filterByType() function */
console.log("***** Testing filter by type function *****");
console.log("***** filtering by oval-shaped type *****");
tree.filterByType("oval-shaped", tree.checkType);
console.log("***** filtering by apple type *****");
tree.filterByType("apple", tree.checkType);

console.log("\n");

/* Testing filterByWeight() function */
console.log("***** Testing filter by weight function *****");
console.log("***** filtering by weight greater than 10 grams *****");
tree.filterByWeight(10, tree.checkWeight);
console.log("***** filtering by weight greater than 20 grams *****");
tree.filterByWeight(20, tree.checkWeight);
console.log("\n");

/* Testing magnifyBtyType() function */
console.log("***** Testing magnify by type function *****");
console.log("***** magnifying oval-shaped fruits with 10 grams *****");
tree = tree.magnifyByType("oval-shaped", 10);
tree.iterate();
console.log("\n");

/* Testing findHeaviest() function */
console.log("***** Testing find heaviest function *****");
tree.findHeaviest().print();
console.log("\n");

/* Testing findLightest() function */
console.log("***** Testing find lightest function *****");
tree.findLightest().print();
console.log("\n");


// tree = tree.magnifyByType("oval-shaped", 50);