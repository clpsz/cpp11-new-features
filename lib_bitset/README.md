#说明
bitset是一个位数据类型的类模板，类似于array类，它的长度不能动态增长，只能在定义时指定。可以使用一个整形值来初始化bitset，最低位在bitset中的位置为0。

bitset类模板简化了位操作。

bitset主要包括以下操作：
* any()         是否有位被置位
* all()         是否所有位都置位
* none()        是否所有位都没有置位
* size()        bitset的大小
* test(pos)     pos位是否被置位
* set(pos, v)   将pos位设置为v
* set()         将所有位置位
* reset(pos)    将pos位复位
* reset()       将所有位复位
* flip(pos)     改变pos位的值
* flip()        改变所有位的值
* [pos]         访问pos位的值
