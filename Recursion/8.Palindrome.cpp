
Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice
$ mkdir devops

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice
$ cd devops/

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops
$ nano 1.txt

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops
$ nano 2.txt

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops
$ git init
Initialized empty Git repository in E:/CSE/Devops-Git-Practice/devops/.git/

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$ git status
On branch master

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        1.txt
        2.txt

nothing added to commit but untracked files present (use "git add" to track)

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$ git add .
warning: LF will be replaced by CRLF in 1.txt.
The file will have its original line endings in your working directory
warning: LF will be replaced by CRLF in 2.txt.
The file will have its original line endings in your working directory

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$ git status
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   1.txt
        new file:   2.txt


Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$ git commit -m "first commit adding 1.txt and 2.txt"
[master (root-commit) e55c2d5] first commit adding 1.txt and 2.txt
 2 files changed, 2 insertions(+)
 create mode 100644 1.txt
 create mode 100644 2.txt

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$ git status
On branch master
nothing to commit, working tree clean

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$ nano 3.txt

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$ nano 2.txt

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$ git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   2.txt

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        3.txt

no changes added to commit (use "git add" and/or "git commit -a")

Asus Nitro5@acerNitro MINGW64 /e/CSE/Devops-Git-Practice/devops (master)
$
