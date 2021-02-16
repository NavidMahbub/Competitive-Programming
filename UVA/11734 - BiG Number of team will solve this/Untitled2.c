for(int i=0; i<s1.size();) {
    for(int j=0; j<s2.size();) {
        True=0;
        if(s1[i]!=' ' && s2[j]!=' '){
            if(s1[i]==s2[j]){
                i++;
                True=1;
                j++;
            }else{
                True=0;
                break;
            }
        }else if(s1[i]==' '){
            i++;
        }else if(s1[j]==' '){
            j++;
        }
    }
}
