package Fruits.conc

import Fruits.abs.tinyFruit

class grapes(n: String, w: Int) extends tinyFruit {
  val cate = "grapes"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "green"

  override def eat(): Unit = println("eating grapes ... yummy !")

}