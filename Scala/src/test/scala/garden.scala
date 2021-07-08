import Fruits.conc.{apple, banana, blackberry, blueberry, cherry, grapes, mango, peach, raspberry, watermelon}
import Tree.FruitTree
import Fruits.Fruit

object garden {

  def planting : FruitTree = {
    val tree = new FruitTree
    tree.plant(new apple("tofa7a 1",10))
    tree.plant(new apple("tofa7a 2",3))
    tree.plant(new apple("tofa7a 3",15))
    tree.plant(new banana("moza 1",30))
    tree.plant(new banana("moza 2",5))
    tree.plant(new banana("moza 3",7))
    tree.plant(new blackberry("toota soda 1",2))
    tree.plant(new blackberry("toota soda 2",11))
    tree.plant(new blackberry("toota soda 3",9))
    tree.plant(new blueberry("toota zar2a 1",33))
    tree.plant(new blueberry("toota zar2a 2",21))
    tree.plant(new blueberry("toota zar2a 3",12))
    tree.plant(new cherry("kreza 1",4))
    tree.plant(new cherry("kreza 2",14))
    tree.plant(new cherry("kreza 3",31))
    tree.plant(new grapes("3enba 1",22))
    tree.plant(new grapes("3enba 2",6))
    tree.plant(new grapes("3enba 3",13))
    tree.plant(new mango("manga 1",16))
    tree.plant(new mango("manga 2",28))
    tree.plant(new mango("manga 3",23))
    tree.plant(new peach("5o5a 1",19))
    tree.plant(new peach("5o5a 2",36))
    tree.plant(new peach("5o5a 3",1))
    tree.plant(new raspberry("toota 7amra 1",17))
    tree.plant(new raspberry("toota 7amra 2",35))
    tree.plant(new raspberry("toota 7amra 3",8))
    tree.plant(new watermelon("bati5a 1",40))
    tree.plant(new watermelon("bati5a 2",18))
    tree.plant(new watermelon("bati5a 3",25))
    tree
  }

  def main(args: Array[String]): Unit = {

    var tree = planting
    tree.iterate

    println("\nbananas:")
    tree.filterByType("banana")

    println("\nberries:")
    tree.filterByType("berry")

    println("\ntiny")
    tree.filterByType("tiny")

    println("\n>15:")
    tree.filterByWeight(15)

    println("\n>20:")
    tree.filterByWeight(20)

    println("\nheaviest:")
    tree.findHeaviest match {
      case fruit: Fruit => fruit.disp()
        fruit.eat()
    }

    println("\nlightest:")
    tree.findLightest match {
      case fruit: Fruit => fruit.disp()
        fruit.eat()
    }

    tree.magnifyByType("berry",100)
    println("\nnew tree:")
    tree.iterate

    tree = planting

    tree.magnifyByType("uni seed",100)
    println("\nnew tree:")
    tree.iterate
    println("\nheaviest:")
    tree.findHeaviest match {
      case fruit: Fruit => fruit.disp()
        fruit.eat()
    }

  }

}
