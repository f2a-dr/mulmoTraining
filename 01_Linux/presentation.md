[comment]: # (This presentation was made with markdown-slides)
[comment]: # (This is a CommonMark compliant comment. It will not be included in the presentation.)
[comment]: # (Compile this presentation with the command below)
[comment]: # (mdslides presentation.md --include media)

[comment]: # (Set the theme:)
[comment]: # (THEME = white)
[comment]: # (CODE_THEME = base16/zenburn)
[comment]: # (The list of themes is at https://revealjs.com/themes/)
[comment]: # (The list of code themes is at https://highlightjs.org/)

[comment]: # "You can also use quotes instead of parenthesis"
[comment]: # 'Single quotes work too'
[comment]: # "THEME = white"

[comment]: # (Pass optional settings to reveal.js:)
[comment]: # (controls: true)
[comment]: # (keyboard: true)
[comment]: # (markdown: { smartypants: true })
[comment]: # (hash: false)
[comment]: # (respondToHashChanges: false)
[comment]: # (Other settings are documented at https://revealjs.com/config/)

MulMoPro meeting | 5 aprile 2024

# GNU/Linux and the shell

[comment]: # (A comment starting with three or more !!! marks a slide break.)
[comment]: # (!!!)

### GNU/Linux

It is a family of open-source operating systems, widely used for servers, IoT, HPC...

There exists several version of GNU/Linux, which are called distributions, or *distro*, the one you will find on out group workstation is Ubuntu.
While they can appear quite different, their backbone is the same, as they are based on the Linux kernel.

[comment]: # (!!!)

### Terminal emulators and shell

* The **shell** is used to interact with the operating systems through textual commands (command line interface/interpreter)
* A **terminal emulator** is a program in which shell commands and shell scripts can be run

[comment]: # (!!!)

The default terminal emulator for Ubuntu is called GNOME terminal or simply terminal, let's open it and have a look.
* You can open it by searching on **terminal** from the launcher
* In some cases the keyboard shortcut `Crtl+Alt+t` is set to open a terminal

[comment]: # (!!!)

From here it is possile to launch commands, programs, and navigate in the file system.

We can open the Ubuntu file explorer on the side to have an graphical aid in understanding what we are doing.
To do so let's open the progam **File** and let's keep the two windows side by side.

[comment]: # (!!!)

### The `ls` command

It is used to *list* all the files and directories

Let's try it:

```bash
ls 
```

[comment]: # (!!! data-auto-animate data-background-color="goldenrod")

### The `ls` command

It is used to *list* all the files and directories

Let's try it:

```bash
ls 
```
The flag `-a` shows *all* files, including the hidden ones:
```bash
ls -a
```

[comment]: # (!!! data-auto-animate data-background-color="goldenrod")

### The filesystem structure

The filesystem primary directory is the **root** `/`, which contains all the other directories:
* `/bin`, `/sbin` contains essential program binaries
* `/lib` contains the libraries used from different programs
* `/usr`, `/opt` contains non-essential and add-on programs, applications and packages

[comment]: # (|||)

* `/etc` contains configuration files
* `/dev` containes the devices, like the disks, printers, ports ...

[comment]: # (|||)

* `/home` contains the home directories for the various user
* `/root` contains the home directory for the root user

[comment]: # (!!!)

### The `pwd` command

It *prints working directory*'s **path**, that is the absolute path of directory in which we are at the moment:
```bash
pwd
```

[comment]: # (!!! data-background-color="goldenrod")

### The `cd` command

It is use to *change directory*, and it requires as agument an absolute or a relative path:
```bash
cd /path/to/directory
```

[comment]: # (!!! data-background-color="goldenrod")

Let's check where we are and enter in a subdirectory to see what's inside it
```bash
pwd
```

[comment]: # (!!! data-auto-animate data-background-color="goldenrod")

Let's check where we are and enter in a subdirectory to see what's inside it
```bash
pwd
ls
```

[comment]: # (!!! data-auto-animate data-background-color="goldenrod")

