package Fruits.conc

import Fruits.abs.berry

class raspberry(n: String, w: Int) extends berry{
  val cate = "raspberry"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "red"

  override def eat(): Unit = println("eating raspberry ... yummy !")
}