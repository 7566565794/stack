void push(int a)
{   
        s.push(a);
     //add code here.
}
bool isFull(int n)
{
    int len=s.size();
     if(len==n){
         return true;
     }
     return false;
}
bool isEmpty()
{
    if(s.empty()){
        return true;
    }
    return false;
}
int pop()
{
    //add code here.
        s.pop();
}
int getMin()
{
  int x=s.top();
  s.pop();
  while(!s.empty()){
      if(x>s.top()){
          x=s.top();
      }
      s.pop();
  }
  return x;
}
