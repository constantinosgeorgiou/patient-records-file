#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *names[] = {
    "Yannis",
    "Christofos",
    "Sofia",
    "Marianna",
    "Vagelis",
    "Maria",
    "Iosif",
    "Dionisis",
    "Konstantina",
    "Theofilos",
    "Giorgos",
    "Dimitris"};

const char *surnames[] = {
    "Ioannidis",
    "Svingos",
    "Karvounari",
    "Rezkalla",
    "Nikolopoulos",
    "Berreta",
    "Koronis",
    "Gaitanis",
    "Oikonomou",
    "Mailis",
    "Michas",
    "Halatsis"};

const char *cities[] = {
    "Athens",
    "San Francisco",
    "Los Angeles",
    "Amsterdam",
    "London",
    "New York",
    "Tokyo",
    "Hong Kong",
    "Munich",
    "Miami"};

// Record:
// recordID
// patientFirstName
// patientLastName
// diseaseID
// country
// entryDate
// exitDate

void generate(const char *filename, int records)
{
    printf("filename: %s, records: %d\n", filename, records);
    FILE *fp;

    // Create or open file with filename
    fp = fopen(filename, "w+");

    // Generate record
    // Insert into file
    fprintf(fp, "overwrite %d\n", records);
    
    // Close file
    fclose(fp);
}

int main(int argc, char const *argv[])
{
    char *filename; // Name of file
    int records;    // Number of records to generate

    // input: filename numberOfRecords
    if (argc == 3)
    {
        // Generate file
        generate(argv[1], atoi(argv[2]));
        // we need atoi() to convert the argument
        // from (const char *) to (int)
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
        printf(" Expected input, number of records to generate ...\n");
    }
    else
    {
        printf("One argument expected.\n");
        printf(" Expected input, number of records to generate ...\n");
    }
    return 0;
}