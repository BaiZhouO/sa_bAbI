#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_7[62];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_4 = 57;                           // Tag.BODY
    entity_3 = 80;                           // Tag.BODY
    if (entity_5 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_5){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_3] = 'w';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER