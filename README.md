# DesignPattern

# 设计模式

阅读书目《大话设计模式》
记录23种设计模式的实现代码，使用C++语言，vs2017

博文：模式设计学习笔记[模式设计](https://chengchengzi.github.io/2019/06/07/模式设计学习笔记/)

## 一、[简单工厂模式](SimpleFactory)

- **解决了对象创建问题**
- 包含三个角色：工厂类、抽象父类、具体子类
- 优点：实现了松耦合
- 当需要增加新的功能时，只需要改动两处，不会对原来已经实现的功能进行改动；
	- 新增具体功能子类
	- 工厂类增加switch分支
- [Factory.cpp是入口函数](SimpleFactory/Factory.cpp)
- 代码类图如下：
	![简单工厂类图](images/SimpleFactory.png)

## 二、[策略模式](Strategy)
