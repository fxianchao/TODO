# linux基础入门（实验楼）

## 0

### 命令

1. touch
2. cd
3. pwd
4. who
5. su
6. sudo
7. adduser
8. passwd
9. groups
10. cat
11. sort
12. usermod
13. deluser
14. ls
15. chown
16. chmod
17. useradd
18. tree
19. mkdir
20. cp
21. rm
22. mv
23. rename
24. cat
25. tac
26. nl
27. more
28. less
29. head
30. tail
31. file
32. vimtutor
33. declare
34. echo
35. set
36. env
37. export
38. vimdiff
39. unset
40. source
41. whereis
42. locate
43. which
44. find
45. zip
46. du
47. unzip
48. tar
49. df
50. du
51. dd
52. mkfs
53. mount
54. umount
55. fdisk
56. losetup
57. type
58. help
59. man
60. info
61. crontab
62. pgrep
63. ps
64. grep

### 快捷键

| 快捷键        | 作用                                       |
| :------------ | :----------------------------------------- |
| Tab           | 补全命令                                   |
| Ctrl+c        | 强行终止                                   |
| Ctrl+d        | 键盘输入结束或退出终端                     |
| Ctrl+s        | 暂停当前程序，暂停后按下任意键恢复运行     |
| Ctrl+z        | 将当前程序放到后台运行，恢复到前台为命令fg |
| Ctrl+a        | 将光标移至输入行头，相当于Home键           |
| Ctrl+e        | 将光标移至输入行末，相当于End键            |
| Ctrl+k        | 删除从光标所在位置到行末                   |
| Alt+Backspace | 向前删除一个单词                           |
| Shift+PgUp    | 将终端显示向上滚动                         |
| Shift+PgDn    | 将终端显示向下滚动                         |

### 通配符

| 通配符                | 意义                                        |
| :-------------------- | :------------------------------------------ |
| *                     | 匹配 0 或多个字符                           |
| ?                     | 匹配任意一个字符                            |
| [list]                | 匹配 list 中的任意单一字符                  |
| [^list]               | 匹配 除list 中的任意单一字符以外的字符      |
| [c1-c2]               | 匹配 c1-c2 中的任意单一字符 如：[0-9] [a-z] |
| {string1,string2,...} | 匹配 string1 或 string2 (或更多)其一字符串  |
| {c1..c2}              | 匹配 c1-c2 中全部字符 如{1..10}             |

### 黑科技

1. `banner` 输出图形字符
2. `xeyes` 一双眼睛
3. `cmatrix` 代码雨
4. `aafire` 火焰
5. `cowsay` 动物说话

## 1-系统简介

### 历史

### 重要人物

### 与windows区别

### 怎么学

## 2-基本概念及操作

### 桌面环境

> 服务器+客户端

### 终端

> 终端本质上是对应着 Linux 上的 /dev/tty 设备，Linux 的多用户登陆就是通过不同的 /dev/tty 设备完成的，Linux 默认提供了 6 个纯命令行界面的 “terminal”（准确的说这里应该是 6 个 virtual consoles）来让用户登录。在物理机系统上你可以通过使用[Ctrl]+[Alt]+[F1]～[F6]进行切换，不过在我们的在线实验环境中可能无法切换，因为特殊功能按键会被你的主机系统劫持。当你切换到其中一个终端后想要切换回图形界面，你可以按下[Ctrl]+[Alt]+[F7]来完成

### Shell

> Shell 是指“提供给使用者使用界面”的软件（命令解析器），类似于 DOS 下的 command（命令行）和后来的 cmd.exe 。普通意义上的 Shell 就是可以接受用户输入命令的程序。它之所以被称作 Shell 是因为它隐藏了操作系统底层的细节。

### 查文档

1. `man`
2. `[cmd] --help`

## 3-用户及文件权限管理

### 查看用户

