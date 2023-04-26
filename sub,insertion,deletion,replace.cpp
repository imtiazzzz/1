#include<iostream>
using namespace std;


string sub(string s,int position,int length){
    string temp;
    for (int i = position; i < position+length; i++) {
        temp=temp+s[i];
    }

    return temp;
}


string inser(string s2,int p_of_ins,string ins_text){
    string temp1,temp2,temp3;
    string final;
    temp1=sub(s2,0,p_of_ins-1);
    temp2=temp2+ins_text;
    temp3=sub(s2,p_of_ins,s2.size()-p_of_ins);

    final=temp1+temp2+temp3;

    return final;
}

string del(string s3, int p_of_del, int len_of_del){

    string temp1,temp2;
    string final;

    temp1=sub(s3,0,p_of_del);
    temp2=sub(s3,p_of_del+len_of_del,s3.length()-len_of_del-1);

    final=temp1+temp2;

    return final;
}


int index(string s4, string patternf) {


        int count=0,temp=0,not_found=-1;


        for (int i = 0; i <=s4.length()-patternf.length() ; ++i) {
            temp=i;
            for(int j=0; j<=patternf.size();j++ ){
                if(s4[i+j]!=patternf[j]){
                    break;
                }
                count++;
            }
            if (count>2){
                return temp;
                break;
            }
        }

        if(count==0)
            return not_found;


    }


    void replace(string s5,string rep,string n){

    int k=index(s5,rep);
    string temp=del (s5,k,rep.length());
    string temp2=inser(s5,k,n);

    cout<<"New text is :"<<temp2;

}


int main() {
    string x;
    string ins;
    string pattern1;
    string rep_pattern;
    string new_pattern;
    int p_ins;
    int d_pos,d_len;


    cout<<"Enter String:";
    cin>>x;
    cout<<"This String is: "<<x<<endl;

    cout<<"Enter text to insert: ";
    cin>>ins;
    cout<<"Enter position to insert: ";
    cin>>p_ins;
    string ins_final= inser(x,p_ins,ins);

    cout<<"final insert string is:"<<ins_final;

    cout<<"Enter text position to delete : ";
    cin>>d_pos;
    cout<<"Enter length of text to : ";
    cin>>d_len;

    string del_final= del(x,d_pos,d_len);

    cout<<"final insert string is:"<<del_final;



    cout<<"Enter pattern to find index : ";
    cin>>pattern1;

    int ind=index(x,pattern1);

    if (ind>0)
    cout<<"Pattern found at :"<<ind;
    else
        cout<<"Pattern not found";


    cout<<"Enter pattern you want to replace: ";
    cin>>rep_pattern;
    cout<<"Enter pattern you want to replace: ";
    cin>>rep_pattern;
    replace(x,rep_pattern,rep_pattern);
}
