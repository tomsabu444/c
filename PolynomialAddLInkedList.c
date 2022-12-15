#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
struct node
{
int coeff;
int degree;
struct node *next;
}*head1=NULL,*head2=NULL,*head3=NULL,*current1=NULL,*current2=NULL,*current
3=NULL;
void main()
{
int r,i;
struct node *newnode,*ptr1,*ptr2;
printf(&quot;enter the maximum degree&quot;);
scanf(&quot;%d&quot;,&amp;r);
printf(&quot;enter the details of first polynomial\n&quot;);
for(i=r;i&gt;=0;i--)
{
newnode=(struct node *)malloc(sizeof(struct node));
printf(&quot;enter the coefficient of degree %d\n&quot;,i);
scanf(&quot;%d&quot;,&amp;newnode-&gt;coeff);
newnode-&gt;degree=i;
newnode-&gt;next=NULL;
if(i==r)
{
head1=newnode;
current1=newnode;
}
else
{
current1-&gt;next=newnode;
current1=newnode;
}
}
printf(&quot;enter the details of second polynomial\n&quot;);
for(i=r;i&gt;=0;i--)
{
newnode=(struct node *)malloc(sizeof(struct node));
printf(&quot;enter the coefficient of degree %d\n&quot;,i);
scanf(&quot;%d&quot;,&amp;newnode-&gt;coeff);
newnode-&gt;degree=i;
newnode-&gt;next=NULL;
if(i==r)
{

head2=newnode;
current2=newnode;
}
else
{
current2-&gt;next=newnode;
current2=newnode;
}
}
ptr1=head1;
ptr2=head2;
for(i=r;i&gt;=0;i--)
{
newnode=(struct node *)malloc(sizeof(struct node));
newnode-&gt;coeff=ptr1-&gt;coeff + ptr2-&gt;coeff;
newnode-&gt;degree=i;
newnode-&gt;next=NULL;
ptr1=ptr1-&gt;next;
ptr2=ptr2-&gt;next;
if(i==r)
{
head3=newnode;
current3=newnode;
}
else
{
current3-&gt;next=newnode;
current3=newnode;
}
}
ptr1=head1;
printf(&quot;the sum of polynomial &quot;);
for(i=r;i&gt;=0 &amp;&amp; ptr1!=NULL;i--)
{
if(ptr1-&gt;next!=NULL)
{
printf(&quot;%dx^%d+&quot;,ptr1-&gt;coeff,r);
ptr1=ptr1-&gt;next;
}
else
{
printf(&quot;%d and&quot;,ptr1-&gt;coeff);
}
}
ptr1=head2;
for(i=r;i&gt;=0 &amp;&amp; ptr1!=NULL;i--)

{
if(ptr1-&gt;next!=NULL)
{
printf(&quot;%dx^%d+&quot;,ptr1-&gt;coeff,r);
ptr1=ptr1-&gt;next;
}
else
{
printf(&quot;%d is\n&quot;,ptr1-&gt;coeff);
}
}
ptr1=head3;
for(i=r;i&gt;=0 &amp;&amp; ptr1!=NULL;i--)
{
if(ptr1-&gt;next!=NULL)
{
printf(&quot;%dx^%d+&quot;,ptr1-&gt;coeff,r);
ptr1=ptr1-&gt;next;
}
else
{
printf(&quot;%d&quot;,ptr1-&gt;coeff);
}
}
}
