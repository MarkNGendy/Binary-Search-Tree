package Fruits

trait Fruit{
  var name : String
  var weight : Int
  var color : String
  var subType : String
  var Type : String

  def display(): Unit ={
    println("I'm "+name+" my weight is: "+weight+" and my color is: "+color);
  }

  def eat()

}