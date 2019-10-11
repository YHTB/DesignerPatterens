# DesignerPatterens
Elements of reusable Object-oriented software
# 软件工程七大设计原则
+ **八大设计原则**
   + 1.**依赖倒置原则：**<br>
       * 高层模块不依赖底层模块，二者都应该依赖抽象，<br>
       * 抽象不依赖实现细节，实现细节应该依赖于抽象。
   + 2 **开放封闭原则：**<br>
       * 对拓展开放，对更改封闭<br>
       * 类模块应该是可 拓展的，但是不可修改的。
   + 3 **单一职责原则：**<br>
        * 一个类应该仅有一个引起他变化的原因<br>
        * 变化的方向隐含类的责任
   + 4 **Liskov替换原则:**<br>
        * 子类必须能够替换他们的基类。<br>
        * 继承表达类型的抽象。
   + 5 **接口隔离原则：**<br>
        * 不应该强迫客户程序依赖他们不用的方法。<br>
        * 接口应该小而完备。
   + 6 **优先使用对象组合，而不是类继承：**<br>
        * ***类继承***通常称为*白箱复用*<br>***对象组合***通常被称为*黑箱复用*
        * 继承在某种程度上破坏了封装性,子类父类耦合度高
        * 对象组合则只要求被组合的对象具有良好的定义的接口。
    + 7 **封装变化点**<br>
        * 使用封装来创建对象之间的分界层，<br>让设计者可以在变化的另一侧修改，而不会对另一侧产生不良影响，<br>从而达到层次间的松耦合。
    + 8 **针对接口编程，而不是针对实现编程**<br>
        * 不将变量类型声明为某个特定类型的具体类，而是声明为某个接口。
        * 客户程序无需知道对象的具体类型，只需要知道读系iang所具有的接口。
        * 减少系统中各部分的依赖关系，从而实现”高内聚，松耦合“的类型设计方案。
   
