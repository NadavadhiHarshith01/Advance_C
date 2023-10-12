#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Person {
  char name[100];
  int age;
  float salary;
};


int main() {


  // Open the input file.
  FILE *fp = fopen("a1.txt", "r");



  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }


  char name[100];
  int k=3;




  struct Person person[k];

  // Read each line from the file and store the information in the structure.
  // Read the file line by line.
  int i=0;
  while (fgets(person[i].name, sizeof(person[i].name), fp)) {

    if (person[i].name[strlen(person[i].name) - 1] == '\n') {
      // Replace the last character with a null character.
      person[i].name[strlen(person[i].name) - 1] = '\0';
     }
    printf("Name: %s", person[i].name);
    printf("\nAge:");
    scanf("%d",&person[i].age);
    printf("Salary:");
    scanf("%f",&person[i].salary);
    i++;
  }



  // Close the file.
  fclose(fp);

  for(i=0;i<k;i++){
    printf("%s\n",person[i].name);
    printf("%d\n",person[i].age);
    printf("%f\n",person[i].salary);
  }

  // Open the output file.
  fp = fopen("output.txt", "w");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Write the person's information to the file.
  fprintf(fp,"%-30s %20s %30s\n","Names","Age","Salary");
 for(i=0;i<k;i++){
     fprintf(fp, "%-30s %20d %30f\n", person[i].name, person[i].age, person[i].salary);

  }
  // Close the file.
  fclose(fp);

  return 0;
}










