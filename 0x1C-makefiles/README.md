# Makefiles

It is a file which defines set of tasks to be executed. It is used in conjunction with the **make** utility.

## Makefile Syntax
A makefile consists of a set of rules. A rule generally looks like:
      **target: prerequisites
          <TAB> recipe**

The *targets* are file names, separated by spaces. Typically, there is only one per rule.
The *recipe/commands* are a series of steps typically used to make the target(s). These need to start with a tab character, not spaces.
The *prerequisites* are also file names, separated by spaces. These files need to exist before the commands for the target are run. These are also called *dependencies.*
The target, prerequisites and recipes together make a *rule.*
