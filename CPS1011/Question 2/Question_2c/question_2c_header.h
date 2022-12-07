#ifndef CPS1011_QUESTION_2C_HEADER_H
#define CPS1011_QUESTION_2C_HEADER_H

#define MAX 63 //Max size for String(array)
#define M1 130 //Used for showDT()
#define M2 20  //Used for showDT()

//define structure
typedef struct DataTable_T{
    float Height[5];
    float Weight[5];
    float BMI[5];
    char Name[MAX];
    char Surname[MAX];
    char Gender[MAX];
} DataTable_T;

/*Functions*/
DataTable_T *initDT();
DataTable_T *deinitDT(DataTable_T *memory);
int loadDT(DataTable_T DT[]);
int exportDT(int count, struct DataTable_T const *data, char const *fileName);
int showDT(int row_count, char line[M2][M1]);
void projectDT(char line[M2][M1]);
//MutateDT() function:
void sortByBMI(DataTable_T sort_by_bmi[], int row_count);
void sortByFirstName(DataTable_T sort_by_bmi[], int row_count);
void sortByLastName(DataTable_T sort_by_bmi[], int row_count);

#endif //CPS1011_QUESTION_2C_HEADER_H
