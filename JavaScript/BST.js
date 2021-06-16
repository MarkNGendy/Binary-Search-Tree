

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
        if(tree.root.weight > value.weight && tree.left === undefined) {
            tree.left = node;
        } else if(tree.root.weight > value.weight) {
            traverse(tree.left);
        } else if(tree.root.weight < value.weight && tree.right === undefined) {
            tree.right = node;
        } else if(tree.root.weight < value.weight) {
            traverse(tree.right);
        }
    }
    traverse(this);
}

BinarySearchTree.prototype.checkType = function(node, type) {
    if(node.type.includes(type)) {
        node.print();
    }
}

BinarySearchTree.prototype.checkWeight = function(node, weight) {
    if(node.weight > weight) {
         node.print();
    }
}


BinarySearchTree.prototype.iterate = function() {
    function inOrderTraverse(tree) {
        if(tree == null || tree.root == null) {
            return null;
        }
        inOrderTraverse(tree.left);
        tree.root.print(tree.root.weight);
        inOrderTraverse(tree.right);
    }
    inOrderTraverse(this);
}

BinarySearchTree.prototype.filterByType = function(type, checkType) {
    function inOrderTraverse(tree) {
        if(tree == null || tree.root == null) {
            return null;
        }
        inOrderTraverse(tree.left);
        checkType(tree.root, type);
        inOrderTraverse(tree.right);
    }
    inOrderTraverse(this);
}

BinarySearchTree.prototype.filterByWeight = function(weight, checkWeight) {
    function inOrderTraverse(tree) {
        if(tree == null || tree.root == null) {
            return null;
        }
        inOrderTraverse(tree.left);
        checkWeight(tree.root, weight);
        inOrderTraverse(tree.right);
    }
    inOrderTraverse(this);
}

BinarySearchTree.prototype.magnifyByType = function(type, weight) {
    var list = [];
    function inOrderTraverse(tree) {
        if(tree == null || tree.root == null) {
            return null;
        }
        inOrderTraverse(tree.left);
        list.push(tree.root);
        inOrderTraverse(tree.right);
    }
    inOrderTraverse(this);
    for(var i = 0; i < list.length; i++) {
        if(list[i].type.includes(type)) {
            list[i].weight += weight; 
        }
    }
    var newTree = BinarySearchTree(list[0]);
    for(var i = 1; i < list.length; i++) {
        newTree.insert(list[i]);
    }
    return newTree;
}

BinarySearchTree.prototype.findHeaviest = function() {
    function getMostRight(tree) {
        if(tree.right === undefined) {
            return tree.root;
        }
        return getMostRight(tree.right);
    }
    return getMostRight(this);
}

BinarySearchTree.prototype.findLightest = function() {
    function getMostLeft(tree) {
        if(tree.left === undefined) {
            return tree.root;
        }
        return getMostLeft(tree.right);
    }
    return getMostLeft(this);
}

module.exports = {
    BinarySearchTree : BinarySearchTree
}


