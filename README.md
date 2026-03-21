# C Playground 🎯

C 语言练习项目，包含基础语法、内存管理、函数指针等核心概念。

## 📂 项目结构

```
C_Playground/
├── CMakeLists.txt       # CMake 构建配置
├── alloc/               # 内存分配示例
├── funcptr/             # 函数指针使用
└── gui/                 # GUI 编程示例
```

## 🔧 主要内容

### 内存管理 (`alloc/`)
- **malloc/free**: 动态内存分配
- **calloc**: 初始化内存分配
- **realloc**: 重分配内存
- **内存泄漏检测**: Valgrind 使用

### 函数指针 (`funcptr/`)
- **基础语法**: 函数指针声明与调用
- **回调函数**: 回调模式实现
- **函数指针数组**: 状态机实现
- **高阶函数**: 类似函数式编程

### GUI 编程 (`gui/`)
- **GTK+**: Linux GUI 开发
- **Win32 API**: Windows 窗口程序

## 🚀 快速开始

```bash
# 克隆仓库
git clone https://github.com/MengqiYe/C_Playground.git

# 构建
mkdir build && cd build
cmake ..
make

# 运行示例
./alloc_demo
./funcptr_demo
```

## 📝 代码示例

### 函数指针
```c
// 声明函数指针
int (*operation)(int, int);

// 回调函数示例
void process(int *arr, int n, int (*transform)(int)) {
    for (int i = 0; i < n; i++) {
        arr[i] = transform(arr[i]);
    }
}
```

### 内存管理
```c
// 安全释放宏
#define SAFE_FREE(ptr) do { free(ptr); ptr = NULL; } while(0)

// 内存分配检查
void *safe_malloc(size_t size) {
    void *ptr = malloc(size);
    if (!ptr) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    return ptr;
}
```

## 📖 学习资源

- [C Reference](https://en.cppreference.com/w/c)
- [Learn C](https://www.learn-c.org/)

## 👤 作者

MengqiYe

## 📄 许可证

MIT License
