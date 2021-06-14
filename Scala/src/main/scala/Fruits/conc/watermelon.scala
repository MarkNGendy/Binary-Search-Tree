package Fruits.conc

import Fruits.abs.manySeeds

class watermelon(n: String, w: Int) extends manySeeds {
  override var Type : String = "watermelon"
  override var name: String = n+" "+Type
  override var weight: Int = w
  override var color: String = "green"

  override def eat(): Unit = println("eating watermelon ... yummy !")

}