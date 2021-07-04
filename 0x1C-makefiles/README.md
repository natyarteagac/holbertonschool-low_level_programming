<div class="project row">
  <div class="col-xs-12 col-md-10 col-lg-8 contains-images">

<h1 class="gap">0x1C. C - Makefiles</h1>


  <ul class="list-group metadata" id="project-metadata">
  <li class="list-group-item">
    <i class="fa fa-folder-open fa-fw"></i>
    <em>Foundations &gt; Low-level programming &amp; Algorithm &gt; Hatching out</em>
  </li>

</ul>

<div class="gap" id="project-description">
  <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif" alt="" style="" /></p>

<p><br /></p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/E3lCL-6xT3Qt_K38Tk4s_g" title="Makefile" target="_blank">Makefile</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/vNOO1PF-Xd3ccUIXT0ZItw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are <code>make</code>, Makefiles</li>
<li>When, why and how to use Makefiles</li>
<li>What are rules and how to set and use them</li>
<li>What are explicit and implicit rules</li>
<li>What are the most common / useful rules</li>
<li>What are variables and how to set and use them</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>OS: Ubuntu 14.04 LTS</li>
<li>Version of <code>gcc</code>: 4.8.4</li>
<li>Version of <code>make</code>: GNU Make 3.81</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
</ul>

## Tasks
### **0. make -f 0-Makefile**
- name of the executable: holberton
- rules: all
  - The all rule builds your executable
- variables: none

### 1. **make -f 1-Makefile**
- name of the executable: holberton
- rules: all
  - The all rule builds your executable
- variables: CC, SRC
  - CC: the compiler to be used
  - SRC: the .c files

### **2. make -f 2-Makefile**
- name of the executable: holberton
- rules: all
  - The all rule builds your executable
- variables: CC, SRC, OBJ, NAME
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
- The all rule should recompile only the updated source files
- You are not allowed to have a list of all the .o files

### **3. make -f 3-Makefile**
- name of the executable: holberton
- rules: all, clean, oclean, fclean, re
  - all: builds your executable
  - clean: deletes all Emacs and Vim temporary files along with the executable
  - oclean: deletes the object files
  - fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
  - re: forces recompilation of all source files
- variables: CC, SRC, OBJ, NAME, RM
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
  - RM: the program to delete files
- The all rule should recompile only the updated source files
- The clean, oclean, fclean, re rules should never fail
- You are not allowed to have a list of all the .o files

### **4. A complete Makefile**
- name of the executable: holberton
- rules: all, clean, fclean, oclean, re
  - all: builds your executable
  - clean: deletes all Emacs and Vim temporary files along with the executable
  - oclean: deletes the object files
  - fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
  - re: forces recompilation of all source files
- variables: CC, SRC, OBJ, NAME, RM, CFLAGS
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
  - RM: the program to delete files
  - CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
- The all rule should recompile only the updated source files
- The clean, oclean, fclean, re rules should never fail
