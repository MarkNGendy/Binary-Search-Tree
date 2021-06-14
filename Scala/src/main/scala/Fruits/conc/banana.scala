package Fruits.conc

import Fruits.abs.elongatedFruit

class banana(n: String, w: Int) extends elongatedFruit {
  override var Type : String = "banana"
  override var name: String = n+" "+Type
  override var weight: Int = w
  override var color: String = "yellow"

  override def eat(): Unit = println("eating banana ... yummy !")
  override def display(): Unit = println("Hi I'm banana")

}