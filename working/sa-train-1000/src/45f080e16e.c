#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_8[59];                       // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_6 = 51;                           // Tag.BODY
    if(entity_2 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 20;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_2] = 'k';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER