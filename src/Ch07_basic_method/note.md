# 关于基本类型
## 阅读后思考
- 关于基本类型这个章节，我的总结是用的时候学
- 勤于用stdint.h规定类型
- 掌握signed,unsigned的用法
- 在之前的程序里有直接用到int等类型
- 之后的程序需主动运用stdint
- 本章节的所有程序都是测试例程
- 8/22 14:03
### test01.c
- 验证uint，int
- int8_t a=0, uint8_t b=-1 → a+b 时 int8_t 被提升为 int（不是 uint8_t！）
- 最终 c = a+b = -1（int 打印 %d），d = a+b = 255（uint8_t 打印 %u）
- 关键认知：小整数类型（≤int）运算时先提升为 int，再按赋值目标截断

## 8/22 补充：有符号与无符号的类型转换
- int8_t 转 uint8_t：-1 → 255，位模式不变（11111111），解释方式变了
- 本质：-1 + 2⁸ = 255，模 256 下的同余
- 推广：int 转 unsigned int → -1 变成 4294967295
- **铁律：有符号 + 无符号比较时，有符号被转成无符号 → 负数变成巨大正数 → 比较结果反直觉**
- 以后写代码永远确保比较两边类型一致，开 `-Wsign-compare` 不忽略警告

## 8/22 补充：P110 编程练习
### t2.c（square3 改进版：每24行暂停）
- 用 `i % 24 == 0` 判断分页点
- **踩坑**：`while((ch=getchar()) == '\n')` 写反了 → 等于回车反而继续循环
- **修正**：`while((ch=getchar()) != '\n')` → 不是回车就转圈，是回车就跳出
- 空循环体 `;` 就是"什么都不做，一直读字符吞掉"
- scanf 留下的 `\n` 要先用 `getchar()` 清掉，否则第一次暂停会被自动消费
- 这个模式以后在 STM32 轮询等待时会经常用：`while(flag == RESET);`

### t4.c（九宫格输入法：字母转数字）
- 用 ASCII 码计算：`temp = ch - 64`，`n = (temp-1)/3 + 2`
- 每3个字母一组映射到 2~6，整数除法自动分组
- P/Q/R/S → 7，T/U/V → 8，W/X/Y/Z → 9（单独处理）
- 比写 26 个 case 简洁，面试时写公式版更显功力
- 没处理小写字母，后续可加 `toupper()` 或 `-32` 转换

## 8/22 补充：Git 操作实战
- 双远程（GitHub + Gitee）同步，遇到 divergent branches
- merge vs rebase vs fast-forward 的区别：
  - merge：保留分叉历史，生成合并节点
  - rebase：把我的提交挪到你后面，历史变直，hash 会变
  - fast-forward：我什么都没写，直接跳到你的位置
- 黄金法则：已 push 的提交绝对不 rebase
- git tag：给里程碑打书签，`git push origin --tags` 才推到远程
- tag vs 分支：tag 永远钉在一个 commit 上，分支每次 commit 往前走
- 已用 `git reset --hard f81d98c` 同步远程，本地旧提交保留在 `backup-ch06` 分支


