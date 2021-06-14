package Fruits

import Fruits.conc.apple


object test{
  def main(args: Array[String]): Unit = {
    val br = new apple("bebo",5)
    br.eat()
    br.display()
    println(br.subType)
    println(br.Type)
  }
}