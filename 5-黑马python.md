- [黑马python](#黑马python)
  - [~~>>>15-flask教程{19-3-21}~~](#15-flask教程19-3-21)
    - [??-??-??](#--)
      - [路由模块=Werkzeug](#路由模块werkzeug)
      - [模板引擎=jinja2](#模板引擎jinja2)
      - [操作数据库=Flask-SQLalchemy](#操作数据库flask-sqlalchemy)
      - [表单=Flask-WTF](#表单flask-wtf)
      - [扩展命令行=Flask-script](#扩展命令行flask-script)
      - [认证用户状态=Flask-Login](#认证用户状态flask-login)
      - [开发REST API的工具=Flask-RESTful](#开发rest-api的工具flask-restful)
      - [集成前端Twitter Bootstrap框架=Flask-Bootstrap](#集成前端twitter-bootstrap框架flask-bootstrap)
      - [本地化日期和时间=Flask-Moment](#本地化日期和时间flask-moment)
      - [反向解析=url_for](#反向解析url_for)
      - [JSON数据=jsonify](#json数据jsonify)
    - [19-3-20](#19-3-20)
      - [数据库迁移=Flask-Migrate](#数据库迁移flask-migrate)
      - [邮箱扩展=Flask-Mail](#邮箱扩展flask-mail)
      - [模块划分,循环引用,蓝图](#模块划分循环引用蓝图)
    - [19-3-21](#19-3-21)
      - [单元测试](#单元测试)
      - [部署](#部署)
  - [~~>>>16-微信公众号{19-3-23}~~](#16-微信公众号19-3-23)
    - [19-3-23](#19-3-23)
      - [微信公众号服务器配置](#微信公众号服务器配置)
      - [收发消息,事件](#收发消息事件)
      - [微信网页授权](#微信网页授权)
  - [~~>>>17-flask项目-爱家租房{19-4-12}~~](#17-flask项目-爱家租房19-4-12)
    - [19-3-29](#19-3-29)
      - [前后端分离](#前后端分离)
      - [项目文件目录结构](#项目文件目录结构)
      - [日志功能](#日志功能)
    - [19-3-30](#19-3-30)
      - [数据表设计](#数据表设计)
      - [日志系统bug](#日志系统bug)
      - [数据库迁移](#数据库迁移)
      - [19-3-31](#19-3-31)
      - [静态文件接口](#静态文件接口)
      - [csrf防护](#csrf防护)
      - [图片验证码](#图片验证码)
      - [开发流程与接口文档](#开发流程与接口文档)
      - [短信验证](#短信验证)
    - [19-4-3](#19-4-3)
      - [注册](#注册)
        - [参数校验](#参数校验)
        - [密码加密](#密码加密)
        - [property装饰器](#property装饰器)
        - [前端拦截表单提交](#前端拦截表单提交)
        - [前端请求头传递csrf_token](#前端请求头传递csrf_token)
      - [登录](#登录)
        - [限制访问次数](#限制访问次数)
        - [后端检查登录状态接口](#后端检查登录状态接口)
        - [后端登出接口](#后端登出接口)
        - [登录验证装饰器](#登录验证装饰器)
    - [19-4-4](#19-4-4)
      - [图片服务](#图片服务)
        - [搭建文件存储系统](#搭建文件存储系统)
        - [第三方服务](#第三方服务)
        - [前端异步提交](#前端异步提交)
      - [城区信息--缓存](#城区信息--缓存)
        - [缓存的同步问题](#缓存的同步问题)
      - [前端模板](#前端模板)
    - [19-4-6](#19-4-6)
      - [发布房源](#发布房源)
        - [保存房屋基本信息后端](#保存房屋基本信息后端)
        - [保存房屋图片信息后端](#保存房屋图片信息后端)
        - [保存房屋信息前端](#保存房屋信息前端)
    - [19-4-7](#19-4-7)
      - [celery](#celery)
        - [celery模型](#celery模型)
        - [celery使用](#celery使用)
        - [celery目录结构](#celery目录结构)
        - [celery独立的目录使用](#celery独立的目录使用)
        - [celery接收返回值](#celery接收返回值)
    - [19-4-9](#19-4-9)
      - [房屋管理](#房屋管理)
        - [展示我的房源](#展示我的房源)
        - [显示主页数据](#显示主页数据)
        - [房屋详情数据](#房屋详情数据)
    - [19-4-11](#19-4-11)
      - [房屋列表](#房屋列表)
        - [过滤规则](#过滤规则)
        - [缓存处理](#缓存处理)
      - [订单](#订单)
        - [时间处理](#时间处理)
        - [保存订单](#保存订单)
        - [查询订单](#查询订单)
        - [接单/拒单](#接单拒单)
        - [评论](#评论)
      - [订单支付](#订单支付)
        - [支付宝接入流程](#支付宝接入流程)
        - [手机网站支付流程](#手机网站支付流程)
    - [19-4-12](#19-4-12)
      - [订单支付(续)](#订单支付续)
        - [支付宝密钥与SDK使用](#支付宝密钥与sdk使用)
        - [支付宝支付后端接口](#支付宝支付后端接口)
        - [获取支付结果修改订单](#获取支付结果修改订单)
      - [项目优化](#项目优化)
        - [csrf_token丢失bug的解决](#csrf_token丢失bug的解决)
        - [数据库优化](#数据库优化)
          - [工作流程](#工作流程)
  - [~~>>>18-通用爬虫模块{19-5-26}~~](#18-通用爬虫模块19-5-26)
    - [19-4-14](#19-4-14)
      - [爬虫基本概念](#爬虫基本概念)
        - [课程介绍和概念](#课程介绍和概念)
        - [爬虫的分类](#爬虫的分类)
        - [markdown介绍](#markdown介绍)
        - [robots协议](#robots协议)
        - [HTTP和HTTPS协议](#http和https协议)
        - [浏览器发送HTTP请求的过程](#浏览器发送http请求的过程)
    - [19-4-19](#19-4-19)
        - [爬虫基本概念[续]](#爬虫基本概念续)
          - [URL和HTTP请求格式](#url和http请求格式)
          - [字符串类型](#字符串类型)
        - [requests库](#requests库)
          - [发送请求和获取网页字符串](#发送请求和获取网页字符串)
          - [requests发送带参数的请求](#requests发送带参数的请求)
    - [19-4-20](#19-4-20)
      - [requests库[续]](#requests库续)
        - [贴吧爬虫](#贴吧爬虫)
        - [发送POST请求](#发送post请求)
        - [使用代理](#使用代理)
        - [模拟登录的三种方式](#模拟登录的三种方式)
      - [chrome分析psot和json](#chrome分析psot和json)
          - [寻找post的地址](#寻找post的地址)
          - [寻找js和分析js](#寻找js和分析js)
          - [requests小技巧](#requests小技巧)
    - [19-4-21](#19-4-21)
      - [json数据处理](#json数据处理)
        - [数据的分类](#数据的分类)
        - [json模块](#json模块)
        - [豆瓣爬虫练习](#豆瓣爬虫练习)
    - [19-4-22](#19-4-22)
      - [正则处理](#正则处理)
        - [正则和原始字符串](#正则和原始字符串)
        - [内涵段子爬虫](#内涵段子爬虫)
    - [19-4-23](#19-4-23)
      - [XPATN处理数据](#xpatn处理数据)
        - [了解XML](#了解xml)
        - [XPATH](#xpath)
        - [lxml库](#lxml库)
      - [通用爬虫案例](#通用爬虫案例)
        - [xpath的包含](#xpath的包含)
        - [实现爬虫的套路](#实现爬虫的套路)
        - [百度爬虫](#百度爬虫)
        - [糗事百科爬虫](#糗事百科爬虫)
        - [多线程爬虫](#多线程爬虫)
    - [19-4-24](#19-4-24)
      - [爬取动态html数据](#爬取动态html数据)
        - [动态HTML技术](#动态html技术)
        - [Selenium](#selenium)
        - [PhantomJS](#phantomjs)
        - [豆瓣登陆案例](#豆瓣登陆案例)
        - [验证码的识别](#验证码的识别)
        - [selenium使用的注意点](#selenium使用的注意点)
        - [使用Tesseract](#使用tesseract)
    - [19-4-25](#19-4-25)
      - [斗鱼爬虫](#斗鱼爬虫)
      - [mongodb介绍及安装](#mongodb介绍及安装)
    - [19-4-26](#19-4-26)
      - [mongodb增删改查](#mongodb增删改查)
        - [基础命令](#基础命令)
        - [集合](#集合)
        - [数据类型](#数据类型)
        - [mongodb插入数据](#mongodb插入数据)
        - [mongodb查询数据](#mongodb查询数据)
        - [mongodb更新数据](#mongodb更新数据)
        - [mongodb删除数据](#mongodb删除数据)
    - [19-5-1](#19-5-1)
      - [mongodb高级查询](#mongodb高级查询)
        - [find基本](#find基本)
        - [比较运算符](#比较运算符)
        - [范围运算符](#范围运算符)
        - [逻辑运算符](#逻辑运算符)
        - [正则表达式](#正则表达式)
        - [limit和skip](#limit和skip)
        - [自定义查询](#自定义查询)
        - [投影](#投影)
        - [排序](#排序)
        - [统计个数](#统计个数)
        - [消除重复](#消除重复)
      - [mongodb备份与回复](#mongodb备份与回复)
        - [mongodb备份](#mongodb备份)
        - [mongodb恢复](#mongodb恢复)
      - [mongodb聚合](#mongodb聚合)
        - [常用管道](#常用管道)
        - [表达式](#表达式)
        - [$group](#group)
        - [$match](#match)
        - [$sort](#sort)
        - [$limit和$skip](#limit和skip)
        - [$unwind](#unwind)
      - [mongodb索引](#mongodb索引)
        - [指令执行时间](#指令执行时间)
        - [建立索引](#建立索引)
      - [爬虫数据去重,实现增量式爬虫](#爬虫数据去重实现增量式爬虫)
    - [19-5-6](#19-5-6)
      - [mongodb豆瓣练习](#mongodb豆瓣练习)
      - [pymongo](#pymongo)
        - [基本操作](#基本操作)
    - [19-5-8](#19-5-8)
      - [scrapy框架介绍](#scrapy框架介绍)
        - [scrapy介绍](#scrapy介绍)
        - [scrapy工作流程](#scrapy工作流程)
        - [scrapy入门使用](#scrapy入门使用)
    - [19-5-12](#19-5-12)
      - [scrapy:pipline,logging](#scrapypiplinelogging)
        - [pipline](#pipline)
        - [logging](#logging)
    - [19-5-13](#19-5-13)
      - [翻页请求,请求头](#翻页请求请求头)
    - [19-5-14](#19-5-14)
      - [item的定义和使用](#item的定义和使用)
      - [debug信息](#debug信息)
      - [scrapy shell](#scrapy-shell)
      - [settings和管道的深入](#settings和管道的深入)
    - [19-5-15](#19-5-15)
      - [苏宁图书爬虫](#苏宁图书爬虫)
    - [19-5-16](#19-5-16)
      - [CrawlSpider](#crawlspider)
    - [19-5-20](#19-5-20)
      - [下载中间件](#下载中间件)
      - [scrapy模拟登录](#scrapy模拟登录)
        - [携带cookie登录](#携带cookie登录)
        - [发送post请求登录](#发送post请求登录)
    - [19-5-21](#19-5-21)
      - [贴吧爬虫-crawlspider版](#贴吧爬虫-crawlspider版)
    - [19-5-24](#19-5-24)
      - [分布式爬虫scrapy_redis概念](#分布式爬虫scrapy_redis概念)
      - [scrapy_redis示例1:dmoz](#scrapy_redis示例1dmoz)
    - [19-5-25](#19-5-25)
      - [scrapy_redis源码](#scrapy_redis源码)
        - [request对象什么时候入队](#request对象什么时候入队)
        - [scrapy_redis去重方法](#scrapy_redis去重方法)
        - [生成指纹](#生成指纹)
        - [判断数据是否存在redis的集合中,不存在插入](#判断数据是否存在redis的集合中不存在插入)
      - [借鉴示例1:京东图书爬虫](#借鉴示例1京东图书爬虫)
      - [scrapy_redis示例2:myspider_redis](#scrapy_redis示例2myspider_redis)
      - [借鉴示例2:当当图书分布式爬虫](#借鉴示例2当当图书分布式爬虫)
    - [19-5-26](#19-5-26)
      - [scrapy_redis示例3:mycrawler_redis](#scrapy_redis示例3mycrawler_redis)
      - [借鉴示例3:亚马逊图书爬虫](#借鉴示例3亚马逊图书爬虫)
      - [pycharm发布代码](#pycharm发布代码)
      - [crontab爬虫定时执行](#crontab爬虫定时执行)
  - [>>>21-数据分析](#21-数据分析)
    - [19-5-30](#19-5-30)
      - [数据分析介绍](#数据分析介绍)
      - [环境安装](#环境安装)
    - [19-6-1](#19-6-1)
      - [matplotlib折线图](#matplotlib折线图)
      - [matplotlib官网样例](#matplotlib官网样例)
    - [19-6-2](#19-6-2)
      - [matplotlib常用统计图](#matplotlib常用统计图)
        - [matplotlib散点图](#matplotlib散点图)
        - [matplotlib条形图](#matplotlib条形图)
        - [matplotlib直方图](#matplotlib直方图)
      - [其他画图工具](#其他画图工具)
      - [numpy数组](#numpy数组)
        - [numpy数组的创建](#numpy数组的创建)
        - [numpy数组数据类型](#numpy数组数据类型)
        - [numpy数组的形状](#numpy数组的形状)
        - [numpy数组的计算](#numpy数组的计算)
        - [数组的轴(axis)](#数组的轴axis)
    - [19-6-7](#19-6-7)
      - [numpy读取本地文件](#numpy读取本地文件)
    - [19-6-8](#19-6-8)
      - [numpy数组的转置](#numpy数组的转置)
      - [numpy数组的切片和索引](#numpy数组的切片和索引)
      - [numpy数组中数值的修改](#numpy数组中数值的修改)
      - [numpy中的nan和inf](#numpy中的nan和inf)
      - [numpy常见统计函数](#numpy常见统计函数)
      - [numpy数组的拼接](#numpy数组的拼接)
      - [numpy更多好用的方法](#numpy更多好用的方法)
      - [numpy生成随机数](#numpy生成随机数)
      - [numpy中的注意点copy和view](#numpy中的注意点copy和view)
    - [19-6-9](#19-6-9)
      - [pandas简介](#pandas简介)
      - [pandas常用数据类型-一维的带标签数组**Series**](#pandas常用数据类型-一维的带标签数组series)
      - [pandas读取外部数据](#pandas读取外部数据)
    - [19-6-11](#19-6-11)
      - [pandas常用数据类型-二维的Series容器**DataFrame**](#pandas常用数据类型-二维的series容器dataframe)
    - [19-6-15](#19-6-15)
      - [DataFrame中的bool索引](#dataframe中的bool索引)
      - [缺失数据的处理](#缺失数据的处理)
      - [pandas常用统计方法](#pandas常用统计方法)

---

# 黑马python

## ~~>>>15-flask教程{19-3-21}~~

### ??-??-??

#### 路由模块=Werkzeug

#### 模板引擎=jinja2

#### 操作数据库=Flask-SQLalchemy

#### 表单=Flask-WTF

#### 扩展命令行=Flask-script

#### 认证用户状态=Flask-Login

#### 开发REST API的工具=Flask-RESTful

#### 集成前端Twitter Bootstrap框架=Flask-Bootstrap

#### 本地化日期和时间=Flask-Moment

#### 反向解析=url_for

#### JSON数据=jsonify

### 19-3-20

#### 数据库迁移=Flask-Migrate

#### 邮箱扩展=Flask-Mail

#### 模块划分,循环引用,蓝图

1. 为视图函数添加路由器
2. 使用蓝图--Blueprint

### 19-3-21

#### 单元测试

* unittest
* flask的测试模式
* 数据库测试

#### 部署

* Gunicorn 绿色独角兽

---

## ~~>>>16-微信公众号{19-3-23}~~

### 19-3-23

#### 微信公众号服务器配置

1. 可以申请公众号的测试号.
2. 配置第三方服务器,返回特定数据用来验证配置.

#### 收发消息,事件

1. XML格式数据通信.
2. 事件响应.

#### 微信网页授权

1. 提供给用户一个URL,包含重定向内容.
2. 用户点击,弹出授权页面.
3. 同意授权后,重定向到第三方服务器.
4. 第三方服务器获取code.
5. 第三方服务器用code访问微信服务器验证.
6. 第三方服务器得到验证之后获取用户信息.
7. 第三方服务器返回网页.

## ~~>>>17-flask项目-爱家租房{19-4-12}~~

1. CloudStudio中`apt update`后安装`mysql-client`和`libmysqlclient-dev`和`redis-server`.
2. pip安装`requirements.txt`和`redis`.
3. 免费数据库`mysql -h db4free.net -P 3306 -umy__sql -p`.
4. 启动redis`sudo /etc/init.d/redis-server start`.
5. 关闭redis.
   1. <kbd>Ctrl</kbd>+<kbd>C</kbd>.
   2. `kill pid`.
   3. `redis-cli shutdown`.
   4. `/etc/init.d/redis-server stop`.

### 19-3-29

#### 前后端分离

1. 前后端不分离,后端提供被数据渲染之后的模板,即完整网页;
2. 前后端分离,后端不再控制前端的效果展示,仅仅提供数据,可以实现接口复用,但不利于SEO.

#### 项目文件目录结构

1. 在单一文件(manage.py)中构建所有依赖工具.
   1. 配置信息.
   2. 数据库.
   3. redis.
   4. 使用flask-session扩展将session保存到redis中.
   5. 使用flask-wtf中的csrfprotrction防护.
2. 依次拆分
   1. 将配置信息拆分(config.py),可以通过继承得到不同的配置,并使用工厂模式根据不同的参数创建不同的app对象.
   2. 创建包`ihome`,在包的`__init__.py`中提供`creat_app`接口,并完成其他相关操作.
      1. 在`ihome`下创建带版本号的包`api_1_0`,在`__init__.py`中创建蓝图,在其中存放视图.
      2. 在`ihome`下创建`static`静态文件.
      3. 在`ihome`下创建`utils`工具.
      4. 在`ihome`下创建`libs`包,存放第三方扩展包.
      5. 在`ihome`下创建`models.py`.
   3. 最终,在`manage.py`中仅仅创建app并提供脚本.

#### 日志功能

* 使用python自带的logging模块以及current_app中的logger全局对象.

### 19-3-30

#### 数据表设计

1. 以存储空间换查询时间.
2. 多对多通过中间表实现.

#### 日志系统bug

* debug模式下设置日志级别不起作用.

#### 数据库迁移

1. `python manage.py db init`.
2. `python manage.py db migrate -m '说明'`别忘了import models证明一下models的存在.
   1. 迁移时报错SQLAlchemy报错(1193),升级SQLAlchemy或者降级mysql可以解决.
3. `python manage.py db upgrade`.

#### 19-3-31

#### 静态文件接口

1. 提供静态文件接口的蓝图.
2. 自定义正则转换器.
3. flask提供了返回静态文件的方法`current_app.send_static_file()`.

#### csrf防护

1. 浏览器--同源策略.
2. 对比cookie和body中的`csrf_token`.
3. 使用`flask-wtf`中的`csrf`生成`csrf_token`,在静态路由中添加之.

#### 图片验证码

1. 使用`captcha`工具.
2. 保存在`redis`中.
3. `RESTful`风格接口.

#### 开发流程与接口文档

#### 短信验证

1. 借助`云通讯`的sdk-python.
2. 使用单例模式封装接口.
3. 发送验证码前后端编写.

### 19-4-3

#### 注册

1. 规定接口;
2. 规定传递的参数.

##### 参数校验

##### 密码加密

* `from werkzeug.security import generate_password_hash`.

##### property装饰器

##### 前端拦截表单提交

1. `e.preventDefault()`拦截表单的自动提交行为;
2. 使用ajax处理.

##### 前端请求头传递csrf_token

#### 登录

1. 接口;
2. 传递的参数.

##### 限制访问次数

1. 使用IP地址(request.remote_addr).存入redis.
2. redis自动递增函数.

##### 后端检查登录状态接口

##### 后端登出接口

##### 登录验证装饰器

1. g对象保留本次访问的信息;
2. `functools.wraps`保留被装饰函数的信息.

### 19-4-4

#### 图片服务

1. 扩容
2. 备份
3. 多机存储

##### 搭建文件存储系统

1. FastDFS-快速分布式文件存储系统,电商.
2. HDFS-Hadoop分布式文件系统,多种文件.

##### 第三方服务

1. 七牛云,使用对应的SDK;
2. 对象存储.

##### 前端异步提交

1. 使用`jquery.form.min.js`中的`ajaxSubmit`对表单进行异步提交.

#### 城区信息--缓存

1. 访问频率高,变化频率低;
2. 缓存和数据库一起存.

##### 缓存的同步问题

1. 操作mysql时删除缓存数据;
2. 设置有效期.

#### 前端模板

1. `art-template`.

### 19-4-6

#### 发布房源

##### 保存房屋基本信息后端

##### 保存房屋图片信息后端

##### 保存房屋信息前端

* JS中的map函数.

### 19-4-7

#### celery

##### celery模型

1. worker(任务处理者)--- 完整的任务代码.
2. broker(任务队列)：rabbitMQ,redis
3. client(客户端)--- 定义任务(使用装饰器app.task)>> 发布任务(.delay)
4. backend(保存结果数据)

##### celery使用

1. 定义celery对象;
2. 定义任务,使用`@celery_app.task`;
3. 发布任务,`.delay(参数)`
4. 启动celery,保证与客户端在同一目录下启动`celery -A 定义任务的python模块 -l info`.

##### celery目录结构

1. 启动文件`main.py`;
2. 配置文件`config.py`;
3. 任务文件(包),可以自动搜寻异步任务.

##### celery独立的目录使用

* celery可以使用独立的目录,只要保证和客户端目录一致即可.

##### celery接收返回值

1. 客户端处返回异步任务对象;
2. 通过返回的对象的`get()方法`可以接收返回值,但是默认是阻塞态.

### 19-4-9

#### 房屋管理

##### 展示我的房源

##### 显示主页数据

1. 存入缓存备用;
2. 前端轮播插件`swiper`.

##### 房屋详情数据

1. 判断是否为房东浏览;
2. 大量数据转换,将方法封装到模型类中;
3. 前端获取请求路径中的搜索参数.

### 19-4-11

#### 房屋列表

* 按照选定的规则进行房屋信息查询.

##### 过滤规则

1. 将数据库比较语句存入过滤器列表中;
2. 魔法方法`__eq__`重写`==`逻辑.

##### 缓存处理

1. 将当前查询条件的结果存入redis中;
2. redis中的`pipline`,是一种管道,一次可以执行多条语句.

#### 订单

##### 时间处理

* datetime时间相减得到时间间隔,用来得到间隔天数.

##### 保存订单

##### 查询订单

##### 接单/拒单

##### 评论

#### 订单支付

##### 支付宝接入流程

##### 手机网站支付流程

### 19-4-12

#### 订单支付(续)

##### 支付宝密钥与SDK使用

1. 使用rsa非对称加密算法;
   1. openssl生成私钥和公钥.
2. 支付宝官方没有提供python版本的SDK,使用第三方`phthon-alipay-sdk`.

##### 支付宝支付后端接口

##### 获取支付结果修改订单

#### 项目优化

##### csrf_token丢失bug的解决

1. WTF默认从session读取;
2. 解决方法:清空session时,单独保留`csrf_token`.

##### 数据库优化

1. 表结构设计优化;
    1. 关系型数据库的三范式
        1. 拆的不能再拆;
        2. 只保留主要信息;
        3. 次要信息.
2. 建索引---主键/唯一约束(unique)/索引(key/index)/外键/组合索引
    1. 使用二叉树,二分搜索
    2. 提升查询速度;
    3. 降低增删改效率.
3. sql语句优化
    1. 最左原则;
    2. 不要使用`select *`;
    3. 能使用联合查询,不使用嵌套;
    4. 如有必要,联合查询也不要用;
    5. 外键---保证数据的完整性,删除外键时,使用级联可以连带删除;
    6. 使用分析工具.
4. 缓存
5. 读写分离
    1. 主从热备份
    2. 主(写)从(查)
6. 分库分表
    1. 垂直分表
    2. 垂直分库
    3. 水平分库分表

###### 工作流程

1. email
2. git---gitlab---账号权限---rsa
3. vpn---虚拟私有网络---阿里云-腾讯云-AWS
4. 数据库

## ~~>>>18-通用爬虫模块{19-5-26}~~

### 19-4-14

#### 爬虫基本概念

##### 课程介绍和概念

1. 动态网页与静态网页;
2. 微指数-微博;
3. 爬虫模拟浏览器行为.

##### 爬虫的分类

1. 通用爬虫
2. 聚焦爬虫

##### markdown介绍

##### robots协议

* 道德层面的协议.

##### HTTP和HTTPS协议

1. HTTP---超文本传输协议,默认端口80;
2. HTTPS---加入SSL(安全套接层),默认端口443;
3. HTTPS更安全,但是性能低.

##### 浏览器发送HTTP请求的过程

1. DNS服务器;
2. 浏览器渲染的页面和爬虫请求的页面不一样.

### 19-4-19

##### 爬虫基本概念[续]

###### URL和HTTP请求格式

1. URL基本格式:`scheme://host[:port#]/path/…/[?query-string][#anchor]`
    1. scheme：协议(例如：http, https, ftp)
    2. host：服务器的IP地址或者域名
    3. port#：服务器的端口(如果是走协议默认端口,缺省端口80)
    4. path：访问资源的路径
    5. query-string：参数,发送给http服务器的数据
    6. anchor：锚(跳转到网页的指定锚点位置)
2. HTTP请求格式:
    1. 请求行,`请求方法+空格+URL+空格+协议版本+回车换行`;
    2. 请求头部,`头部字段名:值+回车换行*n`;
    3. 空行
    4. 请求数据

###### 字符串类型

1. str
2. bytes

##### requests库

###### 发送请求和获取网页字符串

1. 接口简单;
2. 注意解码.

###### requests发送带参数的请求

* `r = requests.get(url,headers=headers)`.

### 19-4-20

#### requests库[续]

##### 贴吧爬虫

##### 发送POST请求

* `r = requests.post("http://www.baidu.com/", data = data)`

##### 使用代理

1. 代理分类
    1. 反向代理nginx,浏览器不知道最终服务器的地址.
    2. 正向代理,浏览器知道最终服务器的地址.
2. 作用
    1. 隐藏真实地址;
    2. 避免服务器识别同一客户.

##### 模拟登录的三种方式

1. cookie和session的区别
    1. cookie浏览器,session服务器.
2. 使用requests中封装的session来保存登录信息.
3. 获取登录后的页面的三种方式
    1. 实例化session,使用session发送post请求,在使用他获取登陆后的页面
    2. headers中添加cookie键,值为cookie字符串
    3. 在请求方法中添加cookies参数,接收字典形式的cookie.字典形式的cookie中的键是cookie的name对应的值,值是cookie的value对应的值

#### chrome分析psot和json

###### 寻找post的地址

1. 在form表单中寻找action对应的url地址
    1. post的数据是input标签中name的值作为键,真正的用户名密码作为值的字典,post的url地址就是action对应的url地址
2. 抓包,寻找登录的url地址
    1. 勾选perserve log按钮,防止页面跳转找不到url
    2. 寻找post数据,确定参数
        1. 参数不会变,直接用,比如密码不是动态加密的时候
        2. 参数会变
            1. 参数在当前的响应中
            2. 通过js生成

###### 寻找js和分析js

1. 选择会触发js时间的按钮,点击event listener,找到js的位置
2. 通过chrome中的search all file来搜索url中关键字
3. 添加断点的方式来查看js的操作,通过python来进行同样的操作

###### requests小技巧

1. 将CookieJar转为字典`requests.utils.dict_from_cookiejar(cookiejar)`
2. url编解码`requests.utils.quote`
3. ssl证书验证`verify=True|False`
4. 超时参数`timeout=10`
5. python模块`retrying`,重复多次

### 19-4-21

#### json数据处理

##### 数据的分类

1. 非结构化数据
    1. 正则
    2. xpath
2. 结构化数据

##### json模块

1. json->python,`json.loads()`
2. python->json,`json.dumps()`
3. 使用`json.load`提取类文件对象中的数据
4. `json.dump`能够把python类型放入类文件对象中

##### 豆瓣爬虫练习

### 19-4-22

#### 正则处理

##### 正则和原始字符串

1. 点号不能匹配`\n`;
2. `re.compile()`.

##### 内涵段子爬虫

### 19-4-23

#### XPATN处理数据

##### 了解XML

##### XPATH

1. 使用xpath helper或者是chrome中的copy xpath都是从element中提取的数据,但是爬虫获取的是url对应的响应,往往和elements不一样
2. 获取文本
    1. `a/text()` 获取a下的文本
    2. `a//text()` 获取a下的所有标签的文本
    3. `//a[text()='下一页']` 选择文本为下一页三个字的a标签
3. `@符号`
    1. `a/@href`
    2. `//ul[@id="detail-list"]`
4. `//`
    1. 在xpath最前面表示从当前html中任意位置开始选择
    2. `li//a` 表示的是li下任何一个标签

##### lxml库

1. lxml能够修正HTML代码,但是可能会改错
    1. 使用etree.tostring观察修改之后的html的样子,根据修改之后的html字符串写xpath
2. lxml 能够接受bytes和str的字符串
3. 提取页面数据的思路
    1. 先分组,渠道一个包含分组标签的列表
    2. 遍历,取其中每一组进行数据的提取,不会造成数据的对应错乱

#### 通用爬虫案例

##### xpath的包含

1. `//div[contains(@class,'i')]`

##### 实现爬虫的套路

1. 准备url
    1. 准备start_url
        1. url地址规律不明显,总数不确定
        2. 通过代码提取下一页的url
            1. xpath
            2. 寻找url地址,部分参数在当前的响应中(比如,当前页码数和总的页码数在当前的响应中)
    2. 准备url_list
        1. 页码总数明确
        2. url地址规律明显
2. 发送请求,获取响应
    1. 添加随机的User-Agent,反反爬虫
    2. 添加随机的代理ip,反反爬虫
    3. 在对方判断出我们是爬虫之后,应该添加更多的headers字段,包括cookie
    4. cookie的处理可以使用session来解决
    5. 准备一堆能用的cookie,组成cookie池
        1. 如果不登录
            1. 准备刚开始能够成功请求对方网站的cookie,即接收对方网站设置在response的cookie
            2. 下一次请求的时候,使用之前的列表中的cookie来请求
        2. 如果登录
            1. 准备多个账号
            2. 使用程序获取每个账号的cookie
            3. 之后请求登录之后才能访问的网站随机的选择cookie
3. 提取数据
    1. 确定数据的位置
        1. 如果数据在当前的url地址中
            1. 提取的是列表页的数据
                1. 直接请求列表页的url地址,不用进入详情页
            2. 提取的是详情页的数据
                1. 确定url
                2. 发送请求
                3. 提取数据
                4. 返回
        2. 如果数据不在当前的url地址中
              1. 在其他的响应中,寻找数据的位置
                  1. 从network中从上往下找
                  2. 使用chrome中的过滤条件,选择出了js,css,img之外的按钮
                  3. 使用chrome的search all file,搜索数字和英文
    2. 数据的提取
        1. xpath,从html中提取整块的数据,先分组,之后每一组再提取
        2. re,提取max_time,price,html中的json字符串
        3. json
4. 保存
    1. 保存在本地,text,json,csv
    2. 保存在数据库

##### 百度爬虫

##### 糗事百科爬虫

##### 多线程爬虫

### 19-4-24

#### 爬取动态html数据

##### 动态HTML技术

1. `JS`;
2. `JQuery`;
3. `Ajax`.

##### Selenium

1. 是一个Web的自动化测试工具,最初是为网站自动化测试而开发的,类型像我们玩游戏用的按键精灵,可以按指定的命令自动操作,不同是Selenium 可以直接运行在浏览器上,它支持所有主流的浏览器(包括PhantomJS这些无界面的浏览器).
2. Selenium 可以根据我们的指令,让浏览器自动加载页面,获取需要的数据,甚至页面截屏,或者判断网站上某些动作是否发生.
3. Selenium 自己不带浏览器,不支持浏览器的功能,它需要与第三方浏览器结合在一起才能使用.但是我们有时候需要让它内嵌在代码中运行,所以我们可以用一个叫 PhantomJS 的工具代替真实的浏览器.

##### PhantomJS

* PhantomJS 是一个基于Webkit的“无界面”(headless)浏览器,它会把网站加载到内存并执行页面上的 JavaScript,因为不会展示图形界面,所以运行起来比完整的浏览器要高效.

##### 豆瓣登陆案例

##### 验证码的识别

1. url不变,验证码不变
    1. 请求验证码的地址,获得相应,识别
2. url不变,验证码会变
    1. 思路：对方服务器返回验证码的时候,会和每个用户的信息和验证码进行一个对应,之后,在用户发送post请求的时候,会对比post请求中发的验证码和当前用户真正的存储在服务器端的验证码是否相同
        1. 实例化session
        2. 使用seesion请求登录页面,获取验证码的地址
        3. 使用session请求验证码,识别
        4. 使用session发送post请求
3. 使用selenium登录,遇到验证码
    1. url不变,验证码不变,同上
    2. url不变,验证码会变
        1. selenium请求登录页面,同时拿到验证码的地址
        2. 获取登录页面中driver中的cookie,交给requests模块发送验证码的请求,识别
        3. 输入验证码,点击登录

##### selenium使用的注意点

1. 获取文本和获取属性
    2. 先定位到元素,然后调用`.text`或者`get_attribute`方法来去
2. selenium获取的页面数据是浏览器中elements的内容
3. find_element和find_elements的区别
    1. find_element返回一个element,如果没有会报错
    2. find_elements返回一个列表,没有就是空列表
    3. 在判断是否有下一页的时候,使用find_elements来根据结果的列表长度来判断
4. 如果页面中含有iframe、frame,需要先调用driver.switch_to.frame的方法切换到frame中才能定位元素
5. selenium请求第一页的时候回等待页面加载完了之后在获取数据,但是在点击翻页之后,hi直接获取数据,此时可能会报错,因为数据还没有加载出来,需要time.sleep(3)
6. selenium中find_element_by_class_name智能接收一个class对应的一个值,不能传入多个

##### 使用Tesseract

1. 图像翻译为文字的`OCR`库;
2. `sudo apt install tesseract-ocr`;
3. `pip install pytesseract`. 

### 19-4-25

#### 斗鱼爬虫

#### mongodb介绍及安装

1. `NO-SQL`,非关系型数据库,`Not Only SQL`.
2. 安装`sudo apt install -y mongodb`;
3. 卸载`sudo apt --purge remove mongodb mongodb-clients mongodb-server`;
4. 启动`sudo service mongodb start`;
5. 停止`sudo service mongodb stop`;
6. 重启`sudo service mongodb restart`;
7. 查看启动成功`pgrep mongo -l`;
8. 配置文件`/etc/mongod.conf`;
9. 默认端口`27017`;
10. 日志`/var/log/mongodb/mongod.log`;
11. 启动终端`mongo`.

### 19-4-26

#### mongodb增删改查

##### 基础命令

1. 当前数据库`db`;
2. 查看所有数据库`show dbs/show databases`;
3. 切换数据库`use db_name`;
4. 删除当前数据库`db.dropDatabase()`.

##### 集合

1. 创建集合`db.createCollection(name,options)`;
2. 查看集合`show collections`;
3. 删除集合`db.集合名称.drop()`.

##### 数据类型

1. `Object ID`:文档ID;
   1. 保证文档唯一性的ID,有特殊含义.
2. `String`:字符串,utf-8;
3. `Boolean`:true|false;
4. `Integer`:整形;
5. `Double`:浮点型;
6. `Arrays`:数组或列表;
7. `Object`:用于嵌入式的文档;
8. `Null`:存储Null值;
9.  `Timestamp`:时间戳,从1970-01-01开始的秒数;
10. `Date`:日期时间.
    1. `new Date("2018-02-02")`.

##### mongodb插入数据

1. db.collecion.insert({}) 插入数据,`_id`存在就报错;
2. db.collection.save({}) 插入数据,`_id`存在会更新.

##### mongodb查询数据

* `db.集合名称.find()`.

##### mongodb更新数据

1. `db.test1000.update({name:"xiaowang"},{name:"xiaozhao"})`;
2. 把name为xiaowang的数据替换为`{name:"xiaozhao"}`;
3. `db.test1000.update({name:"xiaohong"},{$set:{name:"xiaozhang"}})`;
4. 把name为xiaowang的数据name的值更新为xiaozhang;
5. `db.test1000.update({name:"xiaozhang"},{$set:{name:"xiaohong"}},{multi:true})`;
6. `{multi:true}`达到更新多条的目的,必须和`$`一起才起作用.

##### mongodb删除数据

1. `db.test1000.remove({name:"xiaohong"},{justOne:true})`;
2. 默认情况会删除所有满足条件的数据,`{justOne:true}`能达到只删除一条的效果.

### 19-5-1

#### mongodb高级查询

##### find基本

1. `db.集合名称.find({条件文档})`;
2. 查一个`db.集合名称.findOne({条件文档})`;
3. 美化`db.集合名称.find({条件文档}).pretty()`.

##### 比较运算符

1. 等于,默认状态;
2. 小于,`$lt`(little than);
3. 小于等于,`$lte`(little than equal);
4. 大于,`$gt`(greater than);
5. 大于等于,`$gte`;
6. 不等于,`$ne`.
7. 举例`db.stu,find({age:{$gte:18}})`.

##### 范围运算符

1. `$in`;
2. `$nin`;
3. 举例`db.stu.find({age:{$in:[18,28]}})`.

##### 逻辑运算符

1. and,直接条件并列即可,`db.stu.find({age:18,hometown:"桃花岛"})`.
2. or,使用`$or`后跟数组,`db.stu.find({$or:[{age:18},{hometown:"桃花岛"}]})`.

##### 正则表达式

1. `//`,`db.products.find({sku:/^abc/})`;
2. `$regex`,`db.products.find({sku:{$regex:"789$"}})`.

##### limit和skip

1. limit,读取指定数量的文档,`db.stu.find().limit(2)`;
2. skip,跳过指定数量的文档,`db.stu.find().skip(2)`;
3. 同时使用时先使用limit后使用skip.

##### 自定义查询

* `$where`,`db.stu.find({$where:function(){return this.age>30;}})`.

##### 投影

1. 投影:选择返回结果的字段;
2. `db.collection.find({条件},{name:1,_id:0})`.
    1. `_id`默认会显示,置为0不显示;
    2. 除了`_id`之外的其他字段,如果不显示,不写,不能写为0.

##### 排序

* `sort()`,`db.stu.find().sort({age:-1})`;
    1. 参数为1,升序;
    2. 参数为-1,降序.

##### 统计个数

* `count()`
    1. `db.collection.find({条件}).count()`;
    2. `db.collection.count({})`.

##### 消除重复

* `distinct()`去重
    1. `db.集合名称.distinct("去重字段",{条件})`;
    2. `db.stu.distinct("hometown",{age:{$gt:18}})`;

#### mongodb备份与回复

##### mongodb备份

1. `mongodump -h dbhost -d dbname -o dbdirectory`.
    1. -h,服务器地址,也可以指定端口号
    2. -d,需要备份的数据库名称
    2. -o,备份数据的存放位置
2. `mongodump -h 192.168.196.128:27017 -d test -o ~/backup`.

##### mongodb恢复

1. `mongorestore -h dbhost -d dbname --dir dbdirectory`
    1. -h,服务器地址,也可以指定端口号
    2. -d,需要恢复的数据库实例
    2. -o,备份数据的存放位置
2. `mongorestore -h 192.168.196.128:27017 -d test1 --dir ~/backup/test`.

#### mongodb聚合

1. 聚合(aggregate)是基于数据处理的聚合管道,每个文档通过一个由多个阶段(stage)组成的管道,可以对每个阶段的管道进行分组、过滤等功能,然后经过一系列的处理,输出相应的结果. 
2. `db.集合名称.aggregate({管道:{表达式}})`

##### 常用管道

1. `$group：` 将集合中的⽂档分组, 可⽤于统计结果
2. `$match：` 过滤数据, 只输出符合条件的⽂档
3. `$project：` 修改输⼊⽂档的结构,如重命名、增加、除字段、创建计算结果
4. `$sort：` 将输⼊⽂档排序后输出
5. `$limit：` 限制聚合管道返回的⽂档数
6. `$skip：` 跳过指定数量的⽂档, 并返回余下的⽂档
7. `$unwind：` 将数组类型的字段进⾏拆分

##### 表达式

> 语法：表达式:'$列名'

1. `$sum：` 计算总和, $sum:1 表示以⼀倍计数
1. `$avg：` 计算平均值
1. `$min：` 获取最⼩值
1. `$max：` 获取最⼤值
1. `$push：` 在结果⽂档中插⼊值到⼀个数组中
1. `$first：` 根据资源⽂档的排序获取第⼀个⽂档数据
1. `$last：` 根据资源⽂档的排序获取最后⼀个⽂档数据

##### $group

1. `$group`对应的字典中有几个键,结果中就有几个键
2. 分组依据需要放到`_id`后面
3. 取不同的字段的值需要使用\$,`$gender`,`$age`
4. 取字典嵌套的字典中的值的时候`$_id.country`
5. 能够同时按照多个键进行分组`{$group:{_id:{country:"$country",province:"$province"}}}`
    1. 结果是：`{_id:{country:"",province:""}`
6. 按照gender进行分组,获取不同组数据的个数和平均年龄

    ```sql
    db.stu.aggregate(
    {$group:{_id:"$gender",count:{$sum:1},avg_age:{$avg:"$age"}}},{$project:{gender:"$_id",count:1,avg_age:"$avg_age",_id:0}})
    ```

7. 按照hometown进行分组,获取不同组的平均年龄

    ```sql
    db.stu.aggregate({$group:{_id:"$hometown",mean_age:{$avg:"$age"}}})
    ```

8. 使用$group统计整个文档

    ```sql
    db.stu.aggregate({$group:{_id:null,count:{$sum:1},mean_age:{$avg:"$age"}}})
    ```

##### $match

1. 用于过滤数据,只输出符合条件的文档;
2. match是管道命令,能将结果交给后一个管道,但是find不可以.
3. 选择年龄大于20的学生,观察男性和女性有多少人

    ```sql
    db.stu.aggregate(
    {$match:{$or:[{age:{$gt:20}},{hometown:{$in:["蒙古","⼤理"]}}]}},{$group:{_id:"$gender",count:{$sum:1}}},{$project:{_id:0,gender:"$_id",count:1}})
    ```

##### $sort

1. 将输入文档排序后输出
2. `db.stu.aggregate({$group:{_id:"$gender",count:{$sum:1}}},{$sort:{count:-1}})`.

##### $limit和$skip

1. `db.stu.aggregate({$skip:2},{$limit:2})`.

##### $unwind

1. 将⽂档中的某⼀个数组类型字段拆分成多条, 每条包含数组中的⼀个值
2. 语法：db.集合名称.aggregate({$unwind:'$字段名称'})
3. `db.t2.aggregate({$unwind:"$size"})`
4. 属性值为false表示丢弃属性值为空的⽂档
5. 属性preserveNullAndEmptyArrays值为true表示保留属性值为空的⽂档
6. `db.t3.aggregate({$unwind:{path:"$size",preserveNullAndEmptyArrays:true}})`

#### mongodb索引

##### 指令执行时间

1. `db.t255.find({name:"test9999"}).explain("executionStatus")`

##### 建立索引

1. 语法：db.集合.ensureIndex({属性:1}),1表示升序, -1表示降序
2. 具体操作：`db.t1.ensureIndex({name:1})`
3. 建立唯一索引`db.t1.ensureIndex({"name":1},{"unique":true})`
4. 创建唯一索引并消除重复`db.t1.ensureIndex({"name":1},{"unique":true,"dropDups":true})`
5. 建立联合索引`db.t1.ensureIndex({name:1,age:1})`
6. 查看索引`db.t1.getIndexes()`
7. 删除索引`db.t1.dropIndex('索引名称')`

#### 爬虫数据去重,实现增量式爬虫

1. 使用数据库建立关键字段(一个或者多个)建立索引进行去重
2. 根据url地址进行去重
    1. 使用场景：
        1. url地址对应的数据不会变的情况,url地址能够唯一判别一个条数据的情况
    2. 思路
        1. url存在redis中
        2. 拿到url地址,判断url在redis的url的集合中是够存在
        3. 存在：说明url已经被请求过,不再请求
        4. 不存在：url地址没有被请求过,请求,把该url存入redis的集合中
    3. 布隆过滤器
        1. 使用多个加密算法加密url地址,得到多个值
        2. 往对应值的位置把结果设置为1
        3. 新来一个url地址,一样通过加密算法生成多个值
        4. 如果对应位置的值全为1,说明这个url地址已经抓过
        5. 否则没有抓过,就把对应位置的值设置为1
3. 根据数据本身进行去重
    1. 选择特定的字段,使用加密算法(md5,sha1)将字段进行加密,生成字符串,存入redis的集合中
    2. 后续新来一条数据,同样的方法进行加密,如果得到的字符串在redis中存在,说明数据存在,对数据进行更新,否则说明数据不存在,直接插入

### 19-5-6

#### mongodb豆瓣练习

* 聚合查询

    ```sql
    db.tv1.aggregate({$project:{title:1,_id:0,count:"$rating.count",rate:"$rating.value",country:"$tv_category"}},{$match:{rate:{$gt:8}}},{$group:{_id:"$country",count:{$sum:1}}},{$project:{_id:0,country:"$_id",count:1}})
    ```

#### pymongo

##### 基本操作

1. 实例化客户端

    ```py
    from pymongo import MongoClient

    client = MongoClient(host="127.0.0.1", port=27017)
    collection = client["test"]["t251"]
    # 不需要主动断开连接
    ```

2. 插入数据

    ```py
    # 插入一条数据
    ret1 = collection.insert({"name":"xiaowang","age":10})
    # 返回objectID
    print(ret1)

    # 插入多条数据
    data_list = [{"name": "test{}".format(i)} for i in range(10)]
    collection.insert_many(data_list)
    ```

3. 查询记录

    ```py
    # 查询一个记录
    t = collection.find_one({"name": "xiaowang"})
    print(t)

    # 查询所有记录
    t = collection.find({"name": "xiaowang"})
    # 返回游标对象,仅可遍历一次
    print(t)
    ```

5. 更新

    ```py
    # 更新一条数据
    collection.update_one({"name":"tset"},{"$set":{"name":"new_name"}})

    # 更新全部条数据
    collection.update_many({"name":"tset"},{"$set":{"name":"new_name"}})
    ```

6. 删除

    ```py
    # 删除一条数据
    collection.delete_one({"name":"test"})

    # 删除全部数据
    collection.delete_many({"name":"test"})
    ```

### 19-5-8

#### scrapy框架介绍

##### scrapy介绍

1. 为了爬取网站数据,提取结构性数据而编写的框架;
2. 使用了`Twisted`异步网络框架;
3. 同步和异步是过程,阻塞和非阻塞是状态.

##### scrapy工作流程

1. Scrapy Engine引擎,总指挥,用来连接所有模块以解耦,已经实现
2. Scheduler调度器,存放URL,实际存放Requests对象,已经实现
3. Downloader下载器,发送请求,已经实现
    1. 下载器中间件,位于引擎和下载器之间,一般不用写
4. Spider爬虫,提取数据和提取URL,需要自己写
    1. 爬虫中间件,位于引擎和爬虫之间,一般不用写
5. Item Pipeline管道,数据队列,需要自己写

##### scrapy入门使用

1. 安装`pip3 install scrapy`;
2. 新建项目`scrapy startproject myspider`;
3. 生成一个爬虫`scrapy genspider [爬虫名字] [允许爬取的范围,如itcost.cn]`;
    1. 爬虫名字`name`;
    2. 允许爬取的范围`allowed_domains`;
    3. 开始请求的url地址`start_urls`,start_url不会被allowde_domain过滤;
    4. 处理首地址对应的响应的方法`parse`,使用`xpath`提取数据,应返回`yield item`,在`pipelines`中接收(需要在`settings`中开启,可以设置多个并设置权重).
4. 启动爬虫`scrapy crawl [爬虫名字]`.
    1. 在`settings`中设置logging等级.

### 19-5-12

#### scrapy:pipline,logging

##### pipline

1. 可以使用多个,每一个分别处理不同的情况;
2. 也可以仅使用一个,通过判断来处理不同的情况;
3. `process_item(self,item,spicder)`是特定的方法,不能改变,可以通过`spider.name`来获取爬虫名称.

##### logging

1. 在`settings.py`中指定`LOG_LEVEL="WARNING"`和`LOG_FILE="./log.log"`;
2. `logger=logging.getLogger(__name__)`;
3. 使用`logger.warning([***])`.

### 19-5-13

#### 翻页请求,请求头

1. `yield scrapy.Request(next_url[,callback=self.parse,method='GET',headers,body,cookies,meta,dont_filter=False])`构造一个requests对象,同时指定提取数据的callback函数;
    1. cookies要单独设置,不能直接在headers中,在headers中没有效果;
    2. callback指定url交给哪个解析函数去处理;
    3. meta,实现在不同的解析函数中传递数据,默认携带部分信息(如下载延迟,请求深度);
    4. dont_filter,scrapy默认不会重复请求相同url.
2. spider->request(url)->引擎->调度器->下载器->spider;
3. 在`settings.py`中设置`USER_AGENT`;

### 19-5-14

#### item的定义和使用

1. 在`items.py`中,`scrapy.Item`和`scrapy.Field()`都是字典;
2. 在获取到数据时,使用不同的item来存放不同的数据;
3. 在把数据交给`pipline`的时候,可以通过`isinstance(item,MyspiderItem)`来判断数据是属于哪个item,进行不同的数据处理;
4. 将item保存到mongodb中时,需要强制转换为`dict(item)`.

#### debug信息

#### scrapy shell

1. 使用方法`scrapy shell [url]`.

#### settings和管道的深入

1. 导入设置,`import`或者`self.settings.get()`;
    1. 是否遵守爬虫协议;
    2. 并发请求数;
    3. 下载延迟;
    4. 是否开启cookies;
    5. 自动限速;
    6. http缓存;
2. 管道pipline
    1. open_spider(self,spider),爬虫开始时只执行一次;
    2. close_spider(self,spider),爬虫关闭时只执行一次;

### 19-5-15

#### 苏宁图书爬虫

1. 操作同一个字典时,使用`deepcopy`;
2. js记录当前页和总页数,判断是否翻页.

### 19-5-16

#### CrawlSpider

1. 自动提取URL地址,并发送请求获得相应,仅需指定处理当前响应的方式即可;
2. 生成一个CrawlSpider爬虫`scrapy genspider -t crawl [爬虫名] [可爬取范围]`;
    1. 继承自`CrawlSpider`;
    2. 自定义提取URl规则`rules`,是一个包含`Rule`对象的元组;
        1. `LinkExtractor`连接提取器,使用正则提取URL地址,有多个参数`allow,deny,allow_domains,deny_domains,restrict_xpaths`;
        2. `callback`,提取的url的response交给callback来处理,是一个函数名字的字符串;
        3. `follow`,当前URl地址的响应是否能够重新经过rules来提取url地址;
        4. `process_links`过滤url;
        5. `process_request`过滤request.
    3. parse函数拥有发送请求获取响应的新功能,不能重写;
3. 不指定callback的情况下,如果follow为True,满足该rule的url还会继续被请求;
4. 如果多个Rule都满足一个url,会从rules中选择第一个满足的进行操作;
5. 自动将残缺的url补充完整;

### 19-5-20

#### 下载中间件

1. 使用方法:编写一个`downloader middlewares`,然后再settings中开启它;
2. downloader middlewares默认的方法:
    1. `process_request(self,request,spider)`当每个request通过下载中间件时被调用,没有返回值;
    2. `process_response(self,request,reponse,spider)`当下载器完成http请求传递响应给引擎的时候调用,应返回response;
    3. `process_excetion(self,exception,spider)`.
3. 应用:
    1. 添加随机UA

        ```py
        class RandomUserAgentMiddleware:
            def process_request(self, request, spider):
                ua = random.choice(spider.settings.get("USER_AGENTS_LIST"))
                request.headers["User-Agent"] = ua
        ```

    2. 使用随机代理

       ```py
        class ProxyMiddleware:
            def process_request(self, request, spider):
                request.meta["proxy"] = "http://124.115.126.76:808"
        ```

#### scrapy模拟登录

1. request模拟登录
    1. 直接携带cookies请求页面
    2. 找接口发送post请求存储cookie
2. selenium模拟登录
    1. 找到对应的input标签,输入文字点击登录

##### 携带cookie登录

1. 自定义`start_requests(self)`函数来处理`start_url`的请求过程,携带cookie登录;
2. 后续请求自动携带cookie;
3. 在`settings`中添加`COOKIES_DEBUG = True`,查看cookie发送情况;
4. 将cookies放入headers中登录无效.

##### 发送post请求登录

1. 表单请求`yield scrapy.FormRequest(url,formdata={提供完整表单},callback=回调函数)`;
2. 自动从request中寻找form表单`yield scrapy.FormRequest.from_respose(response,formdata={仅仅提供用户名和密码},callback=回调函数)`;
3. `yield scrapy.Request(method="POST")`.

### 19-5-21

#### 贴吧爬虫-crawlspider版

1. `urllib.parse.urljoin(a_url,b_url)`根据第一个url地址自动补全第二个url地址.

### 19-5-24

#### 分布式爬虫scrapy_redis概念

1. 优点
    1. request去重,基于url的增量式爬虫
    2. 爬虫持久化
    3. 轻松实现分布式
2. 结合scrapy与redis,通过redis实现调度器的队列和指纹集合,将request对象存入redis数据库
3. 可以将数据存入redis,非必须

#### scrapy_redis示例1:dmoz

1. 在linkextractor中使用了`css选择器`来筛选url地址
2. 与普通爬虫无区别,但是在`settings`中
    1. 新增了设置`DUPEFILTER_CLASS ="scrapy_redis.dupefilter.RFPDupeFilter"`
    2. 新增了设置`SCHEDULER = "scrapy_redis.scheduler.Scheduler"`
    3. 新增了设置`SCHEDULER_PERSIST = True`
    4. 还可指定redis队列类型,保持默认状态
    5. ITEM_PIPELINES中新增`'scrapy_redis.pipelines.RedisPipeline': 400`
    6. 还需添加一条`REDIS_URL = "redis://127.0.0.1:6379"`指定redis位置
3. 在redis数据库中
    1. `dmoz.requests`一个无需集合,存储序列化之后的待爬取request对象
    2. `dmoz.items`一个列表,存储爬取获得的数据,通过`'scrapy_redis.pipelines.RedisPipeline'`存入redis
    3. `dmoz.dupefilter`一个集合,存储已爬取的url的指纹

### 19-5-25

#### scrapy_redis源码

1. `piplines.py`中`RedisPipline`实现将内容保存到redis中
2. `dupefilter.py`中`RFPDupeFilter`实现指纹判断,去重
3. `scheduler.py`中`Scheduler`实现持久化

##### request对象什么时候入队

1. dont_filter = True ,构造请求的时候,把dont_filter置为True,该url会被反复抓取(url地址对应的内容会更新的情况)
2. 一个全新的url地址被抓到的时候,构造request请求
3. url地址在start_urls中的时候,会入队,不管之前是否请求过
    1. 构造start_url地址的请求时候,dont_filter = True
    2. 代码

        ````python
        def enqueue_request(self, request):
            if not request.dont_filter and self.df.request_seen(request):
                # dont_filter=False Ture  True request指纹已经存在  #不会入队
                # dont_filter=False Ture  False  request指纹已经存在 全新的url  #会入队
                # dont_filter=Ture False  #会入队
                self.df.log(request, self.spider)
                return False
            self.queue.push(request) #入队
            return True
        ```

##### scrapy_redis去重方法

1. 使用sha1加密request得到指纹
2. 把指纹存在redis的集合中
3. 下一次新来一个request,同样的方式生成指纹,判断指纹是否存在reids的集合中

##### 生成指纹

1. 生成指纹,与scrapy中生成指纹的方式一样

    ```python
    fp = hashlib.sha1()
    fp.update(to_bytes(request.method))  #请求方法
    fp.update(to_bytes(canonicalize_url(request.url))) #url
    fp.update(request.body or b'')  #请求体
    return fp.hexdigest()
    ```

##### 判断数据是否存在redis的集合中,不存在插入

1. 判断reids是否存在

    ```python
    added = self.server.sadd(self.key, fp)
    return added != 0
    ```

#### 借鉴示例1:京东图书爬虫

1. 获取价格需要发送额外的请求.

#### scrapy_redis示例2:myspider_redis

1. 和普通爬虫的区别
    1. 继承自`RedisSpider`
    2. 多了一个`redis_key='myspider:start_urls'`,直到redis中有对应的url才会开始爬取
    3. 在初始化方法`__init__()`中动态定义可爬取范围,也可以直接写死可爬取范围

#### 借鉴示例2:当当图书分布式爬虫

### 19-5-26

#### scrapy_redis示例3:mycrawler_redis

1. 和普通爬虫的区别
    1. 继承自`RedisCrawlSpider`
    2. 多了一个`redis_key='myspider:start_urls'`,直到redis中有对应的url才会开始爬取
    3. 在初始化方法`__init__()`中动态定义可爬取范围,也可以直接写死可爬取范围

#### 借鉴示例3:亚马逊图书爬虫

#### pycharm发布代码

1. 在tools下的deployment使用sftp协议发布代码到远端机器.

#### crontab爬虫定时执行

1. 安装`apt install cron`,服务器环境下默认安装
2. 使用`crontab -e`进入编辑页面
3. 使用`crontab -l`查看当前的定时任务

## >>>21-数据分析

### 19-5-30

#### 数据分析介绍

1. 数据分析是用适当的方法对收集来的大量数据进行分析.帮助人们做出判断,以便采取适当的行动.
2. 流程
    1. 提出问题
    2. 准备数据
    3. 分析数据
    4. 获得结论
    5. 成果可视化

#### 环境安装

1. 创建虚拟环境`conda create -n data`
2. 安装ipython`conda install ipython`
3. 安装jupyter`conda install jupyter`
4. 安装matplotlib`conda install matplotlib`

### 19-6-1

#### matplotlib折线图

1. 导入pyplot画图`from matplotlib import pyplot as plt`
2. 画图`plt.plot([x],[y])`
3. 展示`plt.show()`
4. 在jupyter notebook中导入python文件`%load 文件绝对路径`,导入之后第一次`Ctrl+Enter`加载,第二次`Ctrl+Enter`运行文件
5. 设置图片大小`plt.figure(filesize=(x,y),dpi=int)`
6. 保存图片`plt.savefig("路径+文件名.格式")`
7. X轴的刻度`plt.xticks([数字],[字符串:非必须],rotation:旋转角度,fontproperties=my_font)`
8. Y轴的刻度`plt.yticks([数字],[字符串:非必须],rotation:旋转角度,fontproperties=my_font)`
9. linux系统查看字体命令`fc-list`或`fc-list :lang=zh`查看支持中文的字体(注意有一个空格)
10. 解决中文字体显示问题
    1. 方式一`matplotlib.rc("font",family='MicroSoft YaHei',weight="bold",size="")`
    2. 方式二`my_font = font_manager.FontProperties(fname="C:\Windows\Fonts\STXINGKA.TTF")`字体路径
11. X轴描述`plt.xlabel(string,fontproperties=my_font)`
12. Y轴描述`plt.ylabel(string,fontproperties=my_font)`
13. 标题`plt.title(string,fontproperties=my_font)`
14. 绘制网格`plt.grid(alpha=0.1:透明度,linestyle=string)`
15. 显示图例
    1. 第一步`plt.plot([x],[y],label=string:图例)`
    2. 设置显示图例`plt.legend(prop=my_font:字体,loc=string或int或(x,y):位置)`
16. 设置线条风格`plt.plot([x],[y],color=string:颜色,linestyle=string:线条样式,linewidth=int:线宽,alpha=int:透明度)`

#### matplotlib官网样例

1. [matplotlib官网](https://matplotlib.org/gallery/index.html)提供多种样例以及对应代码.


### 19-6-2

#### matplotlib常用统计图

##### matplotlib散点图

1. 绘制函数`plt.scatter([x],[y])`

##### matplotlib条形图

1. 绘制垂直条形图函数`plt.bar([x],[y],width=int)`
2. 绘制水平条形图函数`plt.barh([x],[y],height=int)`(注意,不能使用width,会覆盖y轴)
3. 绘制多条条形图,控制x坐标多次绘制

##### matplotlib直方图

1. 频数直方图函数`plt.hist([a],num_bins:组数int或列表)`
2. 频率直方图函数`plt.hist([a],num_bins:组数int或列表,destiny=True)`
3. 有原始数据可以使用直方图,经过处理的数据可以使用条形图模拟直方图

#### 其他画图工具

1. 前端工具`百度ECHARTS`
2. plotly,画图界的github
3. seaborn,类似matplotlib

#### numpy数组

1. 科学计算库的基础库,多用于大型多维数组计算

##### numpy数组的创建

1. 创建数组,得到的类型为`numpy.ndarray`
    1. np.array([],dtype=)
    2. np.array(range(a,b),dtype=)
    3. np.arange(a,b)

##### numpy数组数据类型

1. numpy数组数据的类型`array.dtype`
2. 改变数组中数据的类型`array.astype()`
3. 浮点数四舍五入`np.round(array,int)`

##### numpy数组的形状

1. 查看数组的维数`array.shape`
2. 修改数组的维数`array.reshape()`不改变array本身
3. 降为一维数组`array.flatten()`

##### numpy数组的计算

1. 和单个数字计算,实际为数组中所有单位逐个执行该计算
2. `nan`非数字,`inf`无穷大
3. 数组之间计算
    1. 维度相同,对应位置直接计算
    2. 维度不同,但是某一维度相同,在该维度上进行计算
4. 广播原则:如果两个数组的后缘纬度(从末尾开始的维度)的轴长度相符或其中一方的长度为1,则认为他们是广播兼容的.广播会在缺失和(或)长度为1的维度上进行.

##### 数组的轴(axis)

1. 可以理解为方向,使用数字来表示

### 19-6-7

#### numpy读取本地文件

1. 函数名称`np.loadtxt(frame,dtype=np.float,delimiter=None,skiprows=0,usecols=None,unpack=False)`
    1. frame,文件/字符串或产生器,可以是.gz或bz2压缩文件
    2. dtype,数据类型,默认是np.float
    3. delimiter,分隔字符串,默认是任何空格
    4. skiprows,跳过前n行
    5. usecols,读取指定的列,索引,元组类型
    6. unpack,如果为True,读入属性将分别写入不同数组变量,Flase读入数据只写入一个数组变量,默认为False,实际表现为转置矩阵

### 19-6-8

#### numpy数组的转置

1. `array.transpost()`
2. `array.T`
3. `array.swapaxes(1,0)` 

#### numpy数组的切片和索引

1. 取行
    1. 取单行`print(t2[2])`相当于`print(t2[2,:])`
    2. 取连续的多行`print(t2[2:])`相当于`print(t2[2:,:])`
    3. 取不连续的多行`print(t2[[2,8,10]])`
2. 取列
    1. 取列`print(t2[:,0])`
    2. 取连续的多列`print(t2[:,2:])`
    3. 取不连续的多列`print(t2[:,[0,2]])`
3. 取行和列
    1. 取行和列,取第3行,第四列的值`a = t2[2,3]`类型为numpy数据类型
    2. 取多行和多列,取第3行到第五行,第2列到第4列的结果,`b = t2[2:5,1:4]`返回行和列交叉点的位置
    3. 取多个不相邻的点`c = t2[[0,2,2],[0,1,3]]`选出来的结果是(0,0)(2,1)(2,3)

#### numpy数组中数值的修改

1. 取值之后直接修改即可`t2(t2>10) = 0`
2. numpy中三元运算符where操作`np.where(t2<10,0,10)`
3. 裁剪操作`np.clip(min,max)`小于min的替换为min,大于max的替换为max,但是nan不会被替换

#### numpy中的nan和inf

1. nan(not a number)是一个float类型,当数据缺失或者无穷减无穷时会出现
    1. 两个nan不相等,可以利用该特性统计nan的个数`np.count_nonzero(t!=t或者np.isnan(t))`
    2. 另一种方法判断nan`np.isnan(t)`
    3. nan和任何数据计算都是nan
    4. 可以将nan替换为均值或中值或直接删除
2. inf(infiniti),有正负之分

#### numpy常见统计函数

1. 求和`t.sum(axis=None)`或`np.sum(t,axis)`
2. 均值`t.mean(axis)`
3. 中值`np.median(t,axis)`
4. 最值`t.max(axis)`和`t.min(axis)`
5. 极值`np.ptp(t,axis)`最值之差
6. 标准差`t.std(axis)`

#### numpy数组的拼接

1. 竖直方向拼接`np.vstack((t1,t2))`
2. 水平方向拼接`np.hstack((t1,t2))`
3. 行列交换`t[[1,2],:] = t[[2,1],:]`或`t[:,[0,2]] = t[:,[2,0]]`

#### numpy更多好用的方法

1. 创建全0数组`np.zeros((x,y))`
2. 创建全1数组`np.ones((x,y))`
3. 创建对角线为1的方阵`np.eye(n)`
4. 获取最值的位置
    1. `np.argmax(t,axis)`
    2. `np.argmin(t,axis)`

#### numpy生成随机数

1. 创建d0~dn维度的均匀分布的随机数数组`np.random.rand(d0,d1...dn)`浮点数范围0-1
2. 创建d0~dn维度的标准正态分布的随机数数组`np.random.randn(d0,d1...dn)`浮点数平均值0,标准差1
3. 创建范围low-high的shape形状的随机整数数组`np.random.randint(low,high,(shape))`
4. 创建范围low-high的均匀分布的shape形状的数组`np.random.uniform(low,high,(shape))`
5. 从指定正态分布中随机抽取样本,分布中心为loc,标准差为scale,形状为shape`np.random.normal(loc,scale,(shape))`
6. 随机数种子,s是给定的种子值.随机数种子相同时,生成的随机数也相同`np.seed(s)`

#### numpy中的注意点copy和view

1. `a=b`完全不复制,a和b相互影响
2. `a=b[:]`视图的操作,会创建新的对象a,但a的数据完全由b保管,a和b相互影响
3. `a=b.copy()`a和b互不影响


### 19-6-9

#### pandas简介

1. numpy主要处理数值型数据,pandas还可以处理字符串,时间序列等

#### pandas常用数据类型-一维的带标签数组**Series**

1. 通过列表创建`pandas.Series([array],index=list())`index添加标签
2. 通过字典创建`pandas.Series({dict},index=list())`不指定标签时,字典键为标签;指定标签时仅仅对应上时获取其值,否则为Nan
3. 取值,`t["age"]`或`t[1]`或`t[:2]`或`t[[0,2]]`或`t[["age","tel"]](如果没有标签返回Nan)`或`t[t>4]`
4. 提取标签`t.index`可迭代
5. 提取数据`t.values`类型为np.ndarray
6. argmax,clip和astype等方法与numpy相同
7. where方法与numpy不同

#### pandas读取外部数据

1. 读取csv文件`pd.read_csv()`
2. 拥有多个读取文件函数`pd.read_***()`
3. 如果没有提供对应方法,则通过中介模块

### 19-6-11

#### pandas常用数据类型-二维的Series容器**DataFrame**

1. 通过列表创建`t = pd.DataFrame(np.arange(12).reshape(3,4),index = list("abc"),columns = list("wxyz"))`拥有双索引,index指定行索引,columns指定列索引
2. 通过字典创建`t2 = pd.DataFrame({dict})`dict可以为`{"name":["aaa","bbb"],"age":[20,32],"tel":[10086,10010]}`或`[{"name":"aaa","age":22,"tel":12345},{"name":"aaa","tel":5678},{"name":"aaa","age":22}]`
3. 提取索引`t.index`或`t.columns`
4. 提取数据`t.values`类型为np.ndarray
5. 形状`t.shape`
6. 数据类型`t.dtypes`
7. 数据维度`t.ndim`
8. 显示数据前几行`t.head(int)`默认为5
9. 显示数据后几行`t.tail(int)`默认为5
10. 信息总览`t.info()`展示行数,列数,索引,类型,内存占用等
11. 综合统计结果`t.describe()`技术,均值,标准差,最值,四分位数等
12. DataFrame中排序的方法`df.sort_values(by="Count_AnimalName",ascending=False)`
13. 简单取行取列
    1. 方括号写数组,表示取行,对行进行操作`df[:20]`
    2. 方括号写字符串,表示的取列索引,对列进行操作`df["Row_Labels"]`
14. 复杂选取方法
    1.  通过标签索引行数据`df.loc["a","z"]`取的是a行z列,可以使用`:`选择全部,但是此时区间为闭合区间
    2.  通过位置获取行数据`df.iloc[1,2]`取的是2行3列
15. 选取之后可以直接赋值,此时赋值为`np.nan`不会报错

### 19-6-15

#### DataFrame中的bool索引

1. 不同条件之间使用括号括起来,使用`&`或者`|`连接
2. `.str`获取字符串,有多种字符串方法

#### 缺失数据的处理

1. pandas统计时不会理会NaN
2. 判断有没有NaN`pd.isnull(df)`或`pd.notnull(df)`
3. 删除NaN所在的行列`df.dropna(axis=0,how="any",inplace=False)`
4. 填充数据`df.fillna(df.mean())`
5. 处理为0的操作`df[df==0]=np.nan`

#### pandas常用统计方法

### 19-6-18

#### 字符串离散化

1. 构造全0数组,行数与数据行数一样,列数为类别数量
2. 遍历数据行,将全0数组中对应的位置置1
3. 得到一个在特定位置存在标记的数组,可以进行统计分析

#### 数据合并之join

1. `join`默认情况下把行索引相同的数据合并到一起
2. `df1.join(df2)`以df1的行数为准,丢弃或补足df2中的数据

#### 数据合并之merge

1. `merge`按照指定的列把数据按照一定的方式合并到一起
2. on可以为`left_on`和`right_on`处理没有相同列的情况
3. `df1.merge(df2,on="列",how=inner)`默认的合并方式为`inner`交集,只合并重复的部分
4. `df1.merge(df2,on="列",how=outer)`指定合并方式为`outer`并集,包含df1和df2全部,没有的以NaN补全
5. `df1.merge(df2,on="列",how=left)`指定合并方式为`left`左连接,以df1为准,没有的以NaN补全
6. `df1.merge(df2,on="列",how=right)`指定合并方式为`right`右连接,以df2为准,没有的以NaN补全
