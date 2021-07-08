package Fruits.conc

import Fruits.abs.uniSeed

class peach(n: String, w: Int) extends uniSeed {
  val cate = "peach"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "red"

  override def eat(): Unit = println("eating peach ... yummy !")


}