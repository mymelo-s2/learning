### Linux コマンド一覧

#### 基本コマンド

- `man`：マニュアル表示
  使用例：

```
　　$ man ls
```

- `cd`：ディレクトリ移動
  使用例

```
　　$ cd ./Desktop
```

- `ls`：ディレクトリ内のファイル一覧表示
  使用例：

```
　　$ ls
```

- `cat`：ファイルの内容表示
  使用例：

```
　　$ cat test.txt
```

- `echo`：文字列表示
  使用例：

```
　　$ echo Hello, Lain.
```

- `pwd`：カレントディレクトリの表示
  使用例：

```
　　$ pwd
```

- `touch`：新規ファイルの作成
  使用例：

```
　　$ touch test.txt
```

- `mkdir`：新規ディレクトリの作成
  使用例：

```
　　$ mkdir testdir
```

- `rm`：ファイル/ディレクトリの削除
  使用例：

```
　　$ rm test.txt　# ファイル削除
　　$ rm -r test　 # ディレクトリ削除
```

- `cp`：ファイル/ディレクトリのコピー
  使用例：

```
　　$ cp a.txt b.txt　 # a.txt を b.txt としてコピー
　　$ cp -r dir1 dir3　# dir1 を dir3 としてコピー　　　　
```

- `mv`：ファイル移動/ファイル名変更
  使用例：

```
　　$ mv a.txt dir1　 # a.txt を dir1 に移動
　　$ mv a.txt b.txt　# a.txt を b.txt にリネーム
```

- `find`：ファイル検索
  使用例：

```
　　$ find find_test.txt　# 完全一致のファイル検索
　　$ find find_test*　　 # find_test から始まるファイル検索
　　$ find /home/ -name find_test*　# ファイル名が指定一致しているファイル検索
　　$ find -mtime -1　# 1日以内に更新されたファイル検索
```
