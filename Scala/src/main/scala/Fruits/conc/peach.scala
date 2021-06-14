package Fruits.conc

import Fruits.abs.uniSeed

class peach(n: String, w: Int) extends uniSeed {
  override var Type : String = "peach"
  override var name: String = n+" "+Type
  override var weight: Int = w
  override var color: String = "red"

  override def eat(): Unit = println("eating peach ... yummy !")

}