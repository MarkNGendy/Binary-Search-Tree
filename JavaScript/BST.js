var types = require('./Fruit');
let x = types.Fruit;
var orange = Object.create(x);
orange.weight = 5;
console.log(orange);


var BinarySearchTree = function(value) {
    var instance = Object.create(BinarySearchTree.prototype);
    instance.root = value;
    instance.left = undefined;
    instance.right = undefined;
    return instance;
};

BinarySearchTree.prototype.insert = function(value) {
    var node = BinarySearchTree(value);
    function traverse(tree) {
        if(tree.root.getWeight() > value.getWeight() && tree.left === undefined) {
            tree.left = node;
        } else if(tree.root.getWeight() > value.getWeight()) {
            traverse(tree.left);
        } else if(tree.root.getWeight() < value.getWeight() && tree.right === undefined) {
            tree.right = node;
        } else if(tree.root.getWeight() < value.getWeight()) {
            traverse(tree.right);
        }
    }
    traverse(this);
}

// var orange = Object.create(Fruit);
// orange.setWeight(5);
// orange.setColour("orange");
// orange.setType("Oval-Shaped");

// var banana = Object.create(Fruit);
// banana.setWeight(2);
// banana.setColour("orange");
// banana.setType("Oval-Shaped");

// var apple = Object.create(Fruit);
// apple.setWeight(3);
// apple.setColour("red");
// apple.setType("circular");

// var carrot = Object.create(Fruit);
// carrot.setWeight(7);
// carrot.setColour("sd");
// carrot.setType("no typr");

// var tree = BinarySearchTree(orange);
//  tree.insert(banana);
//  //console.log(tree);
//  tree.insert(apple);
//  tree.insert(carrot);
//  console.log(tree);