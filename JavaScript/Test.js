var types = require('./Fruit');
var BST = require('./BST');
let BinarySearchTree = BST.BinarySearchTree;

var apple = Object.create(types.apple);
apple.weight = 4;
var banana = Object.create(types.banana);
banana.weight = 3;
var watermelon = Object.create(types.watermelon);
watermelon.weight = 50;
var mango = Object.create(types.mango);
mango.weight = 30;
var tree = BinarySearchTree(apple);
tree.insert(banana);
tree.insert(watermelon);
tree.insert(mango);
tree = tree.magnifyByType("oval-shaped", 50);
tree.iterate();