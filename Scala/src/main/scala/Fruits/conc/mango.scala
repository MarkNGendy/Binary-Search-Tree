package Fruits.conc

import Fruits.abs.uniSeed

class mango(n: String, w: Int) extends uniSeed {
  val cate = "mango"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "green"

  override def eat(): Unit = println("eating mangoo ... yummy !")


}