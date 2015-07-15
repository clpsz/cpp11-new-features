#说明
老式的assert是在运行时期检查的，新标准中添加了可以编译期间检查的static\_assert，其语法如下：
```
static\_assert(bool\_constexpr , message );
```
其中bool\_constexpr是可以在编译期间确定其值的bool表达式，message是如果条件不满足的话，编译的报错信息。


