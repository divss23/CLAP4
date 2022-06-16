#include &lt;stdio.h&gt;
int main(void)
{
struct student {
char registerno[15];
char firstname[64];
char lastname[64];
float marks;
};
struct student std[3];
struct student *ptr = NULL;
int i;
ptr = std;
for (i = 0; i &lt; 3; i++)
{
printf(&quot;Student Number%d\n&quot;, (i + 1));
printf(&quot;Enter Registration Number: &quot;);
scanf(&quot;%s&quot;, ptr-&gt;registerno);
printf(&quot;Enter first name: &quot;);
scanf(&quot;%s&quot;, ptr-&gt;firstname);
printf(&quot;Enter last name: &quot;);
scanf(&quot;%s&quot;, ptr-&gt;lastname);
printf(&quot;Enter Marks: &quot;);
scanf(&quot;%f&quot;, &amp;ptr-&gt;marks);
ptr++;
}
ptr = std;
for (i = 0; i &lt; 3; i++)

{
printf(&quot;\nStudent Number%d\n&quot;, (i + 1));
// display result via std variable
printf(&quot;\nResult via std\n&quot;);
printf(&quot;Registration Number: %s\n&quot;, std[i].registerno);
printf(&quot;First Name: %s\n&quot;, std[i].firstname);
printf(&quot;Last Name: %s\n&quot;, std[i].lastname);
printf(&quot;Marks: %f\n&quot;, std[i].marks);
// display result via ptr variable
printf(&quot;\nResult via ptr\n&quot;);
printf(&quot;Registration Number: %s\n&quot;, ptr-&gt;registerno);
printf(&quot;First Name: %s\n&quot;, ptr-&gt;firstname);
printf(&quot;Last Name: %s\n&quot;, ptr-&gt;lastname);
printf(&quot;Marks: %f\n&quot;, ptr-&gt;marks);
ptr++;
}
return 0;
}