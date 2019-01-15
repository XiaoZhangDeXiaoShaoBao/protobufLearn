# protoBuff 

## 推荐网址：
* https://cloud.tencent.com/developer/article/1176660

* https://colobu.com/2015/01/07/Protobuf-language-guide/

* https://www.cnblogs.com/cposture/p/9029033.html

* https://blog.csdn.net/runner668/article/details/80397906
### 源代码：
* https://github.com/protocolbuffers/protobuf.git

---

## protobuf安装：安装最新的版本3.6.1
* On Ubuntu/Debian, you can install them with:

`$ sudo apt-get install autoconf automake libtool curl make g++ unzip`

On other platforms, please use the corresponding package managing tool to install them before proceeding.

To get the source, download one of the release .tar.gz or .zip packages in the release page:

* https://github.com/protocolbuffers/protobuf/releases/latest

For example: if you only need C++, download protobuf-cpp-[VERSION].tar.gz; if you need C++ and Java, download protobuf-java-[VERSION].tar.gz (every package contains C++ source already); if you need C++ and multiple other languages, download protobuf-all-[VERSION].tar.gz.

You can also get the source by "git clone" our git repository. Make sure you have also cloned the submodules and generated the configure script (skip this if you are using a release .tar.gz or .zip package):
```

$ git clone https://github.com/protocolbuffers/protobuf.git

$ cd protobuf

$ git submodule update --init --recursive

$ ./autogen.sh

```
To build and install the C++ Protocol Buffer runtime and the Protocol Buffer compiler (protoc) execute the following:

```
$ ./configure

$ make

$ make check

$ sudo make install

$ sudo ldconfig # refresh shared library cache.

```
## 3.配置环境变量：
* 方法一： 
    使用export命令临时修改LD_LIBRARY_PATH，只对当前shell会话有效：

    `export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH`
* 方法二： 
    或者永久修改，在~/目录下打开.bash_profile文件，设置环境变量如下：

    `LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH ` 
    `export LD_LIBRARY_PATH  `
    注意Linux下点号开头的文件都是隐藏文件，使用ls -a 可查看指定目录下的所有文件，包括隐藏文件。
* 方法三： 
  永久有效的话，可以创建protobuf的动态连接库配置文件/etc/ld.so.conf.d/libprotobuf.conf并包含如下内容：

  /usr/local/lib 
  然后运行动态链接库的管理命令ldconfig。

  `sudo ldconfig`
  ldconfig通常在系统启动时运行,而当用户安装了一个新的动态链接库时,就需要手工运行这个命令。


## 4.编译main.cpp
对头文件编译时 `g++ main.cpp student.pb.cc -std=gnu++11 -lprotobuf -lthread -oa.out`

运行：`./main`

## 5.结果：

serialization result�����wpc1dablelv@tencent.com"

15813354925"

0564-4762652

debugString:id: 201421031059
name: "wpc1"
email: "dablelv@tencent.com"
phone {
  number: "15813354925"
  type: MOBILE
}
phone {
  number: "0564-4762652"
  type: HOME
}

ShortdebugString:id: 201421031059 name: "wpc1" email: "dablelv@tencent.com" phone { number: "15813354925" type: MOBILE } phone { number: "0564-4762652" type: HOME }

-------------上面是序列化，下面是反序列化---------------

Student ID: 201421031059
Name: wpc1
E-mail address: dablelv@tencent.com
Mobile phone #: 15813354925
Home phone #: 0564-4762652
deserializedStudent debugString:id: 201421031059
name: "wpc1"
email: "dablelv@tencent.com"
phone {
  number: "15813354925"
  type: MOBILE
}
phone {
  number: "0564-4762652"
  type: HOME
}
