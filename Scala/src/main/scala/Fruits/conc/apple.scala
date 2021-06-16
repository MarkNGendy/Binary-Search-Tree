package Fruits.conc

import Fruits.abs.manySeeds

class apple(n: String, w: Int) extends manySeeds {
  val cate = "apple"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "red"


  override def eat(): Unit = println("eating apple ... yummy !")

}