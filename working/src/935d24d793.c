#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_8 = 10;                           // Tag.BODY
    entity_2 = 20;                           // Tag.BODY
    char entity_6[98];                       // Tag.BODY
    if(entity_8 < entity_2){                 // Tag.BODY
    entity_8 = 58;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 50;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_8] = 'L';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER