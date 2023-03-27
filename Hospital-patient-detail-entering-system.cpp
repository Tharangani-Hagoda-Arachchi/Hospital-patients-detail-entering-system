#include <iostream>

using namespace std;
class Patients//GADSE191F-034
{
public:
    string Patient_name;
    string Patient_address;
    string Gender;
    int Medical_number;
    string Short_description_of_disease;
    void setDetails_01()
    {
        cout<<"Medical Number:";
        cin>>Medical_number;
        cout<<"Patient's Name:";
        cin>>Patient_name;
        cout<<"Patient's City:";
        cin>>Patient_address;
        cout<<"Gender:";
        cin>>Gender;
        cout<<"Type of Disease:";
        cin>>Short_description_of_disease;
    }
    virtual void display_01()=0;

};
class Patient_between_the_ages_of_zero_and_five:public Patients//GADSE191F-033
{
public:
    string Name_of_the_guardian;
   string Telephone_number_of_the_guardian;
    Patient_between_the_ages_of_zero_and_five(string Name,string  TP)
    {
        Name_of_the_guardian=Name;
        Telephone_number_of_the_guardian=TP;
    }
    void display_01()
    {
        cout<<"Name of the Guardian:"<<Name_of_the_guardian<<endl;
        cout<<"Telephone Number of the Guardian:"<<Telephone_number_of_the_guardian<<endl<<endl<<endl;
    }
    ~Patient_between_the_ages_of_zero_and_five()
    {

    }

};
class Patient_between_the_age_of_five_and_eighteen:protected Patients
{
public:
    double Height,Weight,BMI_value;
    void show_02()
    {
        setDetails_01();
    }
    Patient_between_the_age_of_five_and_eighteen(double H,double W,double BMI)
    {
        Height=H;
        Weight=W;
        BMI_value=BMI;
    }
    void display_01()
    {
        cout<<"Height in cm:"<<Height<<endl;
        cout<<"Weight in kg:"<<Weight<<endl;
        cout<<"BMI Value:"<<BMI_value<<endl<<endl<<endl;
    }
    ~Patient_between_the_age_of_five_and_eighteen()
    {

    }

};
class Patient_between_the_age_of_eighteen_and_thirtyfive:private Patients//GADSE191F-031
{
public:
    double Height,Weight;
    string Blood_group;
    void show_03()
    {
        setDetails_01();
    }
    Patient_between_the_age_of_eighteen_and_thirtyfive(double H,double W,string BO)
    {
        Height=H;
        Weight=W;
        Blood_group=BO;
    }
    void display_01()
    {
        cout<<"Height in cm:"<<Height<<endl;
        cout<<"Weight in kg:"<<Weight<<endl;
        cout<<"Blood Group:"<<Blood_group<<endl<<endl<<endl;
    }
    ~Patient_between_the_age_of_eighteen_and_thirtyfive()
    {

    }


};
class Patient_between_the_age_of_thirtyfive_and_sixty:public Patients
{
public:
    string Diseases_currently_being_treated,Drugs_currently_use;
    Patient_between_the_age_of_thirtyfive_and_sixty(string CTD,string CUD)
    {
      Diseases_currently_being_treated=CTD;
      Drugs_currently_use=CUD;

    }
    void display_01()
    {
        cout<<"Diseases currently being treated:"<<Diseases_currently_being_treated<<endl;
        cout<<"Drugs currently use:"<<Drugs_currently_use<<endl<<endl<<endl;
    }
    ~Patient_between_the_age_of_thirtyfive_and_sixty()
    {

    }
};
class Patient_over_sixty_years:protected Patients//GADSE191F-032
{
public:
    double Blood_pressure,Body_temperature;
    void show_05()
    {
        setDetails_01();
    }
    Patient_over_sixty_years(double BP,double BT)
    {
        Blood_pressure=BP;
        Body_temperature=BT;
    }
    void display_01()
    {
        cout<<"Blood Pressure in mmHg:"<<Blood_pressure<<endl;
        cout<<"Body Temperature in C:"<<Body_temperature;
    }
    ~Patient_over_sixty_years()
    {

    }
};



int main()
{
    cout<<"First patient details:"<<endl<<endl;
    Patient_between_the_ages_of_zero_and_five P1A1("vimal","0764591149");
    P1A1.setDetails_01();
    P1A1.display_01();
    cout<<"Second patient details:"<<endl<<endl;
    Patient_between_the_age_of_five_and_eighteen P1A2(163.06,60.00,19.12);
    P1A2.show_02();
    P1A2.display_01();
    cout<<"Third patient details:"<<endl<<endl;
    Patient_between_the_age_of_eighteen_and_thirtyfive P1A3(153.00,55.00,"O+");
    P1A3.show_03();
    P1A3.display_01();
    cout<<"fourth patient details:"<<endl<<endl;
    Patient_between_the_age_of_thirtyfive_and_sixty P1A4("Diabetes,High blood pressure","peneciline,amoxsalin");
    P1A4.setDetails_01();
    P1A4.display_01();
    cout<<"Fifth patient details:"<<endl<<endl;
    Patient_over_sixty_years P1A5(75.04,33.20);
    P1A5.show_05();
    P1A5.display_01();

    return 0;
}
