#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_8 = 90;                           // Tag.BODY
    char entity_6[44];                       // Tag.BODY
    entity_0 = 78;                           // Tag.BODY
    if(entity_0 < entity_8){                 // Tag.BODY
    entity_0 = 34;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 85;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_0] = '0';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER