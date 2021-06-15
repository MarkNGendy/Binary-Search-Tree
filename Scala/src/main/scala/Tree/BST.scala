package Tree

import scala.collection.mutable
import scala.collection.mutable.ListBuffer


class BST[K, V](implicit ord: Ordering[K]) {
  private sealed trait Tree[K, V]
  private case object Leaf extends Tree[K, V]
  private case class Node[K, V](left: Tree[K, V], right: Tree[K, V], k: K, v: V) extends Tree[K, V]

  private var root: Tree[K, V] = Leaf

  var list = new ListBuffer[V]

  def getElements(): List[V] ={

    list= new ListBuffer[V]
    traverse(root)
    list.toList

  }

  def insert(k: K, v: V): Unit = {
    this.root = ins(root, k, v);
  }



  def min(): Option[V] = {
    min(this.root)
  }

  def max(): Option[V] = {
    max(this.root)
  }

  private def traverse(t : Tree[K,V]): Boolean = t match {
    case Leaf => true
    case Node(l,r,k,v) =>
      traverse(l)
      list+=v
      traverse(r)
      true
  }


  private def ins(t: Tree[K, V], key: K, value: V): Tree[K, V] = t match {
    case Leaf => Node(Leaf, Leaf, key, value)
    case Node(l, r, k, v) if (ord.equiv(k, key)) => Node(l, r, k, value)
    case Node(l, r, k, v) if (ord.lt(key, k)) => Node(ins(l, key, value), r, k, v)
    case Node(l, r, k, v) => Node(l, ins(r, key, value), k, v)
  }

  private def del(t: Tree[K, V], key: K): Unit = t match {
    case Leaf =>
    case Node(l,r,k,v)=>

  }


  private def min(t: Tree[K, V]): Option[V] = t match {
    case Node(l, _, _, v) => l match {
      case Leaf => Some(v)
      case Node(_,_,_,_) => min(l)
    }
    case Leaf => None
  }

  private def max(t: Tree[K, V]): Option[V] = t match {
    case Node(_, r, _, v) => r match {
      case Leaf => Some(v)
      case Node(_,_,_,_) => max(r)
    }
    case Leaf => None
  }
}