1. `who am i` 或 `who mom likes`
   1. 输出的第一列表示打开当前伪终端的用户的用户名（要查看当前登录用户的用户名，去掉空格直接使用 whoami 即可），第二列的 pts/0 中 pts 表示伪终端，所谓伪是相对于 /dev/tty 设备而言的，还记得上一节讲终端时的那七个使用 [Ctrl]+[Alt]+[F1]～[F7] 进行切换的 /dev/tty 设备么,这是“真终端”，伪终端就是当你在图形用户界面使用 /dev/tty7 时每打开一个终端就会产生一个伪终端， pts/0 后面那个数字就表示打开的伪终端序号，你可以尝试再打开一个终端，然后在里面输入 who am i ，看第二列是不是就变成 pts/1 了，第三列则表示当前伪终端的启动时间
   2. who常用参数
    | 参数 | 说明                       |
    | :--- | :------------------------- |
    | -a   | 打印能打印的全部           |
    | -d   | 打印死掉的进程             |
    | -m   | 同am i,mom likes           |
    | -q   | 打印当前登录用户数及用户名 |
    | -u   | 打印当前登录用户登录信息   |
    | -r   | 打印运行等级               |

### 创建用户

1. `adduser`
2. `passwd`

### 用户组

1. `groups`
2. `usermod`
3. `deluser`

### 查看文件权限

1. `ls`

### 变更文件所有者

1. `chown`

### 修改文件权限

1. `chmod`

## 4-目录结构及文件基本操作

### FHS标准

> FHS（英文：Filesystem Hierarchy Standard 中文：文件系统层次结构标准），多数 Linux 版本采用这种文件组织形式，FHS 定义了系统中每个区域的用途、所需要的最小构成的文件和目录同时还给出了例外处理与矛盾处理。

### 目录路径

1. `..`
2. `~`

### 新建

1. `touch`
2. `mkdir`

### 复制

1. `cp`

### 删除

1. `rm`

### 移动文件与重命名

1. `mv`
2. `rename`

### 查看文件

1. `cat`
2. `tac`
3. `nl`
4. `more`
5. `less`
6. `head`
7. `tail`

### 查看文件类型

1. `file`

### 编辑文件

1. `vimtutor`

## 5-环境变量与文件查找

### 变量

```bash
declare tmp
tmp=shiyanlou
echo $tmp
```

### 环境变量

| 命 令  | 说 明                                                                                                |
| :----- | :--------------------------------------------------------------------------------------------------- |
| set    | 显示当前 Shell 所有变量，包括其内建环境变量（与 Shell 外观等相关），用户自定义变量及导出的环境变量。 |
| env    | 显示与当前用户相关的环境变量，还可以让命令在指定环境中运行。                                         |
| export | 显示从 Shell 中导出成环境变量的变量，也能通过它将自定义变量导出为环境变量。                          |

> `/etc/bashrc` 和 `/etc/profile`

### 命令的查找路径与顺序

1. PATH

### 添加自定义路径到“ PATH ”环境变量

1. `PATH=$PATH:/home/shiyanlou/mybin`

### 修改和删除已有变量

