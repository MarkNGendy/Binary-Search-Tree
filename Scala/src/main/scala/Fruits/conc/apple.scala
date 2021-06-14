package Fruits.conc

import Fruits.abs.manySeeds

class apple(n: String, w: Int) extends manySeeds {
  override var Type : String = "apple"
  override var name: String = n+" "+Type
  override var weight: Int = w
  override var color: String = "red"

  override def eat(): Unit = println("eating apple ... yummy !")

}