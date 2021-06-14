package Fruits.conc

import Fruits.abs.berry

class raspberry(n: String, w: Int) extends berry{
  override var name: String = n+" raspberry"
  override var weight: Int = w
  override var color: String = "red"

  override def eat(): Unit = println("eating raspberry ... yummy !")
}