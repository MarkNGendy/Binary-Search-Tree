package Fruits.conc

import Fruits.abs.tinyFruit

class grapes(n: String, w: Int) extends tinyFruit {
  override var Type : String = "grapes"
  override var name: String = n+" "+Type
  override var weight: Int = w
  override var color: String = "green"

  override def eat(): Unit = println("eating grapes ... yummy !")
  override def display(): Unit = println("Hi I'm grapes")

}