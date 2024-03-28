#include "userdetails.h"
#include "ui_userdetails.h"

#include <QCompleter>
#include <QLineEdit>

UserDetails::UserDetails(QWidget *parent)
    : QWidget(parent), ui(new Ui::UserDetails)
{
    ui->setupUi(this);

    // QComboBox university search function
    QStringList universities;
    universities << "Ferdowsi University of Mashhad"
                 << "Sharif University of Technology"
                 << "Amirkabir University of Technology"
                 << "Tehran University"
                 << "Isfahan University of Technology"
                 << "Shahid Beheshti University"
                 << "University of Tehran"
                 << "K. N. Toosi University of Technology"
                 << "Iran University of Science and Technology"
                 << "University of Isfahan"
                 << "Tabriz University"
                 << "Shiraz University"
                 << "University of Guilan"
                 << "University of Mazandaran"
                 << "University of Kashan"
                 << "University of Zanjan"
                 << "University of Kurdistan"
                 << "University of Birjand"
                 << "University of Shahrekord"
                 << "University of Sistan and Baluchestan";

    for (const QString &university : universities)
    {
        ui->University->addItem(university);
    }

    QCompleter *universityCompleter = new QCompleter(universities, this);
    universityCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    ui->University->setCompleter(universityCompleter);
    ui->University->setEditable(true);
    ui->University->lineEdit()->setPlaceholderText("Enter the name");

    // QComboBox job title search function
    QStringList jobTitles;
    jobTitles << "Software Engineer"
              << "Web Developer"
              << "Data Scientist"
              << "Product Manager"
              << "UX/UI Designer"
              << "Business Analyst"
              << "Project Manager"
              << "DevOps Engineer"
              << "Quality Assurance Engineer"
              << "Network Administrator"
              << "Database Administrator"
              << "Systems Analyst"
              << "IT Consultant"
              << "Cybersecurity Analyst"
              << "AI Engineer"
              << "Full Stack Developer"
              << "Mobile App Developer"
              << "Game Developer"
              << "Cloud Architect"
              << "IT Manager";

    for (const QString &jobTitle : jobTitles)
    {
        ui->JobTitle->addItem(jobTitle);
    }

    QCompleter *jobTitleCompleter = new QCompleter(jobTitles, this);
    jobTitleCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    ui->JobTitle->setCompleter(jobTitleCompleter);
    ui->JobTitle->setEditable(true);
    ui->JobTitle->lineEdit()->setPlaceholderText("Enter the name");

    // QComboBox job title search function
    QStringList companies;
    companies << "Acme Corporation"
              << "Globex Industries"
              << "Initech"
              << "Stark Industries"
              << "Wayne Enterprises"
              << "Umbrella Corporation"
              << "Cyberdyne Systems"
              << "LexCorp"
              << "Oscorp Industries"
              << "Weyland-Yutani Corporation"
              << "Aperture Science"
              << "Tyrell Corporation"
              << "Virtucon"
              << "Gringotts Wizarding Bank"
              << "Wonka Industries"
              << "Dunder Mifflin"
              << "Pawnee City Government"
              << "Monsters, Inc."
              << "Sterling Cooper Draper Pryce"
              << "Strickland Propane";

    for (const QString &company : companies)
    {
        ui->Company->addItem(company);
    }

    QCompleter *companyCompleter = new QCompleter(companies, this);
    companyCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    ui->Company->setCompleter(companyCompleter);
    ui->Company->setEditable(true);
    ui->Company->lineEdit()->setPlaceholderText("Enter the name");

    // QComboBox employment type search function
    ui->EmploymentType->addItem("Full-time");
    ui->EmploymentType->addItem("Part-time");
    ui->EmploymentType->addItem("Contract");
    ui->EmploymentType->addItem("Freelance");
    ui->EmploymentType->addItem("Internship");


    ui->AgeVerificationSwitch->setCheckable(true);

}

UserDetails::~UserDetails()
{
    delete ui;
}


void UserDetails::toggleAgeVerification()
{
    bool currentState = ui->AgeVerificationSwitch->isChecked();
    ui->AgeVerificationSwitch->setChecked(!currentState);
}


