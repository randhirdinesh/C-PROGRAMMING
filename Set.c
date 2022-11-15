 
 ​//​Universal set is{1,2,3,4,5,6,7,8,9} 
  
 ​#​include​<​stdio.h​> 
 ​#​include​<​stdlib.h​> 
 ​void​ ​input​(); 
 ​void​ ​output​(​int​ set[]); 
 ​void​ ​setunion​(); 
 ​void​ ​setintersection​(); 
 ​void​ ​setdifference​(); 
 ​int​ a[]={​0​,​0​,​0​,​0​,​0​,​0​,​0​,​0​,​0​},b[]={​0​,​0​,​0​,​0​,​0​,​0​,​0​,​0​,​0​},c[​10​]; 
  
 ​void​ ​input​()                                        ​//​insert into the sets 
 ​{ 
 ​int​ x,i,n; 
 ​printf​(​"​\n​Enter the size of the set 1:​"​); 
 ​scanf​(​"​%d​"​,&n); 
 ​printf​(​"​\n​Enter the elements of the set 1:​"​); 
 ​for​(i=​0​;i<n;i++) 
 ​{ 
 ​ ​scanf​(​"​%d​"​,&x); 
 ​ a[x-​1​]=​1​; 
 ​} 
  
 ​printf​(​"​\n​Enter the size of the set 2:​"​); 
 ​scanf​(​"​%d​"​,&n); 
 ​printf​(​"​\n​Enter the elements of the set 2:​"​); 
 ​for​(i=​0​;i<n;i++) 
 ​{ 
 ​ ​scanf​(​"​%d​"​,&x); 
 ​ b[x-​1​]=​1​; 
 ​} 
  
 ​} 
  
 ​void​ ​output​(​int​ set[])                        ​//​display set elements 
 ​{ 
 ​int​ i; 
 ​for​(i=​0​;i<​9​;i++) 
 ​{ 
 ​ ​if​(set[i]==​1​) 
 ​ { 
 ​  ​printf​(​"​%d​ ​"​,i+​1​); 
 ​ } 
 ​} 
 ​} 
  
 ​void​ ​setunion​()                                        ​//​union of sets 
 ​{ 
 ​int​ i; 
 ​for​(i=​0​;i<​9​;i++) 
 ​{ 
 ​ ​if​(a[i]!=b[i]) 
 ​ { 
 ​  c[i]=​1​; 
 ​ } 
 ​ ​else 
 ​ { 
 ​  c[i]=a[i]; 
 ​ } 
 ​} 
 ​output​(c); 
 ​} 
  
 ​void​ ​setintersection​()                ​//​intersection of sets 
 ​{ 
 ​int​ i,c[​10​]; 
 ​for​(i=​0​;i<​9​;i++) 
 ​{ 
 ​ ​if​(a[i]==b[i]) 
 ​ { 
 ​  c[i]=a[i]; 
 ​ } 
 ​ ​else 
 ​ { 
 ​  c[i]=​0​; 
 ​ } 
 ​} 
 ​output​(c); 
 ​} 
  
 ​void​ ​setdifference​()                                        ​//​difference of sets 
 ​{ 
 ​int​ i; 
 ​printf​(​"​\n​Set Difference(A-B):​"​); 
 ​for​(i=​0​;i<​9​;i++) 
 ​{ 
 ​ ​if​(a[i]==​1​&&b[i]==​0​) 
 ​ { 
 ​  c[i]=​1​; 
 ​ } 
 ​ ​else 
 ​ { 
 ​  c[i]=​0​; 
 ​ } 
 ​} 
 ​output​(c); 
 ​printf​(​"​\n​Set Difference(A-B):​"​); 
 ​for​(i=​0​;i<​9​;i++) 
 ​{ 
 ​ ​if​(a[i]==​0​&&b[i]==​1​) 
 ​ { 
 ​  c[i]=​1​; 
 ​ } 
 ​ ​else 
 ​ { 
 ​  c[i]=​0​; 
 ​ } 
 ​} 
 ​output​(c); 
 ​} 
  
 ​void​ ​main​() 
 ​{ 
 ​int​ ch; 
  
 ​input​(); 
  
 ​printf​(​"​\n​The set elements are:​"​); 
 ​printf​(​"​\n​Set 1:​"​); 
 ​output​(a); 
  
 ​printf​(​"​\n​Set 2:​"​); 
 ​output​(b); 
  
 ​while​(​1​) 
 ​{ 
 ​printf​(​"​\n\n​SET OPERATIONS​"​); 
 ​printf​(​"​\n​1. Set Union​"​); 
 ​printf​(​"​\n​2. Set Intersection​"​); 
 ​printf​(​"​\n​3. Set Difference​"​); 
 ​printf​(​"​\n​Enter your choice:​"​); 
 ​scanf​(​"​%d​"​,&ch); 
 ​switch​(ch) 
 ​{ 
 ​case​ ​1​: 
 ​        { 
 ​         ​printf​(​"​\n​1. Set Union: ​"​); 
 ​         ​setunion​(); 
 ​         ​break​; 
 ​        } 
 ​case​ ​2​: 
 ​        { 
 ​         ​printf​(​"​\n​2. Set Intersection: ​"​); 
 ​         ​setintersection​(); 
 ​         ​break​; 
 ​        } 
 ​case​ ​3​: 
 ​        { 
 ​         ​printf​(​"​\n​3. Set Difference: ​"​); 
 ​         ​setdifference​(); 
 ​         ​break​; 
 ​        } 
 ​default​: 
 ​        { 
 ​         ​exit​(​0​); 
 ​        } 
 ​} 
 ​} 
 ​}
