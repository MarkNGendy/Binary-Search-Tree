package Fruits

import Fruits.conc.{apple, banana, mango}


object test{
  def main(args: Array[String]): Unit = {
    val br = new apple("bebo",5)
    br.eat()
    br.display()
    println(br.subType)
    println(br.Type)
    val br2 = new banana("bebo",5)
    br2.eat()
    br2.display()
    println(br2.subType)
    println(br2.Type)
  }
}