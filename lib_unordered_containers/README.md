#说明
新标准在原来的map, set, multimap和multiset的基础上定义了4个无序关联容器，分别是unordered\_map, unordered\_set, unordered\_multimap和unordered\_multiset。

这4个无序关联窗口使用hash表来实现，因此可以高效的实现数据的访问。而原来的的那些可以理解为有序容器，可能是通过二叉查找树等其它底层数据结构来实现。

4个容器，只以unordered\_举例演示。

