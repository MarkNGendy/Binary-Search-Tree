package Fruits.conc

import Fruits.abs.elongatedFruit

class banana(n: String, w: Int) extends elongatedFruit {
  val cate = "banana"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "yellow"

  override def eat(): Unit = println("eating banana ... yummy !")

}