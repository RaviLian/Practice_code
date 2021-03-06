daily code for practice
```bash
第一步
在github中创建一个新的仓库，这时候项目是空的，而且只有一个master分支

第二步
第一个开发人员进来了，他在本地创建一个develop分支，并且提交到远程

git branch  develop
git push -u origin develop
现在线上就有两个分支master 和 develop 现在这两个分支里面都是空的

第三步
一、二步完成后，任何一个参与该项目的开发人员首先要做的就是从develop分支上切一个新分支进行功能开发

git checkout -b <本地分支名 feature/***> <origin/develop>
或者
git fetch origin 远程分支名:本地分支名
git branch --set-upstream-to=origin/远程分支名    本地分支名
然后进行开发，开发差不多，想提交一下

git status
git add
git commit
第四步
经过第三步，提交了几次后，感觉差不多了，就可以合并到develop分支

git pull origin develop //先拉取develop中的代码，因为有可能别人已经往上提交过代码了
git checkout  develop//切到develop分支
git merge <feature/**>//合并feature/**中的代码到develop中
git push //提交到develop远程分支上
git branch -d feature/** //删除本地的分支
第五步
某一个开发人员想发布，但是其他人员还在进行开发，先不管别人，他先建立一个新的分支做发布准备

git checkout -b <本地分支名realse-0.1> <远程分支名develop>//注意这个realse-tagNo分支的功能是对发布的代码进行改善的地方
创建这个分支相当于测试环境修改，改好后就需要跟新master和develop,然后删除分支

git checkout  master//切到master分支
git merge release-0.1//将release分支合到master上
git push//将合完的代码提交到远程master
git checkout develop//切到develop分支
git merge release-01//将release分支上的代码合到develop分支上
git push//合完的代码推送到远程的develop分支
git branch -d release-01//删除本地release分支
第六步
打tag追踪，这个过程不太了解

git tag -a -0.1 -m 'xxxxxx'
git push --tags
Git有提供各种勾子（hook），即仓库有事件发生时触发执行的脚本
。可以配置一个勾子，在你push中央仓库的master分支时，自动构建好对外发布

难道这就是传说中的自动化构建？？？

第七步
线上环境发现bug了

git checkout -b hotfix/xxx master//从master分支上新建分支
然后开始改bug,改完后

git checkout master//切回master分支
git merge hotfix/xxx//将改完bug后的代码合并到master
git push
改完bug的代码还要合到develop中

git checkout develop
git merge hotfic/xxx
git push
git branch -d hotfix/xxx
```