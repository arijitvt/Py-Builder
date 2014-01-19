Py-Builder
==========

The Makefile based building mechanism is cumbersome for most of the developers and for most of the companies and also open source projects, end up creating their own build process. To understand this kind building process requires significant knowledge of the how compilation works, what are make file rules and thousands of other makefile creating tools like CMake, qmake etc. 
This projects aims to create to streamline those methods and take good from all of them and provide those features through a very simple interface to the C/C++ developers so that they can build their project in no time and hassle free way.

Most of the state-of-the-art tools, generate a long generic makefile which can used directly used by the programmers. The good thing about this approach is that developers can use all the make framework but the bad this is that the intermediate makefile generated is most of time very generic and long enough to understand what it is doing. So any change in that makefile is a nightmare to the developers. So our idea is not to create any intermediate Makefile and directly calls the compiler and build the program.

Well keeping that in mind, the problem is divided into buiding several components.
First is rule engine:
	1. Build a rule engine which can manually/automatically generates the dependecies and determine the compilation+linking order. This component should try to resolve the circular dependencies and if not then must  report back to the developers.
	2. The rule engine should also be able to determine the  absence of std libraries and how to get them. (This may work similarly how Maven works for Java). Thus in future if someone wants to publish their own artifacts then they can mention  some details in some xml/json from while this make framework can download and install. In one word a custom repo for all the standard and custom libraries directly available to the developers.

	3. The build process should also maintain its own rules, like where to keep intermediate files, where to keep the bin, std rules to clean etc .

The second componenent is the interface builder.
	1. This is relatively easier part. This component will give a std way for the develoers to mention the src files , build directory, build mode(debug/release) etc and generate+maintain its own set of rule.


------This is so far I can think off but please contributes your ideas, knowledge, insights and code -------- :)

