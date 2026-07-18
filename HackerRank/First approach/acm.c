int* acmTeam(int topic_count, char** topic, int* result_count) {
    int n=topic_count,m=strlen(topic[0]),c=0,max=0,num=0;
    int* res=malloc(2*sizeof(int));
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<m;k++){
                if(topic[i][k]=='1'||topic[j][k]=='1'){
                    c++;
                }
            }
            if(c>max){
                max = c;
                num = 1;
            }else if(c==max) {
                num++;
            }
            c=0;
        }
    }
    res[0]=max;
    res[1]=num;
    *result_count = 2;
    return res;
}
