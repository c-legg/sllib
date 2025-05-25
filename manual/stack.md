## 类

### `stack`

栈。

``` cpp
template<typename T>
class stack;
```

#### 模板参数

| 名称 | 类型 | 意义 |
| :--: | :--: | :--: |
| `T` | `template` | 元素类型 |

#### 成员变量

| 名称 | 类型 | 意义 |
| :--: | :--: | :--: |
| `car` | `T` | 栈顶元素 |
| `cdr` | `*stack<T>` | 栈顶元素以外的所有元素组成的栈 |
| `len` | `long long` | 栈的元素数量 |

#### 成员函数

| 名称 | 返回值类型 | 意义 |
| :--: | :--: | :--: |
| `size()` | `long long` | 栈的元素数量 |
| `empty()` | `bool` | 栈是否为空 |
| `swap(stack &oth)` | `void` | 交换栈 |

## 函数

### `cons`

元素入栈。

``` cpp
template<typename T>
stack<T> cons(T add, stack<T>& st);
