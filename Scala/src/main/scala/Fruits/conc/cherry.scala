package Fruits.conc

import Fruits.abs.tinyFruit

class cherry(n: String, w: Int) extends tinyFruit {
  val cate = "cherry"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "red"

  override def eat(): Unit = println("eating cherry ... yummy !")
}