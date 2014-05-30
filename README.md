ClarionDateTime
===============

Clarion Date Time Class

Code Conventions
----------------

<h3>Documentation</h3>

Use XML-style documentation for all methods, including both public and private methods.  Every method must be described by a Summary, but all other tags should only be present when necessary.  The following order should be observed:

!!!&lt;summary&gt;&lt;/summary&gt;<br />
!!!&lt;returns&gt;&lt;/returns&gt;<br />
!!!&lt;param name="name"&gt;&lt;/param&gt;<br />
!!!&lt;remarks&gt;<br />
!!!           Put additional remarks here.  Use <b>&lt;para&gt;</b>to create separate paragrahps.<b>&lt;/para&gt;</b><br />
!!!&lt;/remarks&gt;

* Summary: Provide a summary of what the method does.  Be brief but descriptive.
* Returns: Summarize the meaning of the return value (if any). Do not include return types, Clarion will describe the method signature automatically.
* Param: Summarize the meaning of the parameter, expected contents, and if the parameter is optional, describe when it is appropriate to use or omit the parameter.  Give the name of the parameter, without the prefix, in the "name" property.  Use one tag for each separate parameter in the method signature.
* Remarks: If additional information about the method is desired, provide it here.  If paragraphs are desired, enclose them in &lt;para&gt;&lt;/para&gt; tags.
 
Variables declared as part of a class or method should be documented inline, such as:

<pre>c_ClassVariable   LONG,PRIVATE  ! This is a class variable with inline documentation.</pre>

<h3>Variables</h3>
Naming conventions:
  * Concise, descriptive names should be used.
  * CamelCase patterns should be used: ThisIsAVariableName
  * Variables should use a prefix to signify the scope of the variable
  * Static variables should be ALL UPPERCASE.

Prefix conventions:
  * <b>p_</b> signifies a method parameter. With the exception of reference parameters, the original parameter should not be modified in the method.  Do not include the prefix in the "Name" property of the &lt;param&gt; tag of the method documentation.
  * <b>c_</b> signifies a class variable.

