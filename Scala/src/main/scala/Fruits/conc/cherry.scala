package Fruits.conc

import Fruits.abs.tinyFruit

class cherry(n: String, w: Int) extends tinyFruit {
  override var Type : String = "cherry"
  override var name: String = n+" "+Type
  override var weight: Int = w
  override var color: String = "red"

  override def eat(): Unit = println("eating cherry ... yummy !")
  override def display(): Unit = println("Hi I'm cherry")

}