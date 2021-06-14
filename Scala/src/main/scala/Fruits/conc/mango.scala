package Fruits.conc

import Fruits.abs.uniSeed

class mango(n: String, w: Int) extends uniSeed {
  override var Type : String = "mango"
  override var name: String = n+" "+Type
  override var weight: Int = w
  override var color: String = "green"

  override def eat(): Unit = println("eating mangoo ... yummy !")

}