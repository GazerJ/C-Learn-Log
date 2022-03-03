# what is STL

Standard template library //标准模板库，
## 容器库；分为三类类容器；
+ 序列式容器：不会对数据进行排序

        array<Type ,Num>；需要指定个数，大小定了不能变，静态数组[],和迭代方法，begin();end()

        vector<Type>数组升级版：动态数组，会自动调整内存空间主要方法[],push_back(),emplace_back(),size(),capacity()reserve()，尾部容易删除和插入

        deque<Type>；三种访问方法，[],at(num),迭代指针 []不会判定是否越界，at会判断是否越界，和vector相比是头部容易删除和插入

        list<Type>;链表 删除和插入比较快O（1）缺点是不能[]访问，需要迭代器迭代到指定位置去访问

        forward_list<Type>
    + 随机迭代器：array，deque，vector 是支持随机访问的可以直接用[]
    + 双向迭代器：list，set，map
    + 单项迭代器：forward_list

123
+ 关联容器：
+ 无序无关联容器：
# 有序容器
+ 可迭代对象的常用方法: 
## array
## vector
##  deque