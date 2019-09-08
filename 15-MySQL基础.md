- [MySQL基础](#mysql基础)
  - [1 安装和启动](#1-安装和启动)
    - [1安装](#1安装)
    - [2启动](#2启动)
  - [2 登录和退出](#2-登录和退出)
  - [3 数据库](#3-数据库)
    - [1新建数据库](#1新建数据库)
    - [2查看数据库](#2查看数据库)
    - [3连接数据库](#3连接数据库)
    - [4删除数据库](#4删除数据库)
    - [5重命名数据库(已移除)](#5重命名数据库已移除)
  - [4 数据表](#4-数据表)
    - [1新建数据表](#1新建数据表)
    - [2查看数据表](#2查看数据表)
    - [3删除数据表](#3删除数据表)
    - [4重命名数据表](#4重命名数据表)
    - [5修改数据表结构](#5修改数据表结构)
      - [1增加一列](#1增加一列)
      - [2删除一列](#2删除一列)
      - [3修改一列](#3修改一列)
        - [1重命名一列](#1重命名一列)
        - [2修改一列](#2修改一列)
  - [5 数据类型](#5-数据类型)
    - [1数值类型](#1数值类型)
    - [2字符串类型](#2字符串类型)
    - [3日期时间类型](#3日期时间类型)
  - [6 增加数据](#6-增加数据)
  - [7 约束](#7-约束)
    - [1约束分类](#1约束分类)
    - [2主键](#2主键)
    - [3默认值约束](#3默认值约束)
    - [4唯一约束](#4唯一约束)
    - [5外键约束](#5外键约束)
    - [6非空约束](#6非空约束)
  - [8 查询数据](#8-查询数据)
    - [1基本查询语句](#1基本查询语句)
    - [2数学符号条件](#2数学符号条件)
    - [3AND与OR](#3and与or)
    - [4IN和NOT IN](#4in和not-in)
    - [5通配符](#5通配符)
    - [6对结果排序](#6对结果排序)
    - [7内置函数和计算](#7内置函数和计算)
    - [8子查询](#8子查询)
    - [9连接查询](#9连接查询)
  - [9 修改数据](#9-修改数据)
  - [10 删除数据](#10-删除数据)
  - [11 索引](#11-索引)
    - [1新建索引](#1新建索引)
    - [2查看索引](#2查看索引)
    - [3删除索引](#3删除索引)
  - [12 视图](#12-视图)
  - [13 导入](#13-导入)
    - [1导入纯数据文件](#1导入纯数据文件)
    - [2导入SQL文件](#2导入sql文件)
  - [14 导出](#14-导出)
  - [15 备份](#15-备份)
  - [16 恢复](#16-恢复)

# MySQL基础

## 1 安装和启动

### 1安装

1. 安装MySQL 服务端、核心程序 `sudo apt-get install mysql-server`
2. 安装MySQL 客户端 `sudo apt-get install mysql-client`

### 2启动

1. `sudo service mysql start` 启动MySQL服务
2. `sudo service mysql stop` 停止MySQL服务
3. `sudo service mysql restart` 重启MySQL服务
4. `sudo service mysql reload` 重新加载MySQL服务

## 2 登录和退出

1. `mysql <-h hostname> <-P port> -u [username] -p` 使用username 登录某主机hostname 上某端口port 处的mysql服务器,选项后面的空格可有可无
2. `QUIT` 或 `EXIT` 退出mysql

## 3 数据库

### 1新建数据库

1. `CREATE DATABASE [databasename];` 新建一个名为databasename 的数据库
2. `命令本身不区分大小写`,但是为了好区分,一般把保留字大写,把数据和变量小写

### 2查看数据库

1. `SHOW DATABASES;` 查看全部数据库

### 3连接数据库

1. `USE [database_name]` 连接某一数据库

### 4删除数据库

1. `DROP DATABASE [database_name];` 删除某数据库

### 5重命名数据库(已移除)

1. 重命名曾经加入过,很容易带来危险,不久被移除,没有存在的必要性

## 4 数据表

### 1新建数据表

```sql
# 注意:下面的都是反单引号,为了区分 MySQL 关键字与普通字符而引入的符号,一般表名与字段名都使用反引号
CREATE TABLE IF NOT EXISTS `runoob_tbl`
(
   列名 数据类型(数据长度) 约束,
   `runoob_id` INT UNSIGNED AUTO_INCREMENT,
   `runoob_title` VARCHAR(100) NOT NULL,
   `runoob_author` VARCHAR(40) NOT NULL,
   `submission_date` DATE,
   PRIMARY KEY ( `runoob_id` )
)ENGINE=InnoDB DEFAULT CHARSET=utf8;
```

### 2查看数据表

1. `SHOW TABLES;` 查看全部数据表
2. `DESC [table_name];` 查看某数据表的结构

### 3删除数据表

1. `DROP TABLE [table_name];` 删除某数据表 

### 4重命名数据表

1. 重命名一张表的语句有多种形式,以下 3 种格式效果是`一样`的
   1. `RENAME TABLE table_old TO table_new;`
   2. `ALTER TABLE table_old RENAME table_new;`
   3. `ALTER TABLE table_old RENAME TO table_new;`

### 5修改数据表结构

> 修改表结构非常危险,非必要不要修改

#### 1增加一列

1. `ALTER TABLE [表名] ADD COLUMN [列名] <数据类型> <约束>;`
2. `ALTER TABLE [表名] ADD [列名] <数据类型> <约束>;` 与上一句等价
3. `ALTER TABLE employee ADD height INT(4) DEFAULT 170;` 语句中的 INT(4) 不是表示整数的字节数,而是表示该值的显示宽度,即最大值9999
4. 新增加的列默认放置在这张表的最右边.如果要把增加的列插入在指定位置,则需要在语句最后使用 `AFTER` 关键词( `AFTER 列1` 表示新增的列被放置在 `列1` 的后面) `ALTER TABLE employee ADD weight INT(4) DEFAULT 120 AFTER age;`
5. 如果想放在第一列的位置,则使用 `FIRST` 关键词 `ALTER TABLE employee ADD test INT(4) DEFAULT 123 FIRST;`

#### 2删除一列

1. `ALTER TABLE [表名] DROP COLUMN [列名];`
2. `ALTER TABLE [表名] DROP [列名];` 与上一句等价
3. `ALTER TABLE employee DROP test;`

#### 3修改一列

##### 1重命名一列

1. `ALTER TABLE [表名] CHANGE [原列名] [新列名] [数据类型] <约束>;` 重命名语句后面的 `数据类型` 不能省略,否则重命名失败

##### 2修改一列

> 修改数据类型可能会导致数据丢失,要慎重使用

1. `ALTER TABLE [表名] CHANGE [原列名] [原列名] [新数据类型] <新约束>;`
   1. 当原列名和新列名相同的时候,指定新的数据类型或约束,就可以用于`修改数据类型或约束`
2. 还可以使用 `ALTER TABLE [表名] MODIFY [列名] [新数据类型] [新约束];` 与上一句等价

## 5 数据类型

### 1数值类型

<table align="center">
<tbody>
<tr>
<td width="10%">
<div align="left"><strong>类型</strong></div>
</td>
<td width="15%">
<div align="left"><strong>大小</strong></div>
</td>
<td width="30%">
<div align="left"><strong>范围（有符号）</strong></div>
</td>
<td width="30%">
<div align="left"><strong>范围（无符号）</strong></div>
</td>
<td width="15%">
<div align="left"><strong>用途</strong></div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">TINYINT</div>
</td>
<td width="15%">
<div align="left">1 字节</div>
</td>
<td width="30%">
<div align="left">(-128，127)</div>
</td>
<td width="30%">
<div align="left">(0，255)</div>
</td>
<td width="15%">
<div align="left">小整数值</div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">SMALLINT</div>
</td>
<td width="15%">
<div align="left">2 字节</div>
</td>
<td width="30%">
<div align="left">(-32 768，32 767)</div>
</td>
<td width="30%">
<div align="left">(0，65 535)</div>
</td>
<td width="15%">
<div align="left">大整数值</div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">MEDIUMINT</div>
</td>
<td width="15%">
<div align="left">3 字节</div>
</td>
<td width="30%">
<div align="left">(-8 388 608，8 388 607)</div>
</td>
<td width="30%">
<div align="left">(0，16 777 215)</div>
</td>
<td width="15%">
<div align="left">大整数值</div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">INT或INTEGER</div>
</td>
<td width="15%">
<div align="left">4 字节</div>
</td>
<td width="30%">
<div align="left">(-2 147 483 648，2 147 483 647)</div>
</td>
<td width="30%">
<div align="left">(0，4 294 967 295)</div>
</td>
<td width="15%">
<div align="left">大整数值</div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">BIGINT</div>
</td>
<td width="15%">
<div align="left">8 字节</div>
</td>
<td width="30%">
<div align="left">(-9 233 372 036 854 775 808，9 223 372 036 854
775 807)</div>
</td>
<td width="30%">
<div align="left">(0，18 446 744 073 709 551 615)</div>
</td>
<td width="15%">
<div align="left">极大整数值</div>
</td>
</tr>
<tr>
<td>
<div align="left">FLOAT</div>
</td>
<td width="15%">
<div align="left">4 字节</div>
</td>
<td width="30%">
<div align="left">(-3.402 823 466 E+38，1.175 494 351
E-38)，0，(1.175 494 351 E-38，3.402 823 466 351 E+38)</div>
</td>
<td width="30%">
<div align="left">0，(1.175 494 351 E-38，3.402 823 466 E+38)</div>
</td>
<td>
<div align="left">单精度<br>
浮点数值</div>
</td>
</tr>
<tr>
<td>
<div align="left">DOUBLE</div>
</td>
<td width="15%">
<div align="left">8 字节</div>
</td>
<td width="30%">
<div align="left">(1.797 693 134 862 315 7 E+308，2.225 073 858 507
201 4 E-308)，0，(2.225 073 858 507 201 4 E-308，1.797 693 134 862
315 7 E+308)</div>
</td>
<td width="30%">
<div align="left">0，(2.225 073 858 507 201 4 E-308，1.797 693 134
862 315 7 E+308)</div>
</td>
<td>
<div align="left">双精度<br>
浮点数值</div>
</td>
</tr>
<tr>
<td>
<div align="left">DECIMAL</div>
</td>
<td width="15%">
<div align="left">对DECIMAL(M,D) ，如果M&gt;D，为M+2否则为D+2</div>
</td>
<td width="30%">
<div align="left">依赖于M和D的值</div>
</td>
<td width="30%">
<div align="left">依赖于M和D的值</div>
</td>
<td>
<div align="left">小数值</div>
</td>
</tr>
</tbody>
</table>

### 2字符串类型

<table align="center">
<tbody>
<tr>
<td width="20%">
<div align="left"><strong>类型</strong></div>
</td>
<td width="25%">
<div align="left"><strong>大小</strong></div>
</td>
<td width="55%">
<div align="left"><strong>用途</strong></div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">CHAR</div>
</td>
<td width="25%">
<div align="left">0-255字节</div>
</td>
<td width="55%">
<div align="left">定长字符串</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">VARCHAR</div>
</td>
<td width="25%">
<div align="left">0-255字节</div>
</td>
<td width="55%">
<div align="left">变长字符串</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">TINYBLOB</div>
</td>
<td width="25%">
<div align="left">0-255字节</div>
</td>
<td width="55%">
<div align="left">不超过 255 个字符的二进制字符串</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">TINYTEXT</div>
</td>
<td width="25%">
<div align="left">0-255字节</div>
</td>
<td width="55%">
<div align="left">短文本字符串</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">BLOB</div>
</td>
<td width="25%">
<div align="left">0-65 535字节</div>
</td>
<td width="55%">
<div align="left">二进制形式的长文本数据</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">TEXT</div>
</td>
<td width="25%">
<div align="left">0-65 535字节</div>
</td>
<td width="55%">
<div align="left">长文本数据</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">MEDIUMBLOB</div>
</td>
<td width="25%">
<div align="left">0-16 777 215字节</div>
</td>
<td width="55%">
<div align="left">二进制形式的中等长度文本数据</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">MEDIUMTEXT</div>
</td>
<td width="25%">
<div align="left">0-16 777 215字节</div>
</td>
<td width="55%">
<div align="left">中等长度文本数据</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">LOGNGBLOB</div>
</td>
<td width="25%">
<div align="left">0-4 294 967 295字节</div>
</td>
<td width="55%">
<div align="left">二进制形式的极大文本数据</div>
</td>
</tr>
<tr>
<td width="20%">
<div align="left">LONGTEXT</div>
</td>
<td width="25%">
<div align="left">0-4 294 967 295字节</div>
</td>
<td width="55%">
<div align="left">极大文本数据</div>
</td>
</tr>
</tbody>
</table>

### 3日期时间类型

<table align="center">
<tbody>
<tr>
<td width="10%">
<div align="left"><strong>类型</strong></div>
</td>
<td width="10%">
<div align="left"><strong>大小<br>
(字节)</strong></div>
</td>
<td width="40%">
<div align="left"><strong>范围</strong></div>
</td>
<td width="20%">
<div align="left"><strong>格式</strong></div>
</td>
<td width="20%">
<div align="left"><strong>用途</strong></div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">DATE</div>
</td>
<td width="10%">
<div align="left">3</div>
</td>
<td width="40%">
<div align="left">1000-01-01/9999-12-31</div>
</td>
<td width="20%">
<div align="left">YYYY-MM-DD</div>
</td>
<td width="20%">
<div align="left">日期值</div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">TIME</div>
</td>
<td width="10%">
<div align="left">3</div>
</td>
<td width="40%">
<div align="left">'-838:59:59'/'838:59:59'</div>
</td>
<td width="20%">
<div align="left">HH:MM:SS</div>
</td>
<td width="20%">
<div align="left">时间值或持续时间</div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">YEAR</div>
</td>
<td width="10%">
<div align="left">1</div>
</td>
<td width="40%">
<div align="left">1901/2155</div>
</td>
<td width="20%">
<div align="left">YYYY</div>
</td>
<td width="20%">
<div align="left">年份值</div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">DATETIME</div>
</td>
<td width="10%">
<div align="left">8</div>
</td>
<td width="40%">
<div align="left">1000-01-01 00:00:00/9999-12-31 23:59:59</div>
</td>
<td width="20%">
<div align="left">YYYY-MM-DD HH:MM:SS</div>
</td>
<td width="20%">
<div align="left">混合日期和时间值</div>
</td>
</tr>
<tr>
<td width="10%">
<div align="left">TIMESTAMP</div>
</td>
<td width="10%">
<div align="left">8</div>
</td>
<td width="40%">
<div align="left">1970-01-01 00:00:00/2037 年某时</div>
</td>
<td width="20%">
<div align="left">YYYYMMDD HHMMSS</div>
</td>
<td width="20%">
<div align="left">混合日期和时间值，时间戳</div>
</td>
</tr>
</tbody>
</table>

## 6 增加数据

1. `INSERT INTO [表名] (列名a,列名b,列名c) VALUES(值1,值2,值3),(值4,值5,值6);` 向数据表中对应列增加一行或多行数据
2. ```sql
   INSERT INTO employee(id,name,phone) VALUES(01,'Tom',110110110);
   ```
3. CHAR,VARCHAR,TEXT,DATE,TIME,ENUM 等类型的数据需要单引号修饰,而INT,FLOAT,DOUBLE 等不需要
4. 列名不全时默认向缺少列添加NULL
5. 省略列名时默认添加全部列

## 7 约束

> 约束是一种限制,它通过对表的行或列的数据做出限制,来确保表的数据的完整性、唯一性

```sql
CREATE TABLE department
(
  dpt_name   CHAR(20) NOT NULL,
  people_num INT(10) DEFAULT '10',
  CONSTRAINT dpt_pk PRIMARY KEY (dpt_name)
);

CREATE TABLE employee
(
  id      INT(10) PRIMARY KEY,
  name    CHAR(20),
  age     INT(10),
  salary  INT(10) NOT NULL,
  phone   INT(12) NOT NULL,
  in_dpt  CHAR(20) NOT NULL,
  UNIQUE  (phone),
  CONSTRAINT emp_fk FOREIGN KEY (in_dpt) REFERENCES department(dpt_name)
);

CREATE TABLE project
(
  proj_num   INT(10) NOT NULL,
  proj_name  CHAR(20) NOT NULL,
  start_date DATE NOT NULL,
  end_date   DATE DEFAULT '2015-04-01',
  of_dpt     CHAR(20) REFERENCES department(dpt_name),
  CONSTRAINT proj_pk PRIMARY KEY (proj_num,proj_name)
);
```

### 1约束分类

<table>
<thead>
<tr>
<th>约束类型</th>
<th>主键</th>
<th>默认值</th>
<th>唯一</th>
<th>外键</th>
<th>非空</th>
</tr>
</thead>
<tbody><tr>
<td>关键字</td>
<td>PRIMARY KEY</td>
<td>DEFAULT</td>
<td>UNIQUE</td>
<td>FOREIGN KEY</td>
<td>NOT NULL</td>
</tr>
</tbody></table>

### 2主键

> 主键 (PRIMARY KEY)是用于约束表中的一行,作为这一行的唯一标识符,在一张表中通过主键就能准确定位到一行,因此主键十分重要,主键不能有重复记录且不能为空

1. ```sql
    CREATE TABLE employee
    (
        id INT(10) PRIMARY KEY
    );
    ```
2. ```sql
    CREATE TABLE department
    (
        dpt_name CHAR(20) NOT NULL,
        CONSTRAINT dpt_pk{自定义主键名} PRIMARY KEY (dpt_name)
    );
    ```
3. ```sql
    CREATE TABLE project
    (
        proj_num  INT(10) NOT NULL,
        proj_name CHAR(20) NOT NULL,
        CONSTRAINT proj_pk{自定义主键名,复合主键} PRIMARY KEY (proj_num,proj_name)
    );
    ```

### 3默认值约束

1. 默认值约束 (DEFAULT) 规定: 当有DEFAULT 约束的列插入数据为空时,将使用默认值
2. 默认值常用于一些可有可无的字段
3. DEFAULT 约束只会在使用 INSERT 语句时体现出来.INSERT 语句中，如果被DEFAULT 约束的位置没有值，那么这个位置将会被DEFAULT 的值填充
4. ```sql
    CREATE TABLE department
    (
        people_num INT(10) DEFAULT '10'
    );
    ```

### 4唯一约束

1. 唯一约束 (UNIQUE) 规定一张表中指定的一列的值必须不能有重复值,即这一列每个值都是唯一的
2. ```sql
    CREATE TABLE employee
    (
        phone   INT(12) NOT NULL,
        UNIQUE  (phone)
    );
    ```

### 5外键约束

1. 外键 (FOREIGN KEY) 既能确保数据完整性,也能表现表之间的关系
2. 不能删除一个正在被外键指向的数据
3. 创建新数据时外键也不能指向一个不存在的数据
4. 一个表可以有多个外键,每个外键必须REFERENCES (参考) 另一个表的唯一约束字段(不一定是主键),被外键约束的列,取值必须在它参考的列中有对应值
5. ```sql
    CREATE TABLE employee
    (
        in_dpt  CHAR(20) NOT NULL,
        CONSTRAINT emp_fk{自定义外键名} FOREIGN KEY (in_dpt){in_dpt是外键} REFERENCES department(dpt_name){参考列为department表中的dpt_name列}
    );
    ```
6. ```sql
    CREATE TABLE project
    (
       of_dpt CHAR(20) REFERENCES department(dpt_name)
    );
    ```

### 6非空约束

1. 非空约束 (NOT NULL),被非空约束的列,在插入值时必须非空
2. ```sql
    CREATE TABLE department
    (
       dpt_name CHAR(20) NOT NULL
    );
    ```

## 8 查询数据

### 1基本查询语句

1. 基本的SELECT语句`SELECT 要查询的列1,列2 FROM 表名 WHERE 限制条件;`
2. `SELECT name,age FROM employee;`
3. `SELECT * FROM employee;`

### 2数学符号条件

1. SELECT 语句常常会有WHERE 限制条件,用于达到更加精确的查询.WHERE限制条件可以有数学符号 `(=,<,>,>=,<=)`
2. `SELECT name,age FROM employee WHERE age>25;`
3. `SELECT name,age,phone FROM employee WHERE agename='Mary';`

### 3AND与OR

1. WHERE 后面可以有不止一条限制.根据条件之间的逻辑关系,可以用`[条件一 OR 条件二]` 和 `[条件一 AND 条件二]` 连接
2. `SELECT name,age FROM employee WHERE age<25 OR age>30;`
3. `SELECT name,age FROM employee WHERE age>25 AND age<30;` 不包括25和30
4. `SELECT name,age FROM employee WHERE age BETWEEN 25 AND 30;` 包括25和30

### 4IN和NOT IN

1. 关键词IN 和NOT IN 用于筛选"在"或"不在"某个范围内的结果
2. `SELECT name,age,in_dpt FROM employee WHERE in_dpt IN ('dpt3','dpt4');`
3. `SELECT name,age,in_dpt FROM employee WHERE in_dpt NOT IN ('dpt1','dpt3');`

### 5通配符

1. 关键字`LIKE` 可用于实现模糊查询,常见于搜索功能中
2. 和LIKE 联用的通常还有通配符,代表未知字符.SQL中的通配符是 `_ 和 %` .其中 `_` 代表一个未指定字, `%` 代表不定个未指定字符
3. `SELECT name,age,phone FROM employee WHERE phone LIKE '1101__';`
4. `SELECT name,age,phone FROM employee WHERE name LIKE 'J%';`

### 6对结果排序

1. 为了使查询结果更顺眼,可能需要对结果按某一列来排序,这就要用到`ORDER BY` 排序关键词
2. 默认情况下,ORDER BY 的结果是升序排列,而使用关键词 `ASC 和 DESC` 可指定升序或降序排序
3. `SELECT name,age,salary FROM employee ORDER BY salary DESC;`

### 7内置函数和计算

<table>
<thead>
<tr>
<th>函数名</th>
<th>COUNT</th>
<th>SUM</th>
<th>AVG</th>
<th>MAX</th>
<th>MIN</th>
</tr>
</thead>
<tbody><tr>
<td>作用</td>
<td>计数</td>
<td>求和</td>
<td>求平均值</td>
<td>最大值</td>
<td>最小值</td>
</tr>
</tbody></table>

> 其中 COUNT 函数可用于任何数据类型(因为它只是计数),而 SUM 、AVG 函数都只能对数字类数据类型做计算, MAX 和 MIN 可用于数值、字符串或是日期时间数据类型

1. SQL 允许对表中的数据进行计算.SQL 有 5 个内置函数,这些函数都对 SELECT 的结果做操作
2. 使用 `AS` 关键词可以给值重命名
3. `SELECT MAX(salary) AS max_salary,MIN(salary) FROM employee;`

### 8子查询

1. 有时必须处理多个表才能获得所需的信息
2. ```sql
   SELECT of_dpt,COUNT(proj_name) AS proj_count FROM project GROUP BY of_dpt
   HAVING of_dpt IN 
   (SELECT in_dpt FROM employee WHERE name='Tom');
   ```
3. 第二个 SELECT 语句将返回一个集合的数据形式,然后被第一个 SELECT 语句用 IN 进行判断
4. `HAVING` 关键字的作用和 WHERE 一样,都是说明接下来要进行条件筛选操作
5. 区别在于 HAVING 用于对分组后的数据进行筛选

### 9连接查询

1. 在处理多个表时,子查询只有在结果来自一个表时才有用.但如果需要显示两个表或多个表中的数据,这时就必须使用`连接 (join) 操作` . 连接的基本思想是把两个或多个表`当作一个新的表`来操作
2. ```sql
    SELECT id,name,people_num
    FROM employee,department
    WHERE employee.in_dpt=department.dpt_name
    ORDER BY id;
    ```
3. 另一个连接语句格式是使用 `JOIN ON` 语法
4. ```sql
    SELECT id,name,people_num
    FROM employee JOIN department
    ON employee.in_dpt=department.dpt_name
    ORDER BY id;
    ```
5. 两条语句结果相同

## 9 修改数据

> 通常不会修改整个数据库或整张表,而是表中的某一个或几个数据,需要用 `UPDATE` 命令进行精确的修改

1. `UPDATE [表名] SET [列1=值1,列2=值2] WHERE [条件];`
2. `UPDATE employee SET age=21,salary=3000 WHERE name='Tom';` WHERE条件`必不可少`,否则会修改整个数据表,很严重

## 10 删除数据

> 删除表中的一行数据,`必须加上 WHERE 条件`,否则整列的数据都会被删除

1. `DELETE FROM [表名] WHERE [条件];`
2. `DELETE FROM employee WHERE name='Tom';`

## 11 索引

> 索引相当于书的目录,没有索引的查找会全表搜索,一一对比,浪费大量时间  
> 添加索引后通过索引值快速找到表中数据,`大大加快查询速度`

### 1新建索引

1. `ALTER TABLE [表名] ADD INDEX [索引名] (列名);` 应用于表创建完毕之后再添加,可用于创建普通索引、UNIQUE索引和PRIMARY KEY索引3种索引格式
2. `CREATE INDEX [索引名] ON [表名] (列名);` 用于建表时创建索引,只能对表增加普通索引或UNIQUE索引,不能创建PRIMARY KEY索引
3. 在使用 SELECT 语句查询的时候,语句中 WHERE 里面的条件,会自动判断有没有可用的索引
4. 一般选择不重复,限制强的列建索引,大量重复的字段(比如性别)不适合建索引

### 2查看索引

1. `SHOW INDEX FROM [表名];` 查看某数据表的全部索引

### 3删除索引

1. 删除索引可以使用ALTER TABLE或DROP INDEX语句来实现.DROP INDEX可以在ALTER TABLE内部作为一条语句处理
2. `DROP INDEX index_name ON table_name ;`
3. `ALTER TABLE table_name DROP INDEX index_name ;`
4. `ALTER TABLE table_name DROP PRIMARY KEY;` 一个表只可能有一个PRIMARY KEY索引,因此不需要指定索引名

## 12 视图

1. 视图是从一个或多个表中导出来的表,是一种`虚拟存在的表`.它就像一个窗口,通过这个窗口可以看到系统专门提供的数据.用户可以不用看到整个数据库中的数据,而只关心对自己有用的数据
   1. 数据库中`只存放了视图的定义`,而没有存放视图中的数据,这些数据存放在原来的表中
   2. 使用视图查询数据时,数据库系统会从原来的表中取出对应的数据
   3. 视图中的数据依赖于原来表中的数据,一旦表中数据发生改变,显示在视图中的数据也会发生改变
   4. 在使用视图的时候,可以把它当作一张表
2. `CREATE VIEW [视图名] (列a,列b,列c) AS SELECT 列1,列2,列3 FROM [表名];`
3. 创建视图的语句,后半句是一个 SELECT 查询语句,所以`视图也可以建立在多张表上`,只需在 SELECT 语句中使用子查询或连接查询

## 13 导入

### 1导入纯数据文件

1. 导入一个纯数据文件,该文件中应包含与数据表字段相对应的多条数据,可以快速导入大量数据,把一个文件里的数据保存进一张表
2. 数据文件导入方式只包含数据,导入规则由数据库系统完成
3. 导入导出大量数据都属于敏感操作,根据 mysql 的安全策略,导入导出的文件都必须在指定的路径下进行,在 mysql 终端中查看路径变量 `SHOW VARIABLES LIKE %secure%` 找到 `secure_file_priv = /var/lib/mysql-files/`
4. 将数据文件移动到指定的 `secure_file_priv` 目录下
5. 执行 `LOAD DATA INFILE '/var/lib/mysql-files/in.txt' INTO TABLE table_name;` 导入数据

### 2导入SQL文件

1. SQL 文件导入相当于执行该文件中包含的 SQL 语句,可以实现多种操作,包括删除,更新,新增,甚至对数据库的重建
2. `SOURCE *.sql` SQL文件可在任意位置

## 14 导出

1. 导出与导入是相反的过程,是把数据库某个表中的数据保存到一个文件之中
2. `SELECT 列1,列2 INTO OUTFILE '文件路径和文件名' FROM 表名字;`  "文件路径" 之下不能已经有同名文件
3. ```sql
    SELECT a,b,a+b INTO OUTFILE '/tmp/result.text'
    FIELDS TERMINATED BY ',' OPTIONALLY ENCLOSED BY '"'
    LINES TERMINATED BY '\n'
    FROM test_table;
    ```

## 15 备份

> 备份与导出的区别:导出的文件只是保存数据库中的数据;而备份,则是把数据库的结构,包括数据、约束、索引、视图等全部另存为一个文件

1. mysqldump 是 MySQL 用于备份数据库的实用程序.它主要产生一个 SQL 脚本文件,其中包含从头重新创建数据库所必需的命令 CREATE TABLE INSERT 等
2. ```shell
    mysqldump -u root 数据库名 > 备份文件名;   # 备份整个数据库
    mysqldump -u root 数据库名 表名字 > 备份文件名;  # 备份整个表
    ```

## 16 恢复

1. 第一种 `SOURCE *.sql`
2. 第二种: 新建一个空白数据库 `CREATE DATABASE test;` 然后 `mysql -uroot test < bak.sql;`
