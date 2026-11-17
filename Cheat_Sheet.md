## To Initialize Git to Track your Code

git init

## To Link Github Repository to our local folder

git remote add origin [Repo-name].git

## Add your name and email so your changes could be tracked

git config --global user.name "Name"

git config --global user.email "your-github-email@example.com"

## be on the same page with your github repo

git push -u origin main

## Check Status of all your changes

git status
this tells us that is status of each file

## First stage changes than commit

git add .  //all files are staged

git add [Filename] // only selected files are staged 

git commit -m "your_comment"  // changes are now saved/labelled 

git push // add changes to your github

## See the list of comments you have done

git log
git log --oneline
