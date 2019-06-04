# a-simple-C-compiler
> 环境为ubuntu

- Lexical Analyzer : flex
- Syntax Analyzer  : yacc

```
brew install flex
brew install byacc
```

## 使用方法：
- Ubuntu
```bash
make        // 执行makefile
./parser 
```

- MacOS
```
flex scanner.l
byacc -d parser.y
gcc –o parser lex.yy.c y.tab.c -ll
./parser < test.c
```

- test文档为通过的测试样例

## 进度

- 目前已完成词法分析和语法分析
- 支持简单数组，函数声明，函数调用，简单branch语句等
