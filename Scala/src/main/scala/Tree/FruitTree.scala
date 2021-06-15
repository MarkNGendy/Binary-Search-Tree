package Tree

import Fruits.Fruit
import Fruits.conc.{apple, banana}

class FruitTree{

  var tree = new BST[Int, Fruit]

  def plant(fruit: Fruit):Unit = tree.insert(fruit.weight,fruit)

  def iterate : Unit = tree.getElements.foreach(print)

  def filterByType(Type :String): Unit = tree.getElements.filter(_.Type.contains(Type)).foreach(print)

  def filterByWeight(weight: Int): Unit = tree.getElements.filter(_.weight>=weight).foreach(print)

  def magnifyByType(Type :String, weight :Int): Unit ={
    val l = tree.getElements
    tree=new BST[Int,Fruit]
    for(f<-l){
      if(f.Type.contains(Type)) f.weight+=weight
      tree.insert(f.weight,f)
    }
  }

  def findHeaviest : Option[Fruit] = tree.max

  def findLightest : Option[Fruit] = tree.min

  def getFruits : List[Fruit] = tree.getElements

  def print : Fruit => Unit ={
    var i :Int = 1
    fruit => {
      println(i+"- "+fruit.name+" weight= "+fruit.weight)
      i+=1
    }
  }

}

object test{
  def main(args: Array[String]): Unit = {
    var tr = new FruitTree
    tr.plant(new apple("kk",5))
    tr.plant(new apple("kk",1))
    tr.plant(new apple("kk",6))
    tr.plant(new apple("kk",2))
    tr.plant(new apple("kk",3))
    tr.plant(new apple("kk",9))
    tr.plant(new banana("bb",9))
    tr.plant(new banana("bb",4))
    tr.plant(new banana("bb",7))
    tr.plant(new banana("bb",12))

    tr.iterate
    tr.magnifyByType("banana",100)
    tr.iterate
    println(tr.findHeaviest)
  }
}
