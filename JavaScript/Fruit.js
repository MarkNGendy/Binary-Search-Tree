var Fruit = {
    weight: 0
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

var apple = Object.create(manySeeds);

var mango = Object.create(uniSeed);
mango.color = "orange";
var peach = Object.create(uniSeed);
peach.color = "orange-red";
var apple = Object.create(manySeeds);
apple.color = "red";
var watermelon = Object.create(manySeeds);
watermelon.color = "green";
var banana = Object.create(elongated);
banana.color = "yellow";
var grapes = Object.create(tiny);
grapes.color = "purple";
var cherry = Object.create(tiny);
cherry.color = "red";
var blackberry = Object.create(berry);
blackberry.color = "black";
var blueberry = Object.create(berry);
blueberry.color = "blue";
var raspberry = Object.create(berry);
raspberry.color = "red";


module.exports = {
    Fruit: Fruit,
    elongated: elongated,
    ovalShaped: ovalShaped,
    tiny: tiny,
    uniSeed: uniSeed,
    manySeeds: manySeeds,
}
