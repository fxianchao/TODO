- [~~WTFPython{19-4-7}~~](#WTFPython19-4-7)
  - [19-3-21](#19-3-21)
    - [section-大脑运动](#section-大脑运动)
      - [微妙的字符串驻留](#微妙的字符串驻留)
      - [python字典键覆盖](#python字典键覆盖)
      - [try语句块的return](#try语句块的return)
      - [Python会将相同的内存地址分配给第二个对象](#Python会将相同的内存地址分配给第二个对象)
      - [for语句每次都会重新赋值](#for语句每次都会重新赋值)
      - [执行时机差异](#执行时机差异)
      - [is和==,-5~256已经分配](#is和-5256已经分配)
      - [引用相同对象](#引用相同对象)
      - [闭包函数与循环变量绑定](#闭包函数与循环变量绑定)
      - [is not是一个二元运算符](#is-not是一个二元运算符)
      - [以外的逗号](#以外的逗号)
      - [字符串末尾的反斜杠](#字符串末尾的反斜杠)
      - [运算符的优先级会影响表达式的求值顺序](#运算符的优先级会影响表达式的求值顺序)
      - [三引号](#三引号)
      - [不存在的午夜?](#不存在的午夜)
      - [布尔是int的子类](#布尔是int的子类)
      - [类属性和实例属性](#类属性和实例属性)
      - [生成器与list](#生成器与list)
      - [tuple也可以改变](#tuple也可以改变)
      - [try语句块在except子句的末尾清除该异常](#try语句块在except子句的末尾清除该异常)
      - [真与假(python2)](#真与假python2)
      - [原地修改没有返回值](#原地修改没有返回值)
      - [子类](#子类)
      - [python字典键转换](#python字典键转换)
      - [赋值语句表达式列表,循环赋值](#赋值语句表达式列表循环赋值)
  - [19-3-28](#19-3-28)
    - [section-外表是靠不住的](#section-外表是靠不住的)
      - [即使外表和英文字母一样,但并不一样](#即使外表和英文字母一样但并不一样)
      - [内存空间被释放后重新分配相同地址](#内存空间被释放后重新分配相同地址)
      - [不要混用制表符和空格](#不要混用制表符和空格)
  - [19-4-7](#19-4-7)
    - [section-小心地雷](#section-小心地雷)
      - [不支持迭代字典时修改它,字典自动扩容](#不支持迭代字典时修改它字典自动扩容)
      - [del引用计数减1](#del引用计数减1)
      - [迭代列表时删除元素](#迭代列表时删除元素)
      - [for循环,循环变量泄露](#for循环循环变量泄露)
      - [默认的可变参数只绑定一次](#默认的可变参数只绑定一次)
      - [捕获异常](#捕获异常)
      - [+=与+不同](#与不同)
      - [修改外部作用域变量,global](#修改外部作用域变量global)
      - [链式操作](#链式操作)
      - [类定义中嵌套的作用域忽略类作用域的名称解析](#类定义中嵌套的作用域忽略类作用域的名称解析)
      - [元组的逗号](#元组的逗号)
    - [section-隐藏的宝藏](#section-隐藏的宝藏)
      - [antigravity模块是Python开发人员发布的少数复活节彩蛋之一](#antigravity模块是Python开发人员发布的少数复活节彩蛋之一)
      - [python没有goto(goto是愚人节彩蛋)](#python没有gotogoto是愚人节彩蛋)
      - [braces,使用大括号的复活节彩蛋](#braces使用大括号的复活节彩蛋)
      - [！=和<>.愚人节彩蛋](#和愚人节彩蛋)
      - [python之禅,复活节彩蛋](#python之禅复活节彩蛋)
      - [循环,异常中的else子句](#循环异常中的else子句)
      - [无穷大infinity的哈希值是"10⁵ x π"](#无穷大infinity的哈希值是10⁵-x-π)
      - [类内双下划线名称修饰](#类内双下划线名称修饰)
    - [section-杂项](#section-杂项)
      - [+=更快](#更快)
      - [字符串拼接 ( + |format |% |join )](#字符串拼接---format--join-)
      - [inf和nan,无穷大和非数字](#inf和nan无穷大和非数字)
      - [小知识点](#小知识点)

---

# ~~WTFPython{19-4-7}~~

## 19-3-21

### section-大脑运动

#### 微妙的字符串驻留

#### python字典键覆盖

#### try语句块的return

#### Python会将相同的内存地址分配给第二个对象

#### for语句每次都会重新赋值

#### 执行时机差异

#### is和==,-5~256已经分配

#### 引用相同对象

#### 闭包函数与循环变量绑定

#### is not是一个二元运算符

#### 以外的逗号

#### 字符串末尾的反斜杠

#### 运算符的优先级会影响表达式的求值顺序

#### 三引号

#### 不存在的午夜?

#### 布尔是int的子类

#### 类属性和实例属性

#### 生成器与list

#### tuple也可以改变

#### try语句块在except子句的末尾清除该异常

#### 真与假(python2)

#### 原地修改没有返回值

#### 子类

#### python字典键转换

#### 赋值语句表达式列表,循环赋值

## 19-3-28

### section-外表是靠不住的

#### 即使外表和英文字母一样,但并不一样

#### 内存空间被释放后重新分配相同地址

#### 不要混用制表符和空格

## 19-4-7

### section-小心地雷

#### 不支持迭代字典时修改它,字典自动扩容

#### del引用计数减1

#### 迭代列表时删除元素

#### for循环,循环变量泄露

#### 默认的可变参数只绑定一次

#### 捕获异常

#### +=与+不同

#### 修改外部作用域变量,global

#### 链式操作

#### 类定义中嵌套的作用域忽略类作用域的名称解析

#### 元组的逗号

### section-隐藏的宝藏

#### antigravity模块是Python开发人员发布的少数复活节彩蛋之一

#### python没有goto(goto是愚人节彩蛋)

#### braces,使用大括号的复活节彩蛋

#### ！=和<>.愚人节彩蛋

#### python之禅,复活节彩蛋

#### 循环,异常中的else子句

#### 无穷大infinity的哈希值是"10⁵ x π"

#### 类内双下划线名称修饰

### section-杂项

#### +=更快

#### 字符串拼接 ( + |format |% |join )

#### inf和nan,无穷大和非数字

#### 小知识点

1. join是一个字符串操作而不是一个列表操作;
2. ++操作符实际是两个+;
3. Python使用2个字节存储函数中的本地变量;
4. 全局解释器锁;
5. 列表切片越界不报错;
6. `str.count('')`.
