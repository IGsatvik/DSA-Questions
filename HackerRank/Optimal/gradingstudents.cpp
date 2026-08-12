vector<int> gradingStudents(vector<int> grades) {
    int n=grades.size();
    for(int i=0;i<n;i++){
        if(grades[i]<38)continue;
        int mod=5-(grades[i]%5);
        if(mod<3)grades[i]+=mod;
    }
    return grades;
}
