package Fruits.conc

import Fruits.abs.manySeeds

class watermelon(n: String, w: Int) extends manySeeds {
  val cate = "watermelon"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "green"

  override def eat(): Unit = println("eating watermelon ... yummy !")

}