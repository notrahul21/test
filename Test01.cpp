#include <iostream>
#include <iomanip>
using namespace std;

double SAT(int math, int reading, int writing){
    double SATscores = 0;
    SATscores = ((2*math)+reading+writing)/32;
    return SATscores;
}
double ACT(int english1, int math1, int reading1, int science1){
    double ACTscores = 0;
    ACTscores = (english1+(2*math1)+reading1+science1)/1.8;
    return ACTscores;
}
double GPA(double actual_GPA, double max_GPA, double transcript_multiplier){
    double x = 0;
    x = ((actual_GPA/max_GPA)*100*transcript_multiplier);
    return x;
}

int main(){
    
    double choose, satmath, satcr, satgr, actenglish, actmath, actreading, actscience;
    double total1, total2;
    double ogpa, mgpa, tsm, sat1,sat2, ast1, ast2, gpaa1, gpaa2;
    cout<<"This program compares two applicants todetermine which one seems like the strongerapplicant.  For each candidate I will needeither SAT or ACT scores plus a weighted GPA";
    cout<<endl;
    cout<<endl;
    cout<<"Information for applicant #1"<<endl;
    cout<<"do you have 1) SAT scores or 2) ACT scores?";
    cin>>choose;
    if(choose == 1){
        cout<<"SAT math?"<<endl;
    cin>>satmath;
    cout<<"SAT critical reading?"<<endl;
    cin>>satcr;
    cout<<"SAT writing?"<<endl;
    cin>>satgr;
    sat1=SAT(satmath, satcr, satgr);
    cout<<"exam score = "<<fixed<<sat1<<setprecision(1)<<endl;
    
    cout<<"overall GPA? "<<endl;
    cin>>ogpa;
    cout<<"max GPA?"<<endl;
    cin>>mgpa;
    cout<<"Transcript Multiplier"<<endl;
    cin>>tsm;
    gpaa1 = GPA(ogpa, mgpa, tsm);
    cout<<"GPA score = "<<gpaa1<<setprecision(1);
    total1=sat1+gpaa1;
    
    }
    else{
        cout<<"ACT English?"<<endl;
    cin>>actenglish;
    cout<<"ACT math?"<<endl;
    cin>>actmath;
    cout<<"ACT reading?"<<endl;
    cin>>actreading;
    cout<<"ACT science?"<<endl;
    cin>>actscience;
    ast1=ACT(actenglish, actmath, actreading, actscience);
    cout<<"exam score = "<<fixed<<ast1<<setprecision(1)<<endl;
    cout<<"overall GPA? "<<endl;
    cin>>ogpa;
    cout<<"max GPA?"<<endl;
    cin>>mgpa;
    cout<<"Transcript Multiplier"<<endl;
    cin>>tsm;
    gpaa1 = GPA(ogpa, mgpa, tsm);
    cout<<"GPA score = "<<gpaa1<<setprecision(1);
    total1=ast1+gpaa1;
    }
    
    cout<<endl;
    cout<<endl;

    cout<<"Information for applicant #2"<<endl;
    cout<<"do you have 1) SAT scores or 2) ACT scores?";
    cin>>choose;
    if(choose == 1){
        cout<<"SAT math?"<<endl;
    cin>>satmath;
    cout<<"SAT critical reading?"<<endl;
    cin>>satcr;
    cout<<"SAT writing?"<<endl;
    cin>>satgr;
    sat1=SAT(satmath, satcr, satgr);
    cout<<"exam score = "<<fixed<<sat1<<setprecision(1)<<endl;
    
    cout<<"overall GPA? "<<endl;
    cin>>ogpa;
    cout<<"max GPA?"<<endl;
    cin>>mgpa;
    cout<<"Transcript Multiplier"<<endl;
    cin>>tsm;
    gpaa2 = GPA(ogpa, mgpa, tsm);
    cout<<"GPA score = "<<gpaa2<<setprecision(1);
    total2=sat2+gpaa2;
    }
    else{
        cout<<"ACT English?"<<endl;
    cin>>actenglish;
    cout<<"ACT math?"<<endl;
    cin>>actmath;
    cout<<"ACT reading?"<<endl;
    cin>>actreading;
    cout<<"ACT science?"<<endl;
    cin>>actscience;
    ast2=ACT(actenglish, actmath, actreading, actscience);
    cout<<"exam score = "<<ast2<<fixed<<setprecision(1)<<endl;
    cout<<"overall GPA? "<<endl;
    cin>>ogpa;
    cout<<"max GPA?"<<endl;
    cin>>mgpa;
    cout<<"Transcript Multiplier"<<endl;
    cin>>tsm;
    gpaa2 = GPA(ogpa, mgpa, tsm);
    cout<<"GPA score = "<<gpaa2<<setprecision(1);
    total2=ast2+gpaa2;
    }
   
    cout<<endl<<endl;

    cout<<"First applicant overall score = "<<total1<<endl;
    cout<<"Second applicant overall score = "<<total2<<endl;
    if(total1>total2){
        cout<<"The first applicant seems to be better"<<endl;
    }
    else{
        cout<<"The second applicant seems to be better"<<endl;
    } 
    
    return 0;
}