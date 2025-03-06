# Key takeaways:

## Introduction
- Need to show persistence and grit.
- Got reminded of "[Coursera’s learning how to learn course](https://www.youtube.com/watch?v=O96fE1E-rf8)". amazing course.
- [Don’t ask to ask, just ask](https://dontasktoask.com/) & “[XY Problem](https://xyproblem.info/)”.
- [Rubber duck debugging](https://en.wikipedia.org/wiki/Rubber_duck_debugging).
- [Some google-fu](https://codinginflow.com/google-programming-questions).

## Prerequisites
- `win-key + shift + s` on windows opens screenshot tool / snip too, lol.
- How the internet works? Its [ans](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/How_does_the_Internet_work).
- Computers connected to the internet are called clients and servers.
  
  ![Clients and servers](https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/How_the_Web_works/simple-client-server.png)
- world wide web and email are services on top of internet.
-  Don't confuse the infrastructure (e.g., the internet) with the service (e.g., the web)
- [Glossary](https://developer.mozilla.org/en-US/docs/Glossary) - web comes with a lot of jargon.
- difference between web page, website, web server, and search engine?
  - Web page: A document which can be displayed in a web browser such as Firefox, Google Chrome, Opera, Microsoft Edge, or Apple Safari. These are also often called just "pages."
  - Website: A collection of web pages which are grouped together and usually connected together in various ways. Often called a "website" or a "site."
  - Web server: A computer that hosts a website on the Internet.
  - Search engine: A web service that helps you find other web pages, such as Google, Bing, Yahoo, or DuckDuckGo.
  - Don't confuse the infrastructure (e.g., the browser) with the service (e.g., the search engine)
  - Web browser: is a piece of software that retrieves and displays web pages
- [Reminder](https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/How_the_Web_works#clients_and_servers): Analogy for client-server interaction.
- [vscode shortcuts for linux](https://code.visualstudio.com/shortcuts/keyboard-shortcuts-linux.pdf)
- `..` refers to the parent directory (i.e. one above the current directory) and that `.` refers to the current directory.
- An absolute path specifies a location from the root of the file system.
- A relative path specifies a location starting from the current location.
- `cd ~` - takes us to the home directory (even simply running `cd` without any arguments does it too, from any directory).
- `cd /` - takes us to the root directory.
- Wildcards:
  - `*` matches zero or more characters in a filename, so *.txt matches all files ending in .txt.
  - `?` matches any single character in a filename, so `?.txt` matches "a.txt" but not "any.txt".

## Git Basics
- a distributed version control system (free, open-source, super-fast, scalable, and cheap branching/merging)
- Git is like a really epic save button for your files and directories.
- Git thinks about its data more like a stream of snapshots. Storing data as snapshots of the project over time
- With Git, every time you commit, or save the state of your project, Git basically takes a picture of what all your files look like at that moment and stores a reference to that snapshot.
- Git has three main states that your files can reside in: modified, staged, and committed:
  - Modified means that you have changed the file but have not committed it to your database yet.
  - Staged means that you have marked a modified file in its current version to go into your next commit snapshot.
  - Committed means that the data is safely stored in your local database.
  - The basic Git workflow goes something like this:
    1. You modify files in your working tree.
    2. You selectively stage just those changes you want to be part of your next commit, which adds only those changes to the staging area.
    3. You do a commit, which takes the files as they are in the staging area and stores that snapshot permanently to your Git directory.
  - The working tree is a single checkout of one version of the project. These files are pulled out of the compressed database in the Git directory and placed on disk for you to use or modify.
  - The staging area is a file, generally contained in your Git directory, that stores information about what will go into your next commit. Its technical name in Git parlance is the “index”, but the phrase “staging area” works just as well.
  - The Git directory is where Git stores the metadata and object database for your project. This is the most important part of Git, and it is what is copied when you clone a repository from another computer.
  - [Learn basics of Git](https://git-scm.com/book/en/v2/Git-Basics-Getting-a-Git-Repository#ch02-git-basics-chapter)
  - GitHub is a cloud-based platform where you can store, share, and work together with others to write code.
    - Once you start to collaborate with others and all need to work on the same repository at the same time, you’ll continually:
      - Pull all the latest changes made by your collaborators from the remote repository on GitHub.
      - Push back your own changes to the same remote repository on GitHub.
  - Git figures out how to intelligently merge this flow of changes, and GitHub helps you manage the flow through features such as "pull requests."
  - [Learn basics of GitHub](https://docs.github.com/en/get-started/start-your-journey).
  - [Git Cheatsheet](https://education.github.com/git-cheat-sheet-education.pdf).
  - Git best practices:
    -  atomic commit: is a commit that includes changes related to only one feature or task of your program. There are two main reasons for doing this: first, if something you change turns out to cause some problems, it is easy to revert the specific change without losing other changes; and second, it enables you to write better commit message
  - Note for future: need to watch a video on how git works , how it saves files (its 2 stage system)

  
