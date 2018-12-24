#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_3[59];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 74;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 66;                           // Tag.BODY
    char entity_2[30];                       // Tag.BODY
    if(entity_6 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2[entity_9] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 51;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = 'T';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER