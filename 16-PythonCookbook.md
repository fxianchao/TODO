# PythonCookbook

## 第1章 数据结构和算法

### 1.1 将序列分解为单独的变量

1. 任何的序列（或者是可迭代对象-元组,列表,字符串,文件,迭代器,生成器）都可以通过一个简单的赋值操作来分解为单独的变量。 唯一的要求就是变量的总数和结构必须与序列相吻合。
2. 如果元素的数量不匹配，会得到一个错误提示。

### 1.2 从任意长度的可迭代对象中分解元素

1. 星号表达式

### 1.3 保存最后N个元素

1. 使用 `collections.deque` 双端队列

    ```python
    from collections import deque

    def search(lines, pattern, history=5):
        previous_lines = deque(maxlen=history)
        for line in lines:
            if pattern in line:
                yield line, previous_line
            previous_line.append(line)

    if __name__ == '__main__':
        with open('somefile.txt') as f:
            for line, previous in search(f, 'python', 5):
                for pline in previous:
                    print(pline, end='')
                print(line, end='')
                print('-'*20)

    ```

> `collections`模块-容器数据类型  
> `collections.deque` 双端队列

### 1.4 找到最大或最小的N个元素

1. heapq 模块有两个函数：`nlargest()` 和 `nsmallest()` 可以完美解决这个问题。

    ```python
    portfolio = [
        {'name': 'IBM', 'shares': 100, 'price': 91.1},
        {'name': 'AAPL', 'shares': 50, 'price': 543.22},
        {'name': 'FB', 'shares': 200, 'price': 21.09},
        {'name': 'HPQ', 'shares': 35, 'price': 31.75},
        {'name': 'YHOO', 'shares': 45, 'price': 16.35},
        {'name': 'ACME', 'shares': 75, 'price': 115.65}
    ]

    cheap = heapq.nsmallest(3, portfolio, key=lambda s: s['price'])
    expensive = heapq.nlargest(3, portfolio, key=lambda s: s['price'])

    ```

2. 将列表就地转换成堆 `heapq.heapify(heap)` 只支持小顶堆,调用 `heapq.heappop(heap)` 弹出堆顶元素

> `itertools`模块-为高效循环而创建迭代器的函数  
> `operator`模块-标准运算符替代函数  
> `heapq`模块-堆队列算法,仅实现最小堆

### 1.5 实现优先队列

1. 借助 `heapq` 实现简单的优先队列

    ```python
    import heapq

    class PriorityQueue:

        def __init__(self):
            self._queue = []
            self._index = 0
        
        def push(self, item, priority):
            heapq.heappush(self._queue, (-priority, self._index, item))
            self._index += 1
        
        def pop(self):
            return heapq.heappop(self._queue)[-1]
        
    ```

### 1.6 在字典中将键映射到多个值上

1. 键对应的值为容器即可实现. 借助默认字典 `defaultdict` -自动初始化第一个值
2. 也可以用普通字典的 `setdefault()` 

    ```python
    from collections import defaultdict

    d = defaultdict(list)
    d['a'].append(1)

    d_1 = defaultdict(set)
    d_1['a'].append(1)

    ```

> `collections.defaultdict` 默认字典-自动初始化第一个值,无需判断键是否已经存在

### 1.7 让字典保持有序

> 普通字典自 Python 3.7 起已保证具有确定的元素顺序  
> `collections.OrderedDict` 有序字典, 普通字典已实现该功能

### 1.8 与字典有关的计算问题

1. 借助 `zip()` 将键和值反转过来, 返回一个只能被消费一次的迭代器

    ```python
    prices = {
        'ACME': 45.23,
        'AAPL': 612.78,
        'IBM': 205.55,
        'HPQ': 37.20,
        'FB': 10.75
    }

    min_price = min(zip(prices.values(), prices.keys()))
    # min_price is (10.75, 'FB')
    max_price = max(zip(prices.values(), prices.keys()))
    # max_price is (612.78, 'AAPL')

    ```

2. 使用 `lambda` 表达式

    ```python
    prices = {
        'ACME': 45.23,
        'AAPL': 612.78,
        'IBM': 205.55,
        'HPQ': 37.20,
        'FB': 10.75
    }

    min_value = prices[min(prices, key=lambda k: prices[k])]

    ```

> `zip`内置函数-创建一个聚合了来自每个可迭代对象中的元素的迭代器

### 1.9 在两个字典中寻找相同点

1. 字典的 `keys()` 或者 `items()` 方法返回结果分别为 `key-view` 对象和 `item-view` 对象,均支持集合操作,但是 `values()` 返回值不支持集合操作

    ```python
    a = {
        'x' : 1,
        'y' : 2,
        'z' : 3
    }

    b = {
        'w' : 10,
        'x' : 11,
        'y' : 2
    }

    # Find keys in common
    a.keys() & b.keys() # { 'x', 'y' }
    # Find keys in a that are not in b
    a.keys() - b.keys() # { 'z' }
    # Find (key,value) pairs in common
    a.items() & b.items() # { ('y', 2) }

    ```

### 1.10 从序列中移除重复项且保持元素间顺序不变

1. 序列元素可哈希,利用集合和生成器来实现

    ```python
    def dedupe(items):
        seen = set()
        for item in items:
            if item not in seen:
                yield item
                seen.add(item)
    ```

2. 序列元素不可哈希,借助某函数将元素转换为可哈希

    ```python
    def dedupe(items, key=None):
        seen = set()
        for item in items:
            val = item if key is None else key(item)
            if val not in seen:
                yield item
                seen.add(val)
    ```

3. 也可以直接使用集合,但是无法保证顺序

### 1.11 对切片命名

1. 硬编码的切片索引不易阅读,使用 `slice()` 创建切片对象

    ```python
    >>> items = [0, 1, 2, 3, 4, 5, 6]
    >>> a = slice(2, 4)
    >>> items[2:4]
    [2, 3]
    >>> items[a]
    [2, 3]
    >>> items[a] = [10,11]
    >>> items
    [0, 1, 10, 11, 4, 5, 6]
    >>> del items[a]
    >>> items
    [0, 1, 4, 5, 6]
    ```

2. 切片对象 `s` 的属性 `s.start`, `s.stop`, `s.step`

    ```python
    >>> a = slice(5, 50, 2)
    >>> a.start
    5
    >>> a.stop
    50
    >>> a.step
    2
    ```

3. 切片对象的 `indices(size)` 方法将它映射到一个已知大小的序列上,返回一个三元组 (start, stop, step),保证不越界

    ```python
    >>> s = 'HelloWorld'
    >>> a.indices(len(s))
    (5, 10, 2)
    >>> for i in range(*a.indices(len(s))):
    ...     print(s[i])
    ...
    W
    r
    d
    ```

> `slice()`内置函数-创建切片对象

### 1.12 找出序列中出现次数最多的元素

1. 借助 `collections.Counter` 实现计数统计(可哈希),底层维护一个字典
2. `Counter.most_common(number)` 返回按出现次数排序后的字典
   
    ```python
    words = [
        'look', 'into', 'my', 'eyes', 'look', 'into', 'my', 'eyes',
        'the', 'eyes', 'the', 'eyes', 'the', 'eyes', 'not', 'around', 'the',
        'eyes', "don't", 'look', 'around', 'the', 'eyes', 'look', 'into',
        'my', 'eyes', "you're", 'under'
    ]
    from collections import Counter
    word_counts = Counter(words)
    # 出现频率最高的3个单词
    top_three = word_counts.most_common(3)
    print(top_three)
    # Outputs [('eyes', 8), ('the', 5), ('look', 4)]
    ```

3. `Counter.update()` 更新统计值
4. `Counter` 对象支持各种数学运算

    ```python
    >>> a = Counter(words)
    >>> b = Counter(morewords)
    >>> a
    Counter({'eyes': 8, 'the': 5, 'look': 4, 'into': 3, 'my': 3, 'around': 2,
    "you're": 1, "don't": 1, 'under': 1, 'not': 1})
    >>> b
    Counter({'eyes': 1, 'looking': 1, 'are': 1, 'in': 1, 'not': 1, 'you': 1,
    'my': 1, 'why': 1})
    >>> # Combine counts
    >>> c = a + b
    >>> c
    Counter({'eyes': 9, 'the': 5, 'look': 4, 'my': 4, 'into': 3, 'not': 2,
    'around': 2, "you're": 1, "don't": 1, 'in': 1, 'why': 1,
    'looking': 1, 'are': 1, 'under': 1, 'you': 1})
    >>> # Subtract counts
    >>> d = a - b
    >>> d
    Counter({'eyes': 7, 'the': 5, 'look': 4, 'into': 3, 'my': 2, 'around': 2,
    "you're": 1, "don't": 1, 'under': 1})
    ```

> `collections.Counter`-计数统计

### 1.13 通过公共键对字典列表排序

1. `operator.itemgetter` 创建一个可调用对象,接受参数作为查询标记,返回一个包含查询结果值的元组

    ```python
    rows = [
        {'fname': 'Brian', 'lname': 'Jones', 'uid': 1003},
        {'fname': 'David', 'lname': 'Beazley', 'uid': 1002},
        {'fname': 'John', 'lname': 'Cleese', 'uid': 1001},
        {'fname': 'Big', 'lname': 'Jones', 'uid': 1004}
    ]

    from operator import itemgetter

    rows_by_fname = sorted(rows, key=itemgetter('fname'))
    rows_by_uid = sorted(rows, key=itemgetter('uid'))

    print(rows_by_fname)
    # [{'fname': 'Big', 'uid': 1004, 'lname': 'Jones'},
    # {'fname': 'Brian', 'uid': 1003, 'lname': 'Jones'},
    # {'fname': 'David', 'uid': 1002, 'lname': 'Beazley'},
    # {'fname': 'John', 'uid': 1001, 'lname': 'Cleese'}]

    print(rows_by_uid)
    # [{'fname': 'John', 'uid': 1001, 'lname': 'Cleese'},
    # {'fname': 'David', 'uid': 1002, 'lname': 'Beazley'},
    # {'fname': 'Brian', 'uid': 1003, 'lname': 'Jones'},
    # {'fname': 'Big', 'uid': 1004, 'lname': 'Jones'}]

    ```

2. `operator.itemgetter` 函数支持接收多个 keys

    ```python
    rows_by_lfname = sorted(rows, key=itemgetter('lname','fname'))
    print(rows_by_lfname)

    # [{'fname': 'David', 'uid': 1002, 'lname': 'Beazley'},
    # {'fname': 'John', 'uid': 1001, 'lname': 'Cleese'},
    # {'fname': 'Big', 'uid': 1004, 'lname': 'Jones'},
    # {'fname': 'Brian', 'uid': 1003, 'lname': 'Jones'}]
    ```

3. 与 `lambda` 表达式的功能相同,但是 `itemgetter` 更快

    ```python
    rows_by_fname = sorted(rows, key=lambda r: r['fname'])
    rows_by_lfname = sorted(rows, key=lambda r: (r['lname'],r['fname']))
    ```

### 1.14 对不原生支持比较操作的对象排序
