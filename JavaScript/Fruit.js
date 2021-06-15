var Fruit = {
    weight: 0,
    print : function() {
        console.log("I am a fruit type with weight 0");
    }  
}
var elongated = Object.create(Fruit);
elongated.type = "elongated";

var ovalShaped = Object.create(Fruit);
ovalShaped.type = "oval-shaped";

var tiny = Object.create(Fruit);
tiny.type = "tiny";

var uniSeed = Object.create(ovalShaped);
uniSeed.type = uniSeed.type + " & uni-seed";

var manySeeds = Object.create(ovalShaped);
manySeeds.type = manySeeds.type + " & many-seeds";

var berry = Object.create(tiny);
berry.type = berry.type + " & berry";

//creating some fruits of different types
var mango = Object.create(uniSeed);
mango.type = mango.type + " & mango";
mango.print = function(weight) {
    console.log("I am a (" + mango.type + ") type fruit & my weight is " + weight + " grams.");
}
var peach = Object.create(uniSeed);
peach.type = peach.type + " & peach";
peach.print = function(weight) {
    console.log("I am a (" + peach.type + ") type fruit & my weight is " + weight + " grams.");
}
var apple = Object.create(manySeeds);
apple.type = apple.type + " & apple";
apple.print = function(weight) {
    console.log("I am (" + apple.type + ") type fruit & my weight is " + weight + " grams.");
}
var watermelon = Object.create(manySeeds);
watermelon.type = watermelon.type + " & watermelon";
watermelon.print = function(weight) {
    console.log("I am a (" + watermelon.type + ") type fruit & my weight is " + weight + " grams.");
}
var banana = Object.create(elongated);
banana.type = banana.type + " & banana";
banana.print = function(weight) {
    console.log("I am a (" + banana.type + ") type fruit & my weight is " + weight + " grams.");
}
var grapes = Object.create(tiny);
grapes.type = grapes.type + " & grapes";
grapes.print = function(weight) {
    console.log("I am a (" + grapes.type + ") type fruit & my weight is " + weight + " grams.");
}
var cherry = Object.create(tiny);
cherry.type = cherry.type + " & cherry";
cherry.print = function(weight) {
    console.log("I am a (" + cherry.type + ") type fruit & my weight is " + weight + " grams.");
}
var blackberry = Object.create(berry);
blackberry.type = blackberry.type + " & blackberry";
blackberry.print = function(weight) {
    console.log("I am a (" + blackberry.type + ") type fruit & my weight is " + weight + " grams.");
}
var blueberry = Object.create(berry);
blueberry.type = blueberry.type + " & blueberry";
blueberry.print = function(weight) {
    console.log("I am a (" + blueberry.type + ") type fruit & my weight is " + weight + " grams.");
}
var raspberry = Object.create(berry);
raspberry.type = raspberry.type + " & raspberry";
raspberry.print = function(weight) {
    console.log("I am a (" + raspberry.type + ") type fruit & my weight is " + weight + " grams.");
}


module.exports = {
    Fruit: Fruit,
    elongated: elongated,
    ovalShaped: ovalShaped,
    tiny: tiny,
    uniSeed: uniSeed,
    manySeeds: manySeeds,
    apple: apple,
    peach: peach,
    banana: banana,
    blueberry: blueberry,
    raspberry: raspberry,
    blackberry: blackberry,
    watermelon: watermelon,
    mango: mango,
    grapes: grapes,
    cherry: cherry
}