| 变量设置方式                 | 说明                                         |
| :--------------------------- | :------------------------------------------- |
| ${变量名#匹配字串}           | 从头向后开始匹配，删除符合匹配字串的最短数据 |
| ${变量名##匹配字串}          | 从头向后开始匹配，删除符合匹配字串的最长数据 |
| ${变量名%匹配字串}           | 从尾向前开始匹配，删除符合匹配字串的最短数据 |
| ${变量名%%匹配字串}          | 从尾向前开始匹配，删除符合匹配字串的最长数据 |
| ${变量名/旧的字串/新的字串}  | 将符合旧字串的第一个字串替换为新的字串       |
| ${变量名//旧的字串/新的字串} | 将符合旧字串的全部字串替换为新的字串         |

1. `unset`

### 让环境变量立即生效

1. `source` 或者 `.`

### 搜索文件

1. `whereis` 简单快速
2. `locate` 快而全
3. `which` 小而精
4. `find` 精而细
   1. `sudo find /etc/ -name interfaces`\
   2. `find ~ -mtime 0`
   3. `find ~ -newer /home/shiyanlou/Code`

## 挑战1：寻找文件

```bash
sudo find /etc -name sources.list
sudo chown shiyanlou /etc/apt/sources.list
sudo chmod 600 /etc/apt/sources.list
```

## 6-文件打包与解压缩

### 文件格式

| 文件后缀名 | 说明                           |
| :--------- | :----------------------------- |
| *.zip      | zip 程序打包压缩的文件         |
| *.rar      | rar 程序压缩的文件             |
| *.7z       | 7zip 程序压缩的文件            |
| *.tar      | tar 程序打包，未压缩的文件     |
| *.gz       | gzip 程序（GNU zip）压缩的文件 |
| *.xz       | xz 程序压缩的文件              |
| *.bz2      | bzip2 程序压缩的文件           |
| *.tar.gz   | tar 打包，gzip 程序压缩的文件  |
| *.tar.xz   | tar 打包，xz 程序压缩的文件    |
| *tar.bz2   | tar 打包，bzip2 程序压缩的文件 |
| *.tar.7z   | tar 打包，7z 程序压缩的文件    |

### zip压缩打包程序

```bash
cd /home/shiyanlou
zip -r -q -o shiyanlou.zip /home/shiyanlou/Desktop
du -h shiyanlou.zip
file shiyanlou.zip
```

1. `zip -r -9 -q -o shiyanlou_9.zip /home/shiyanlou/Desktop -x ~/*.zip`
2. `zip -r -e -o shiyanlou_encryption.zip /home/shiyanlou/Desktop`
3. `zip -r -l -o shiyanlou.zip /home/shiyanlou/Desktop`

### unzip解压缩zip文件

1. `unzip shiyanlou.zip`
2. `unzip -q shiyanlou.zip -d ziptest`
3. `unzip -l shiyanlou.zip`
4. `unzip -O GBK 中文压缩文件.zip`

### tar打包工具

1. `tar`

## 7-文件系统操作与磁盘管理

### 查看磁盘和目录的容量

1. `df`
2. `du`

### 创建虚拟磁盘

1. `dd` 命令用于转换和复制文件，不过它的复制不同于cp
   1. `dd if=/dev/stdin of=/dev/stdout bs=10 count=1`
   2. `dd if=/dev/stdin of=test bs=10 count=1 conv=ucase`
2. 使用 dd 命令创建虚拟镜像文件 `dd if=/dev/zero of=virtual.img bs=1M count=256`
3. 使用 mkfs 命令格式化磁盘 `sudo mkfs.ext4 virtual.img`
4. 使用 mount 命令挂载磁盘到目录树 `mount -o loop -t ext4 virtual.img /mnt `
5. umount卸载
6. 使用 fdisk 为磁盘分区
7. 使用 losetup 命令建立镜像与回环设备的关联

### 作业：找出当前目录下占用最大的前十个文件

> `du -am | sort -nr | head -n 10`

## 8-linux下的帮助命令

### 内建命令与外部命令

1. 内建命令实际上是 shell 程序的一部分，其中包含的是一些比较简单的 Linux 系统命令，这些命令是写在bash源码的builtins里面的，由 shell 程序识别并在 shell 程序内部完成运行，通常在 Linux 系统加载运行时 shell 就被加载并驻留在系统内存中。而且解析内部命令 shell 不需要创建子进程，因此其执行速度比外部命令快。比如：history、cd、exit 等等
2. 外部命令是 Linux 系统中的实用程序部分，因为实用程序的功能通常都比较强大，所以其包含的程序量也会很大，在系统加载时并不随系统一起被加载到内存中，而是在需要时才将其调入内存。虽然其不包含在 shell 中，但是其命令执行过程是由 shell 程序控制的。外部命令是在 Bash 之外额外安装的，通常放在/bin，/usr/bin，/sbin，/usr/sbin等等。比如：ls、vi等
3. type 命令来区分命令是内建的还是外部的

### help命令

> help 命令是用于显示 shell 内建命令的简要帮助信息

### man命令

### info命令

## 9-任务计划crontab

```txt
# Example of job definition:
# .---------------- minute (0 - 59)
# |  .------------- hour (0 - 23)
# |  |  .---------- day of month (1 - 31)
# |  |  |  .------- month (1 - 12) OR jan,feb,mar,apr ...
# |  |  |  |  .---- day of week (0 - 6) (Sunday=0 or 7) OR sun,mon,tue,wed,thu,fri,sat
# |  |  |  |  |
# *  *  *  *  * user-name command to be executed
```

`*/1 * * * * touch /home/shiyanlou/$(date +\%Y\%m\%d\%H\%M\%S)`

## 挑战2：备份日志

```bash
sudo cron -f &
crontab -e 添加
0 3 * * * sudo rm /home/shiyanlou/tmp/*
0 3 * * * sudo cp /var/log/alternatives.log /home/shiyanlou/tmp/$(date +\%Y-\%m-\%d)
```

## 10-

