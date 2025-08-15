# MIT 6.828 Lab Files
This item archives the lab files, including the instructions and the code, of the Operating Systems Engineering course (6.097 / 6.828 / 6.S081 / 6.1810) of MIT.

This item is available at the [Internet Archive](https://archive.org/details/mit-6.828-lab-files). It's also available as a [GitHub repository](https://github.com/TripleCamera/mit-6.828-lab-files), because the Internet Archive uploader is really hard to use. The Internet Archive version is synced from the GitHub version from time to time.

All files of this item have been archived elsewhere. This item only serves as a convenient index.

Please note that the maintainer is neither a student or a staff of MIT, there may be mistakes in this README.

此项目是对 MIT 操作系统课程（Operating Systems Engineering，课程代码 6.097 / 6.828 / 6.S081 / 6.1810）实验文件的存档，包括实验指导和实验代码。

此项目保存于 [Internet Archive](https://archive.org/details/mit-6.828-lab-files)，同时也是一个 [GitHub 仓库](https://github.com/TripleCamera/mit-6.828-lab-files)，因为 Internet Archive 的上传工具实在是太难用了。我会不定期将 GitHub 上的版本同步到 Internet Archive。

此项目中的所有文件都已在别处存档过。此项目仅仅用于快速索引文件。

请注意，维护者不是 MIT 的学生或教员，因此这篇 README 中可能会有错误。

## 6.828 的历史
如果你不了解 6.828，可以先看看 [CS 自学指南（csdiy.wiki）](https://csdiy.wiki/%E6%93%8D%E4%BD%9C%E7%B3%BB%E7%BB%9F/MIT6.S081/) 上的介绍。

下面是 6.828 历史的详细介绍。请注意可能会有不准确之处。

TODO：还需完善

 -  2002：MIT 开始开设操作系统课程 Operating Systems Engineering（6.097）。学生在课上学习 UNIX v6（使用 Lion 作的注释）并在课下完成一个相似的操作系统。
 -  2003：课程代码更改为 6.828。
 -  2004：课下完成的操作系统被命名为 JOS。
 -  2006：UNIX v6 被 xv6 取代。
 -  2008：改用 Git 分发代码。
 -  2019：课程代码更改为 6.S081。实验数量更改为 10 个。
 -  2022：课程代码更改为 6.1810。

## 文件

TODO：介绍一下其他备份

### 2003 - 2007
实验指导为 `.html` 格式，实验代码为 `.tar.gz` 格式。学生切换到下一个 Lab 时需要手动应用更改。

所有实验指导都是静态文件。有趣的是，访问存储这些文件的根目录时，Apache 会自动列出目录下的所有文件（包括未使用的隐藏文件）。所以可以直接用 `wget` 下载所有 Lab 的文件。以 2003 和 2004 为例：

```console
$ wget -rl 1 'https://pdos.csail.mit.edu/6.828/2003/labs/'
$ wget -rl 2 'https://pdos.csail.mit.edu/6.828/2004/labs/'
```

### 2008 - 2024
实验指导仍为 `.html` 格式，但实验代码改用 Git 分发。学生可以直接使用 `git merge` 命令切换到下一个 Lab。

TODO：下载实验指导文件

你可以用 [Git](https://wiki.archiveteam.org/index.php/GitHub#git_itself) 备份这些 Git 仓库。以 2008 年为例：

```console
$ git clone --mirror https://pdos.csail.mit.edu/6.828/2008/jos.git
$ cd jos
$ git bundle create ../2008.bundle --all
```

以下是所有 Git 仓库链接（部分链接和教程中所说的不一样，稍微试一下就能试出来）：
 -  2008：<https://pdos.csail.mit.edu/6.828/2008/jos.git>
 -  2009：<https://pdos.csail.mit.edu/6.828/2009/jos.git>
 -  2010：<https://pdos.csail.mit.edu/6.828/2010/jos.git>
 -  2011：<https://pdos.csail.mit.edu/6.828/2011/jos.git>
 -  2012：<https://pdos.csail.mit.edu/6.828/2012/jos.git>
 -  2014：<https://pdos.csail.mit.edu/6.828/2014/jos.git>
 -  2016：<https://pdos.csail.mit.edu/6.828/2016/jos.git>
 -  2017：<https://pdos.csail.mit.edu/6.828/2017/jos.git>
 -  2018：<https://pdos.csail.mit.edu/6.828/2018/jos.git>
 -  2019：<git://github.com/mit-pdos/xv6-riscv-fall19.git>
 -  2020：<git://g.csail.mit.edu/xv6-labs-2020>
 -  2021：<git://g.csail.mit.edu/xv6-labs-2021>
 -  2022：<git://g.csail.mit.edu/xv6-labs-2022>
 -  2023：<git://g.csail.mit.edu/xv6-labs-2023>
 -  2024：<git://g.csail.mit.edu/xv6-labs-2024>


### Open CourseWare
这门课程也在 MIT Open CourseWare 上公开。一共有四个公开版本：2003、2006、2012、2023。

除了 2023 版只提供了一个指向 MIT 内部课程网站以外，2003、2006、2012 版都提供了整门课程使用的所有文件。我费了很大力气收集各个 Lab 的实验指导和代码，后来才发现 OCW 提供了一键下载所有文件的功能，非常方便。虽然其中部分文件并不属于实验文件，但方便起见，我还是将它们传了上去。为了方便查看，之前收集的各个 Lab 的文件仍然保留了下来。

值得注意的是，2003 和 2006 版因为过时被移动到了 DSpace 上的 OCW archive 保存。OCW archive 里的文件有一些问题（见下）。

#### 2003
这是 OCW 2003 版的链接（死链，需要通过 Wayback Machine 访问）：
 -  课程主页：<http://ocw.mit.edu/OcwWeb/Electrical-Engineering-and-Computer-Science/6-828Fall2003/CourseHome/index.htm>
 -  下载课程：<http://ocw.mit.edu/ans15436/ZipForEndUsers/6/6-828Fall2003/6-828Fall-2003.zip>

这是 DSpace 上的存档（压缩包已损坏，见下）：
 -  [6.828 Operating System Engineering, Fall 2003](https://dspace.mit.edu/handle/1721.1/37331)

#### 2006
这是 OCW 2006 版的链接（死链，需要通过 Wayback Machine 访问）：

 -  课程主页：<http://ocw.mit.edu/OcwWeb/Electrical-Engineering-and-Computer-Science/6-828Fall-2006/CourseHome/index.htm>
 -  下载课程：<http://ocw.mit.edu/ans15436/ZipForEndUsers/6/6-828Fall-2006/6-828Fall-2006.zip>

在此期间，OCW 进行了一次更新，网站结构也一并更改。可惜的是，一键下载的压缩包并没有被 Wayback Machine 存档。我倒是在 Wayback Machine 和 Library of Congress 上找到了各个 Lab 的文件。
 -  课程主页：<http://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-828-operating-system-engineering-fall-2006/index.htm>
 -  下载课程：<http://ocw.mit.edu/ans15436/ZipForEndUsers/6/6-828-fall-2006/6-828-fall-2006.zip>（没有存档）

这是 DSpace 上的存档（压缩包已损坏，见下）：
 -  [6.828 Operating System Engineering, Fall 2006](https://dspace.mit.edu/handle/1721.1/92292)

#### 2012
在我整理资料的时候，2012 版仍然在 ocw.mit.edu 上挂着。为了方便起见，我就直接用活链接了。

 -  课程主页：<https://ocw.mit.edu/courses/6-828-operating-system-engineering-fall-2012/>
 -  下载课程：<https://ocw.mit.edu/courses/6-828-operating-system-engineering-fall-2012/6.828-fall-2012.zip>

值得注意的是，OCW 每改一次前端，ZIP 就会重新生成一次，校验和也会变化。这才过了三个月，下载到的压缩包校验和就变动了……不知道他们在抽什么风。

### 2023
这一版为了图省事，只给了个指向 MIT 内部网站的链接。

 -  课程主页：<https://ocw.mit.edu/courses/6-1810-operating-system-engineering-fall-2023/>

## 已知问题
### 文件丢失
[2002 年](https://pdos.csail.mit.edu/archive/6.097/)的所有 Lab 均禁止访问。另外，2003 年到 2007 年期间的 Lab5、Lab6 全部丢失。我向课程团队发送了一封邮件，但目前为止暂未收到回复。

### OCW Archive 文件损坏
非常遗憾的是，OCW Archive 中的压缩文件全部损坏。如果你用 hex 编辑器打开它们，会发现它们之中所有 hex 大于等于 `80` 的字节全部被替换为 `EF BF BD`，也就是 `U+FFFD`——这说明工作人员很可能不小心以 UTF-8 格式保存了这些压缩文件。

TODO: 向工作人员汇报这一情况

幸运的是，这些压缩包在其他地方有备份。我费了很大功夫四处收集 Internet Archive 和 Library of Congress 上的备份。后来发现有一键下载的功能，于是又一并收集了一键下载压缩包的备份。

