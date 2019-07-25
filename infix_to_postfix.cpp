using namespace std;

stack<char>st;

int isprec(char ch)
{
    if(ch=='^')
        return 3;
    else if(ch=='*' || ch=='/')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return -1;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
                st.push(str[i]);
            else if(str[i]==')')
            {
                while(!st.empty()&&st.top()!='(')
                {
                    cout<<st.top();
                    st.pop();
                }
                
                st.pop();
            }
            else if( (tolower(str[i])>='a') && (tolower(str[i])<='z') )
                cout<<str[i];
            else
            {
                //if(st.empty() || ( isprec(st.top()) > isprec(str[i] ) ))
                  //  st.push(str[i]);
                //else
                //{
                    while(!st.empty() && isprec(str[i]) <= isprec(st.top()))
                    {
                        cout<<st.top();
                        st.pop();
                    }
                    st.push(str[i]);
                //}
            }
        }
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
	return 0;
}
