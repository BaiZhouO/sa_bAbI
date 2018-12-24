#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    char entity_5[98];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_0 = 62;                           // Tag.BODY
    if(entity_7 < entity_0){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 15;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_7] = 'A';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER