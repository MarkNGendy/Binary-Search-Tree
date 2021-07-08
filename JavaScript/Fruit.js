var Fruit = {
    weight: 0,
    type: undefined,
    color: undefined,
    print : function() {
        console.log("Weight: " + this.weight + " grams" + "    Color: " + this.color + "  Type: " + this.type);
    },
    setColor : function() {
        this.color = null;
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
mango.setColor = function() {
    this.color = "orange"
}
mango.setColor();
var peach = Object.create(uniSeed);
peach.type = peach.type + " & peach";
peach.setColor = function() {
    this.color = "pale"
}
peach.setColor();
var apple = Object.create(manySeeds);
apple.type = apple.type + " & apple";
apple.setColor = function() {
    this.color = "red"
}
apple.setColor();
var watermelon = Object.create(manySeeds);
watermelon.type = watermelon.type + " & watermelon";
watermelon.setColor = function() {
    this.color = "green"
}
watermelon.setColor();
var banana = Object.create(elongated);
banana.type = banana.type + " & banana";
banana.setColor = function() {
    this.color = "yellow"
}
banana.setColor();
var grapes = Object.create(tiny);
grapes.type = grapes.type + " & grapes";
grapes.setColor = function() {
    this.color = "purple"
}
grapes.setColor();
var cherry = Object.create(tiny);
cherry.type = cherry.type + " & cherry";
cherry.setColor = function() {
    this.color = "red"
}
cherry.setColor();
var blackberry = Object.create(berry);
blackberry.type = blackberry.type + " & blackberry";
blackberry.setColor = function() {
    this.color = "black"
}
blackberry.setColor();
var blueberry = Object.create(berry);
blueberry.type = blueberry.type + " & blueberry";
blueberry.setColor = function() {
    this.color = "blue"
}
blueberry.setColor();
var raspberry = Object.create(berry);
raspberry.type = raspberry.type + " & raspberry";
raspberry.setColor = function() {
    this.color = "red"
}
raspberry.setColor();


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