Let's check where we are and enter in a subdirectory to see what's inside it
```bash
pwd
ls
cd Downloads
```

[comment]: # (!!! data-auto-animate data-background-color="goldenrod")

Let's check where we are and enter in a subdirectory to see what's inside it
```bash
pwd
ls
cd Downloads
ls
```

[comment]: # (!!! data-auto-animate data-background-color="goldenrod")

What does happens know if I just type the command `cd`?
```bash
cd
```

[comment]: # (!!! data-auto-animate data-background-color="goldenrod")


What does happens know if I just type the command `cd`?
```bash
cd
```
I am back in my home directory, and I can check it with:
```bash
pwd
```

[comment]: # (!!! data-auto-animate data-background-color="goldenrod")

## Lists and math

- Using markdown to write presentations
- Easy lists
- LaTeX math syntax

`$$ J(\theta_0,\theta_1) = \sum_{i=0} $$`

[comment]: # (!!!)

Code syntax highlighting and animations:

```js [1-2|3|4]
let a = 1;
let b = 2;
let c = x => 1 + 2 + x;
c(3);
```

Notice the background color change.

[comment]: # (section attributes for the just-ending slide can be specified:)
[comment]: # (!!! data-background-color="aquamarine")

Use background videos, background pictures and **text formatting**,
everything *without breaking* your markdown files.

[comment]: # (Other background options: https://revealjs.com/backgrounds/)
[comment]: # (!!! data-background-video="media/video.mp4", data-background-video-loop data-background-video-muted data-background-opacity="0.2")

Even speaker notes, accessed through the `S` key on your keyboard.

(You may have to allow pop-up windows and try again.)

Note:
This will only appear in the speaker view! 🤯

[comment]: # (!!!)

## Pictures

![picture of spaghetti](media/image0.gif) <!-- .element: style="height:50vh; max-width:80vw; image-rendering: crisp-edges;" -->

Showcase media including images, videos and animations.

[comment]: # (!!!)

## Animations

- This is an example list
- Just to showcase Reveal.js' animations

[comment]: # (!!! data-auto-animate)

## Animations

- This is an example list
- Just to showcase Reveal.js' animations
- This item will be automatically faded-in

[comment]: # (!!! data-auto-animate)

```js [1-2|3|4]
let a = 1;
let b = 2;
let c = x => 1 + 2 + x;
c(3);
```
<!-- .element: data-id="code" -->

[comment]: # (!!! data-auto-animate)

```js [5]
let a = 1;
let b = 2;
let c = x => 1 + 2 + x;
c(3);
c(5);
```
<!-- .element: data-id="code" -->

Animate code as well <!-- .element: class="fragment" data-fragment-index="1" -->

[comment]: # (!!! data-auto-animate)

Insert Youtube videos.

<iframe width="560" height="315" src="https://www.youtube.com/embed/KPfzRSBzNX4" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

[comment]: # (!!!)

Insert local videos.

<iframe width="560" height="315" src="media/video.mp4" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

[comment]: # (!!!)

Download [markdown-slides](https://gitlab.com/da_doomer/markdown-slides)!

[comment]: # (!!!)

A couple more examples follow.

[comment]: # (!!!)

![logo](media/wide.png)

***use markdown to write slides***

Author Name

[comment]: # (!!!)

[comment]: # (!!! data-background-image="media/inkscape.png" data-background-size="contain")

Press down on your keyboard or swipe down.

[comment]: # (|||)

**Vertical slides!**

(thanks [@porvik!](https://gitlab.com/da_doomer/markdown-slides/-/issues/8))

[comment]: # (|||)

As many vertical slides as you like.

[comment]: # (!!!)

Add tables:

| Insert | Tables |
| ------ | ------ |
| A row  | Another|
| text   | more   |

[comment]: # (!!!)

## Vertical separator

----------

Some other text.

[comment]: # (!!!)

You can also use in-line HTML.

<div style="font-size: 1em;">
small
</div>

<div style="font-size: 5em;">
large
</div>
